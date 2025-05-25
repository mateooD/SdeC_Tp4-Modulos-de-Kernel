#include <linux/module.h>
#include <linux/kernel.h>

int init_module(void) {
    printk(KERN_INFO "Hola, este es mi primer módulo del kernel.\n");
    return 0;
}

void cleanup_module(void) {
    printk(KERN_INFO "Módulo del kernel eliminado.\n");
}

MODULE_LICENSE("GPL");
MODULE_AUTHOR("Multitaskers");
MODULE_DESCRIPTION("Un módulo de ejemplo Hello World");
