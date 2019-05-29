#include <linux/init.h>
#include <linux/kernel.h>
#include <linux/module.h>

int int_module(void) {
	printk("module init\n");
	return 0;
}

void cleanup_module(void) {
	printk("module cleanup\n");
}