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
	{ 0xc2537a8a, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x1ff5eecc, __VMLINUX_SYMBOL_STR(mobicore_open) },
	{ 0x50878de1, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x3e8ef947, __VMLINUX_SYMBOL_STR(mobicore_unmap_vmem) },
	{ 0xcc59e42, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x21ff05be, __VMLINUX_SYMBOL_STR(mutex_lock_interruptible) },
	{ 0xf0a3421f, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0x870c3888, __VMLINUX_SYMBOL_STR(netlink_kernel_release) },
	{ 0xcad6f326, __VMLINUX_SYMBOL_STR(mobicore_map_vmem) },
	{ 0x9cbc2337, __VMLINUX_SYMBOL_STR(mobicore_free_wsm) },
	{ 0x89bf9104, __VMLINUX_SYMBOL_STR(netlink_unicast) },
	{ 0x222c9250, __VMLINUX_SYMBOL_STR(init_net) },
	{ 0x9fa21da2, __VMLINUX_SYMBOL_STR(_dev_info) },
	{ 0x1416690c, __VMLINUX_SYMBOL_STR(__alloc_skb) },
	{ 0x863c302d, __VMLINUX_SYMBOL_STR(mobicore_allocate_wsm) },
	{ 0xf0fdf6cb, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x3bd1b1f6, __VMLINUX_SYMBOL_STR(msecs_to_jiffies) },
	{ 0x6991e091, __VMLINUX_SYMBOL_STR(kfree_skb) },
	{ 0x36271517, __VMLINUX_SYMBOL_STR(netlink_ack) },
	{ 0x369e2372, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x8715b64d, __VMLINUX_SYMBOL_STR(__netlink_kernel_create) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x4be7fb63, __VMLINUX_SYMBOL_STR(up) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
	{ 0x40ec1fad, __VMLINUX_SYMBOL_STR(dev_set_name) },
	{ 0x838c1326, __VMLINUX_SYMBOL_STR(__nlmsg_put) },
	{ 0x837d0f0a, __VMLINUX_SYMBOL_STR(down_timeout) },
	{ 0x4744d916, __VMLINUX_SYMBOL_STR(mobicore_release) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=mcDrvModule";

