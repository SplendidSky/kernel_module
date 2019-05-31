#include <linux/kernel.h>
#include <linux/module.h>

static int expval = 5;
EXPORT_SYMBOL(expval);

static void expfun(void) {
	printk("expfun\n");
}
EXPORT_SYMBOL(expfun);

MODULE_LICENSE("GPL");
MODULE_AUTHOR("Weichen Chen <splendidsky1117@gmail.com>");