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
	{ 0x2d3385d3, __VMLINUX_SYMBOL_STR(system_wq) },
	{ 0xc2537a8a, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x12da5bb2, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0x1424f59, __VMLINUX_SYMBOL_STR(sg_copy_to_buffer) },
	{ 0x528c709d, __VMLINUX_SYMBOL_STR(simple_read_from_buffer) },
	{ 0x9b655e0f, __VMLINUX_SYMBOL_STR(debugfs_create_dir) },
	{ 0x381bc336, __VMLINUX_SYMBOL_STR(mem_map) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x97255bdf, __VMLINUX_SYMBOL_STR(strlen) },
	{ 0x18de4658, __VMLINUX_SYMBOL_STR(dev_set_drvdata) },
	{ 0xcf8cc5ee, __VMLINUX_SYMBOL_STR(msm_bus_scale_unregister_client) },
	{ 0x15cb672d, __VMLINUX_SYMBOL_STR(crypto_ablkcipher_type) },
	{ 0x7a0210cb, __VMLINUX_SYMBOL_STR(crypto_dequeue_request) },
	{ 0x79aa04a2, __VMLINUX_SYMBOL_STR(get_random_bytes) },
	{ 0x8371daff, __VMLINUX_SYMBOL_STR(sg_copy_from_buffer) },
	{ 0xdfabe0ff, __VMLINUX_SYMBOL_STR(scm_call) },
	{ 0x4205ad24, __VMLINUX_SYMBOL_STR(cancel_work_sync) },
	{ 0xf087137d, __VMLINUX_SYMBOL_STR(__dynamic_pr_debug) },
	{ 0x78f062cb, __VMLINUX_SYMBOL_STR(msm_bus_scale_client_update_request) },
	{ 0x593a99b, __VMLINUX_SYMBOL_STR(init_timer_key) },
	{ 0x50878de1, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0xeee32097, __VMLINUX_SYMBOL_STR(debugfs_create_file) },
	{ 0x103c9c3e, __VMLINUX_SYMBOL_STR(qce_ablk_cipher_req) },
	{ 0x6174e47b, __VMLINUX_SYMBOL_STR(crypto_aead_type) },
	{ 0x4ae58a93, __VMLINUX_SYMBOL_STR(debugfs_remove_recursive) },
	{ 0x91dda801, __VMLINUX_SYMBOL_STR(scatterwalk_map_and_copy) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0x275ef902, __VMLINUX_SYMBOL_STR(__init_waitqueue_head) },
	{ 0xdd0a2ba2, __VMLINUX_SYMBOL_STR(strlcat) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0xd5f2172f, __VMLINUX_SYMBOL_STR(del_timer_sync) },
	{ 0x5f754e5a, __VMLINUX_SYMBOL_STR(memset) },
	{ 0x19de6273, __VMLINUX_SYMBOL_STR(msm_bus_cl_get_pdata) },
	{ 0xcc59e42, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x51d559d1, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irqrestore) },
	{ 0xf0a3421f, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x71c90087, __VMLINUX_SYMBOL_STR(memcmp) },
	{ 0xfd5683b9, __VMLINUX_SYMBOL_STR(wait_for_completion_interruptible) },
	{ 0xfaef0ed, __VMLINUX_SYMBOL_STR(__tasklet_schedule) },
	{ 0x9bdca826, __VMLINUX_SYMBOL_STR(crypto_register_ahash) },
	{ 0x73e20c1c, __VMLINUX_SYMBOL_STR(strlcpy) },
	{ 0x73aa1262, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0xd26f8cb, __VMLINUX_SYMBOL_STR(qce_enable_clk) },
	{ 0x9545af6d, __VMLINUX_SYMBOL_STR(tasklet_init) },
	{ 0xbe2c0274, __VMLINUX_SYMBOL_STR(add_timer) },
	{ 0x5a61e0c1, __VMLINUX_SYMBOL_STR(platform_driver_register) },
	{ 0x91c78069, __VMLINUX_SYMBOL_STR(device_init_wakeup) },
	{ 0x499043d3, __VMLINUX_SYMBOL_STR(crypto_init_queue) },
	{ 0x6a264939, __VMLINUX_SYMBOL_STR(crypto_nivaead_type) },
	{ 0x82072614, __VMLINUX_SYMBOL_STR(tasklet_kill) },
	{ 0x71a972ea, __VMLINUX_SYMBOL_STR(qce_hw_support) },
	{ 0xaad503f7, __VMLINUX_SYMBOL_STR(crypto_enqueue_request) },
	{ 0x9fa21da2, __VMLINUX_SYMBOL_STR(_dev_info) },
	{ 0x1437bc5e, __VMLINUX_SYMBOL_STR(qce_aead_req) },
	{ 0xf0fdf6cb, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0xbb850e41, __VMLINUX_SYMBOL_STR(qce_open) },
	{ 0x3bd1b1f6, __VMLINUX_SYMBOL_STR(msecs_to_jiffies) },
	{ 0x81a61e31, __VMLINUX_SYMBOL_STR(qce_disable_clk) },
	{ 0x288c9665, __VMLINUX_SYMBOL_STR(crypto_unregister_ahash) },
	{ 0x7c70c0c6, __VMLINUX_SYMBOL_STR(crypto_register_alg) },
	{ 0x369e2372, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x598542b2, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irqsave) },
	{ 0x575c81e1, __VMLINUX_SYMBOL_STR(qce_close) },
	{ 0xe30294bb, __VMLINUX_SYMBOL_STR(pm_stay_awake) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x7ded90b3, __VMLINUX_SYMBOL_STR(msm_bus_scale_register_client) },
	{ 0xcfd9a2c0, __VMLINUX_SYMBOL_STR(des_ekey) },
	{ 0x1a08a063, __VMLINUX_SYMBOL_STR(pm_relax) },
	{ 0xf9e73082, __VMLINUX_SYMBOL_STR(scnprintf) },
	{ 0x7a4497db, __VMLINUX_SYMBOL_STR(kzfree) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
	{ 0xb2d48a2e, __VMLINUX_SYMBOL_STR(queue_work_on) },
	{ 0xd4669fad, __VMLINUX_SYMBOL_STR(complete) },
	{ 0xb81960ca, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0xca54fee, __VMLINUX_SYMBOL_STR(_test_and_set_bit) },
	{ 0x7466ce9f, __VMLINUX_SYMBOL_STR(platform_driver_unregister) },
	{ 0x7e488e25, __VMLINUX_SYMBOL_STR(crypto_unregister_alg) },
	{ 0x4c9a0e78, __VMLINUX_SYMBOL_STR(dev_get_drvdata) },
	{ 0x75b45b18, __VMLINUX_SYMBOL_STR(qce_process_sha_req) },
	{ 0x9cb66b66, __VMLINUX_SYMBOL_STR(crypto_ahash_type) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

