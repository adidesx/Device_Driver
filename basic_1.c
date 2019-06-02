#include <linux/module.h>

int __init init_module (void)
{
    printk (KERN_INFO "Hello: init_module loaded at 0x%p\n", init_module);
    return 0;
}

void __exit cleanup_module (void)
{
    printk (KERN_INFO "Bye: cleanup_module loaded at 0x%p\n", cleanup_module);
}
