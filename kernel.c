#include<linux/init.h>
#include<linux/module.h>

static int begin_module(void){
	printk(KERN_INFO "Wellcome...\n");
	return 0;
}

static void end_module(void){
	printk(KERN_INFO "Bye....\n");
	return;
}

module_init(begin_module);
module_exit(end_module);