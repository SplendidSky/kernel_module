#include <linux/init.h>
#include <linux/kernel.h>
#include <linux/module.h>

extern void bar(void);

static int baudrate = 9600;
static int port[4] = { 0, 1, 2, 3 };
static char *name = "vser";

module_param(baudrate, int, S_IRUGO);
module_param_array(port, int, NULL, S_IRUGO);
module_param(name, charp, S_IRUGO);


static int __init vser_init(void) {
	printk("vser_init\n");
	printk("baudrate: %d\n", baudrate);
	printk("port: ");

	int i;
	for (i = 0; i < ARRAY_SIZE(port); i++) {
		printk("%d ", port[i]);
	}
	printk("\n");
	printk("name: %s\n", name);
	bar();
	return 0;
}

static void __exit vser_exit(void) {
	printk("vser_exit\n");
}

module_init(vser_init);
module_exit(vser_exit);

MODULE_LICENSE("GPL");
MODULE_AUTHOR("Weichen Chen <splendidsky1117@gmail.com>");
MODULE_DESCRIPTION("A simple module");
MODULE_ALIAS("virtual-serial");