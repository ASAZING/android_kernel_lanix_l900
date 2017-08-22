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
	{ 0x480fae03, __VMLINUX_SYMBOL_STR(clk_unprepare) },
	{ 0x92b57248, __VMLINUX_SYMBOL_STR(flush_work) },
	{ 0x2d3385d3, __VMLINUX_SYMBOL_STR(system_wq) },
	{ 0x11c8654a, __VMLINUX_SYMBOL_STR(cdev_del) },
	{ 0xc2537a8a, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x586982f, __VMLINUX_SYMBOL_STR(cdev_init) },
	{ 0x9b388444, __VMLINUX_SYMBOL_STR(get_zeroed_page) },
	{ 0xfbc74f64, __VMLINUX_SYMBOL_STR(__copy_from_user) },
	{ 0x22e1ae6f, __VMLINUX_SYMBOL_STR(up_read) },
	{ 0xc2c7fa3a, __VMLINUX_SYMBOL_STR(clk_enable) },
	{ 0x5fc56a46, __VMLINUX_SYMBOL_STR(_raw_spin_unlock) },
	{ 0x381bc336, __VMLINUX_SYMBOL_STR(mem_map) },
	{ 0x67c2fa54, __VMLINUX_SYMBOL_STR(__copy_to_user) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x3ae79c12, __VMLINUX_SYMBOL_STR(clk_disable) },
	{ 0xdfabe0ff, __VMLINUX_SYMBOL_STR(scm_call) },
	{ 0x75f2747c, __VMLINUX_SYMBOL_STR(device_destroy) },
	{ 0x2e1ca751, __VMLINUX_SYMBOL_STR(clk_put) },
	{ 0x50878de1, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x7485e15e, __VMLINUX_SYMBOL_STR(unregister_chrdev_region) },
	{ 0x45524e7e, __VMLINUX_SYMBOL_STR(kthread_create_on_node) },
	{ 0x455293f6, __VMLINUX_SYMBOL_STR(down_read) },
	{ 0x275ef902, __VMLINUX_SYMBOL_STR(__init_waitqueue_head) },
	{ 0xe707d823, __VMLINUX_SYMBOL_STR(__aeabi_uidiv) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0x5f754e5a, __VMLINUX_SYMBOL_STR(memset) },
	{ 0xcc59e42, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x21ff05be, __VMLINUX_SYMBOL_STR(mutex_lock_interruptible) },
	{ 0xf0a3421f, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0x372333b1, __VMLINUX_SYMBOL_STR(kthread_stop) },
	{ 0xfd5683b9, __VMLINUX_SYMBOL_STR(wait_for_completion_interruptible) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0x73aa1262, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x40e5560, __VMLINUX_SYMBOL_STR(device_create) },
	{ 0xd6b8e852, __VMLINUX_SYMBOL_STR(request_threaded_irq) },
	{ 0x11544a07, __VMLINUX_SYMBOL_STR(__get_page_tail) },
	{ 0x37ea9868, __VMLINUX_SYMBOL_STR(release_pages) },
	{ 0xe3537035, __VMLINUX_SYMBOL_STR(cdev_add) },
	{ 0x9fa21da2, __VMLINUX_SYMBOL_STR(_dev_info) },
	{ 0xbc10dd97, __VMLINUX_SYMBOL_STR(__put_user_4) },
	{ 0xd9ce8f0c, __VMLINUX_SYMBOL_STR(strnlen) },
	{ 0x93fca811, __VMLINUX_SYMBOL_STR(__get_free_pages) },
	{ 0xfed27666, __VMLINUX_SYMBOL_STR(get_user_pages) },
	{ 0x1000e51, __VMLINUX_SYMBOL_STR(schedule) },
	{ 0xe5e68643, __VMLINUX_SYMBOL_STR(clk_prepare) },
	{ 0x8093b24b, __VMLINUX_SYMBOL_STR(wake_up_process) },
	{ 0x369e2372, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x9c0bd51f, __VMLINUX_SYMBOL_STR(_raw_spin_lock) },
	{ 0xf3c571b6, __VMLINUX_SYMBOL_STR(clk_get) },
	{ 0x4302d0eb, __VMLINUX_SYMBOL_STR(free_pages) },
	{ 0x17fe3ebc, __VMLINUX_SYMBOL_STR(sched_setscheduler) },
	{ 0xb3f7646e, __VMLINUX_SYMBOL_STR(kthread_should_stop) },
	{ 0x1e047854, __VMLINUX_SYMBOL_STR(warn_slowpath_fmt) },
	{ 0x9c55cec, __VMLINUX_SYMBOL_STR(schedule_timeout_interruptible) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x8634e03b, __VMLINUX_SYMBOL_STR(remap_pfn_range) },
	{ 0x5f5a5d28, __VMLINUX_SYMBOL_STR(put_page) },
	{ 0x8ba4d647, __VMLINUX_SYMBOL_STR(class_destroy) },
	{ 0x564152db, __VMLINUX_SYMBOL_STR(get_pid_task) },
	{ 0x7b5c8440, __VMLINUX_SYMBOL_STR(vm_munmap) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0x676bbc0f, __VMLINUX_SYMBOL_STR(_set_bit) },
	{ 0xb2d48a2e, __VMLINUX_SYMBOL_STR(queue_work_on) },
	{ 0xd4669fad, __VMLINUX_SYMBOL_STR(complete) },
	{ 0x34380e5e, __VMLINUX_SYMBOL_STR(vmalloc_to_page) },
	{ 0x40ec1fad, __VMLINUX_SYMBOL_STR(dev_set_name) },
	{ 0x49ebacbd, __VMLINUX_SYMBOL_STR(_clear_bit) },
	{ 0x6d044c26, __VMLINUX_SYMBOL_STR(param_ops_uint) },
	{ 0x6b72b8bb, __VMLINUX_SYMBOL_STR(__class_create) },
	{ 0x29537c9e, __VMLINUX_SYMBOL_STR(alloc_chrdev_region) },
	{ 0x15ccd6f2, __VMLINUX_SYMBOL_STR(is_vmalloc_addr) },
	{ 0xf20dabd8, __VMLINUX_SYMBOL_STR(free_irq) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

