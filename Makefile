# Yeah, I'm gonna try to make a makefile. Let's see how bad I screw up.

NAME = "Eeek6"
EXTRAVERSION = "rc6"

# The one file here at platypus-os-desktop-pre-alpha/
# :)

obj-y += foo-bar.o

# ALLLLLL the folders :\

obj-$(CONFIG_CPU) += cpu/
obj-$(CONFIG_DEVICES) += devices/
obj-$(CONFIG_DOCUMENTATION) += documentation/
obj-$(CONFIG_FS) += fs/
obj-$(CONFIG_INCLUDE) += include/
obj-$(CONFIG_KERNEL) += kernel/
obj-$(CONFIG_EMGRAPH) += libraries/graphics/emerald/libk/
obj-$(CONFIG_MEMORY) += memory/
obj-$(CONFIG_INTERNET) += net/
obj-$(CONFIG_SECURITY) += security/
