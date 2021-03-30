/************************************************************
 * This file I got from Linux Journal.                      *
 ************************************************************/

static struct usb_driver led_driver = {
	.owner =	THIS_MODULE,
	.name =		"usbled",
	.probe =	led_probe,
	.disconnect =	led_disconnect,
	.id_table =	id_table,
};
static struct usb_device_id id_table [] = {
	{ USB_DEVICE(VENDOR_ID, PRODUCT_ID) },
	{ },
};
MODULE_DEVICE_TABLE (usb, id_table);
retval = usb_register(&led_driver);
if (retval)
        err("usb_register failed. "
            "Error number %d", retval);

usb_deregister(&led_driver);

/* Initialize our local device structure */
dev = kmalloc(sizeof(struct usb_led), GFP_KERNEL);
memset (dev, 0x00, sizeof (*dev));

dev->udev = usb_get_dev(udev);
usb_set_intfdata (interface, dev);

/* Create our three sysfs files in the USB
* device directory */
device_create_file(&interface->dev, &dev_attr_blue);
device_create_file(&interface->dev, &dev_attr_red);
device_create_file(&interface->dev, &dev_attr_green);

dev_info(&interface->dev,
    "USB LED device now attached\n");
return 0;
dev = usb_get_intfdata (interface);
usb_set_intfdata (interface, NULL);

device_remove_file(&interface->dev, &dev_attr_blue);
device_remove_file(&interface->dev, &dev_attr_red);
device_remove_file(&interface->dev, &dev_attr_green);

usb_put_dev(dev->udev);
kfree(dev);

dev_info(&interface->dev,
         "USB LED now disconnected\n");
#define show_set(value)	                           \
static ssize_t                                     \
show_##value(struct device *dev, char *buf)        \
{                                                  \
   struct usb_interface *intf =                    \
      to_usb_interface(dev);                       \
   struct usb_led *led = usb_get_intfdata(intf);   \
                                                   \
   return sprintf(buf, "%d\n", led->value);        \
}                                                  \
                                                   \
static ssize_t                                     \
set_##value(struct device *dev, const char *buf,   \
            size_t count)                          \
{                                                  \
   struct usb_interface *intf =                    \
      to_usb_interface(dev);                       \
   struct usb_led *led = usb_get_intfdata(intf);   \
   int temp = simple_strtoul(buf, NULL, 10);       \
                                                   \
   led->value = temp;                              \
   change_color(led);                              \
   return count;                                   \
}                                                  \

static DEVICE_ATTR(value, S_IWUGO | S_IRUGO,
                   show_##value, set_##value);
show_set(blue);
show_set(red);
show_set(green);

#define BLUE	0x04
#define RED	0x02
#define GREEN	0x01
   buffer = kmalloc(8, GFP_KERNEL);

   color = 0x07;
   if (led->blue)
      color &= ~(BLUE);
   if (led->red)
      color &= ~(RED);
   if (led->green)
      color &= ~(GREEN);
   retval =
      usb_control_msg(led->udev,
                      usb_sndctrlpipe(led->udev, 0),
                      0x12,
                      0xc8,
                      (0x02 * 0x100) + 0x0a,
                      (0x00 * 0x100) + color,
                      buffer,
                      8,
                      2 * HZ);
   kfree(buffer);
