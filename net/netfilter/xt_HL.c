// SPDX-License-Identifier: GPL-2.0-only
/*
 * TTL modification target for IP tables
 * (C) 2000,2005 by Harald Welte <laforge@netfilter.org>
 *
 * Hop Limit modification target for ip6tables
 * Maciej Soltysiak <solt@dns.toxicfilms.tv>
 */
#define pr_fmt(fmt) KBUILD_MODNAME ": " fmt
#include <linux/module.h>
#include <linux/skbuff.h>
#include <linux/ip.h>
#include <linux/ipv6.h>
#include <net/checksum.h>

#include <linux/netfilter/x_tables.h>
#include <linux/netfilter_ipv4/ipt_TTL.h>
#include <linux/netfilter_ipv6/ip6t_HL.h>

MODULE_AUTHOR("Harald Welte <laforge@netfilter.org>");
MODULE_AUTHOR("Maciej Soltysiak <solt@dns.toxicfilms.tv>");
MODULE_DESCRIPTION("Xtables: Hoplimit/TTL Limit field modification target");
MODULE_LICENSE("GPL");

static unsigned int
ttl_tg(struct sk_buff *skb, const struct xt_action_param *par)
{
	struct iphdr *iph;
	const struct ipt_TTL_info *info = par->targinfo;
	int new_ttl;

	if (skb_ensure_writable(skb, sizeof(*iph)))
		return NF_DROP;

	iph = ip_hdr(skb);

	switch (info->mode) {
	case IPT_TTL_SET:
		new_ttl = info->ttl;
		break;
	case IPT_TTL_INC:
		new_ttl = iph->ttl + info->ttl;
		if (new_ttl > 255)
			new_ttl = 255;
		break;
	case IPT_TTL_DEC:
		new_ttl = iph->ttl - info->ttl;
		if (new_ttl < 0)
			new_ttl = 0;
		break;
	default:
		new_ttl = iph->ttl;
		break;
	}

	if (new_ttl != iph->ttl) {
		csum_replace2(&iph->check, htons(iph->ttl << 8),
					   htons(new_ttl << 8));
		iph->ttl = new_ttl;
	}

	return XT_CONTINUE;
}

static unsigned int
hl_tg6(struct sk_buff *skb, const struct xt_action_param *par)
{
	struct ipv6hdr *ip6h;
	const struct ip6t_HL_info *info = par->targinfo;
	int new_hl;

	if (skb_ensure_writable(skb, sizeof(*ip6h)))
		return NF_DROP;

	ip6h = ipv6_hdr(skb);

	switch (info->mode) {
	case IP6T_HL_SET:
		new_hl = info->hop_limit;
		break;
	case IP6T_HL_INC:
		new_hl = ip6h->hop_limit + info->hop_limit;
		if (new_hl > 255)
			new_hl = 255;
		break;
	case IP6T_HL_DEC:
		new_hl = ip6h->hop_limit - info->hop_limit;
		if (new_hl < 0)
			new_hl = 0;
		break;
	default:
		new_hl = ip6h->hop_limit;
		break;
	}

	ip6h->hop_limit = new_hl;

	return XT_CONTINUE;
}

static int ttl_tg_check(const struct xt_