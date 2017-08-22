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
	{ 0xb160e608, __VMLINUX_SYMBOL_STR(input_unregister_handler) },
	{ 0x4486187, __VMLINUX_SYMBOL_STR(input_register_handler) },
	{ 0xc2537a8a, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0xd79782c0, __VMLINUX_SYMBOL_STR(input_open_device) },
	{ 0xe5bdfaad, __VMLINUX_SYMBOL_STR(input_register_handle) },
	{ 0x369e2372, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x3a819cff, __VMLINUX_SYMBOL_STR(input_unregister_handle) },
	{ 0xb9a1939, __VMLINUX_SYMBOL_STR(input_close_device) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("input:b*v*p*e*-e*k*r*a*m*l*s*f*w*");
