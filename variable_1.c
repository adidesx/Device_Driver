#include <linux/module.h>
#include <linux/moduleparam.h>

static __initdata int a = 20;
module_param(a,int,0);
MODULE_PARM_DESC(a,"integer variable");

static char *name="ADITYA";
module_param(b,charp,0);
MODULE_PARM_DESC(b,"String pointer");

static int __init myinit(void)
{
        printk("my init\n");
        printk("a = %d\n",a);
        printk("name = %s\n",b);
        return 0;
}

static void __exit myclean(void)
{
        printk("mycleanup\n");
//      printk("a=%d\n",a); if uncommented results in kernel panic as a is released after initmodule is execued
}

module_init(myinit);
module_exit(myclean);

MODULE_AUTHOR("ADITYA");
MODULE_DESCRIPTION("This is my first program");
