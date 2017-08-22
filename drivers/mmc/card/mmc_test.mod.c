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
	{ 0xa140872e, __VMLINUX_SYMBOL_STR(single_release) },
	{ 0x9eb9f5cc, __VMLINUX_SYMBOL_STR(seq_read) },
	{ 0x53feaf5, __VMLINUX_SYMBOL_STR(seq_lseek) },
	{ 0x42e2ea4a, __VMLINUX_SYMBOL_STR(mmc_unregister_driver) },
	{ 0x38b5a8a, __VMLINUX_SYMBOL_STR(mmc_register_driver) },
	{ 0x1424f59, __VMLINUX_SYMBOL_STR(sg_copy_to_buffer) },
	{ 0x8371daff, __VMLINUX_SYMBOL_STR(sg_copy_from_buffer) },
	{ 0xefdd2345, __VMLINUX_SYMBOL_STR(sg_init_one) },
	{ 0x12da5bb2, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0x27fa66e1, __VMLINUX_SYMBOL_STR(nr_free_buffer_pages) },
	{ 0x381bc336, __VMLINUX_SYMBOL_STR(mem_map) },
	{ 0xd5152710, __VMLINUX_SYMBOL_STR(sg_next) },
	{ 0x8b623b0b, __VMLINUX_SYMBOL_STR(page_address) },
	{ 0xf88c3301, __VMLINUX_SYMBOL_STR(sg_init_table) },
	{ 0x2c52456b, __VMLINUX_SYMBOL_STR(mmc_wait_for_req) },
	{ 0x87c816f8, __VMLINUX_SYMBOL_STR(mmc_wait_for_cmd) },
	{ 0x5f754e5a, __VMLINUX_SYMBOL_STR(memset) },
	{ 0x2a83e765, __VMLINUX_SYMBOL_STR(mmc_start_req) },
	{ 0x46608fa0, __VMLINUX_SYMBOL_STR(getnstimeofday) },
	{ 0xcd6dda8d, __VMLINUX_SYMBOL_STR(mmc_can_trim) },
	{ 0x13300afe, __VMLINUX_SYMBOL_STR(mmc_erase) },
	{ 0x447b337a, __VMLINUX_SYMBOL_STR(mmc_can_erase) },
	{ 0x9fa21da2, __VMLINUX_SYMBOL_STR(_dev_info) },
	{ 0xcc59e42, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0xeee32097, __VMLINUX_SYMBOL_STR(debugfs_create_file) },
	{ 0x3c9b1ed0, __VMLINUX_SYMBOL_STR(contig_page_data) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
	{ 0xf0fdf6cb, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x6cb65c4d, __VMLINUX_SYMBOL_STR(mmc_rpm_release) },
	{ 0xc67a5d21, __VMLINUX_SYMBOL_STR(mmc_release_host) },
	{ 0xe99a1424, __VMLINUX_SYMBOL_STR(__mmc_claim_host) },
	{ 0x4f0bac33, __VMLINUX_SYMBOL_STR(mmc_rpm_hold) },
	{ 0x46e8a885, __VMLINUX_SYMBOL_STR(__alloc_pages_nodemask) },
	{ 0x86a4889a, __VMLINUX_SYMBOL_STR(kmalloc_order_trace) },
	{ 0x11a13e31, __VMLINUX_SYMBOL_STR(_kstrtol) },
	{ 0xfbc74f64, __VMLINUX_SYMBOL_STR(__copy_from_user) },
	{ 0xe7e68be2, __VMLINUX_SYMBOL_STR(__free_pages) },
	{ 0x73c11911, __VMLINUX_SYMBOL_STR(mmc_set_blocklen) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xe6da44a, __VMLINUX_SYMBOL_STR(set_normalized_timespec) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xc2537a8a, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x369e2372, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x59e5070d, __VMLINUX_SYMBOL_STR(__do_div64) },
	{ 0x7b62f724, __VMLINUX_SYMBOL_STR(mmc_set_data_timeout) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0xe246112d, __VMLINUX_SYMBOL_STR(mmc_can_reset) },
	{ 0xc94f846, __VMLINUX_SYMBOL_STR(mmc_hw_reset_check) },
	{ 0xf7802486, __VMLINUX_SYMBOL_STR(__aeabi_uidivmod) },
	{ 0xe707d823, __VMLINUX_SYMBOL_STR(__aeabi_uidiv) },
	{ 0x9c956a0f, __VMLINUX_SYMBOL_STR(seq_printf) },
	{ 0x55409c92, __VMLINUX_SYMBOL_STR(single_open) },
	{ 0x555037f, __VMLINUX_SYMBOL_STR(debugfs_remove) },
	{ 0x50878de1, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x73aa1262, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

