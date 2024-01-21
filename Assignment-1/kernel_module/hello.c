#include <linux/init.h>
#include <linux/module.h>

static int __init hello_start(void){
	printk(KERN_INFO "Loading hello module...\n");
	printk(KERN_INFO "Hello world\n");
	return 0;
}

static void __exit hello_end(void){
	printk(KERN_INFO "Goodbye!\n");
}

module_init(hello_start);
module_exit(hello_end);

MODULE_LICENSE("GPL");
MODULE_AUTHOR("Arnav Arora");
MODULE_DESCRIPTION("A hello world kernel module");
MODULE_VERSION("0.1");

