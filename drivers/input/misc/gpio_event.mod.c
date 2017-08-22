#include <linux/module.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

MODULE_INFO(vermagic, VERMAGIC_STRING);

struct module __this_module
__attribute__((section(".gnu.linkonce.this_module"))) = {
	.name = KBUILD_MODNAME,
	.init = init_module,
#ifdef CONFIG_MODULE_UNLOAD
	.exit = cleanup_module,
#endif
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

static const struct modversion_info ____versions[]
__used
__attribute__((section("__versions"))) = {
	{ 0x87113ff9, __VMLINUX_SYMBOL_STR(module_layout) },
	{ 0x7466ce9f, __VMLINUX_SYMBOL_STR(platform_driver_unregister) },
	{ 0x5a61e0c1, __VMLINUX_SYMBOL_STR(platform_driver_register) },
	{ 0xdd591a74, __VMLINUX_SYMBOL_STR(input_free_device) },
	{ 0xa670752b, __VMLINUX_SYMBOL_STR(input_register_device) },
	{ 0x58ef84e3, __VMLINUX_SYMBOL_STR(input_allocate_device) },
	{ 0x18de4658, __VMLINUX_SYMBOL_STR(dev_set_drvdata) },
	{ 0x12da5bb2, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x5d7abbe3, __VMLINUX_SYMBOL_STR(input_unregister_device) },
	{ 0x4c9a0e78, __VMLINUX_SYMBOL_STR(dev_get_drvdata) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

