#include<linux/kernel.h>
#include <linux/module.h> /* Needed by all modules */
#include <linux/printk.h> /* Needed for pr_info() */
#include<linux/proc_fs.h>
#include<linux/uaccess.h>
#include <linux/version.h>

int init_module(void) {
pr_info("Hi Student!\n");
return 0;
}
void cleanup_module(void) {
pr_info("Goodbye Student!\n");
}
MODULE_LICENSE("GPL");