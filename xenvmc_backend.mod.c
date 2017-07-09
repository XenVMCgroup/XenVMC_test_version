#include <linux/module.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

MODULE_INFO(vermagic, VERMAGIC_STRING);

__visible struct module __this_module
__attribute__((section(".gnu.linkonce.this_module"))) = {
	.name = KBUILD_MODNAME,
	.init = init_module,
#ifdef CONFIG_MODULE_UNLOAD
	.exit = cleanup_module,
#endif
	.arch = MODULE_ARCH_INIT,
};

static const struct modversion_info ____versions[]
__used
__attribute__((section("__versions"))) = {
	{ 0x9b0bb32d, __VMLINUX_SYMBOL_STR(module_layout) },
	{ 0x439cb751, __VMLINUX_SYMBOL_STR(pv_lock_ops) },
	{ 0x75bb675a, __VMLINUX_SYMBOL_STR(finish_wait) },
	{ 0xa56d356, __VMLINUX_SYMBOL_STR(prepare_to_wait_event) },
	{ 0x1000e51, __VMLINUX_SYMBOL_STR(schedule) },
	{ 0x78764f4e, __VMLINUX_SYMBOL_STR(pv_irq_ops) },
	{ 0x254c5afe, __VMLINUX_SYMBOL_STR(paravirt_ticketlocks_enabled) },
	{ 0xf1faac3a, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irq) },
	{ 0xb3f7646e, __VMLINUX_SYMBOL_STR(kthread_should_stop) },
	{ 0xe5c3bc22, __VMLINUX_SYMBOL_STR(kmem_cache_free) },
	{ 0x2545c170, __VMLINUX_SYMBOL_STR(unregister_xenbus_watch) },
	{ 0x521445b, __VMLINUX_SYMBOL_STR(list_del) },
	{ 0x85a36939, __VMLINUX_SYMBOL_STR(_raw_write_lock) },
	{ 0x9d06688b, __VMLINUX_SYMBOL_STR(register_xenbus_watch) },
	{ 0x673e4ae2, __VMLINUX_SYMBOL_STR(kmem_cache_alloc) },
	{ 0xf013cd52, __VMLINUX_SYMBOL_STR(wake_up_process) },
	{ 0x2717665a, __VMLINUX_SYMBOL_STR(kthread_create_on_node) },
	{ 0x81dc333f, __VMLINUX_SYMBOL_STR(dev_add_pack) },
	{ 0xbf468985, __VMLINUX_SYMBOL_STR(dev_get_by_name) },
	{ 0xb3c69ae, __VMLINUX_SYMBOL_STR(init_net) },
	{ 0x28188c35, __VMLINUX_SYMBOL_STR(kmem_cache_create) },
	{ 0x2f030146, __VMLINUX_SYMBOL_STR(kthread_stop) },
	{ 0x48a025d3, __VMLINUX_SYMBOL_STR(dev_remove_pack) },
	{ 0x11855744, __VMLINUX_SYMBOL_STR(kmem_cache_destroy) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0x65992ef9, __VMLINUX_SYMBOL_STR(dev_queue_xmit) },
	{ 0x25b90d02, __VMLINUX_SYMBOL_STR(skb_put) },
	{ 0x2ac20265, __VMLINUX_SYMBOL_STR(__alloc_skb) },
	{ 0xb742fd7, __VMLINUX_SYMBOL_STR(simple_strtol) },
	{ 0xb99d5837, __VMLINUX_SYMBOL_STR(xenbus_read) },
	{ 0x733c3b54, __VMLINUX_SYMBOL_STR(kasprintf) },
	{ 0x96365523, __VMLINUX_SYMBOL_STR(__pskb_pull_tail) },
	{ 0xfe963e07, __VMLINUX_SYMBOL_STR(kfree_skb) },
	{ 0x1a05e1b0, __VMLINUX_SYMBOL_STR(_raw_read_lock) },
	{ 0xe45f60d8, __VMLINUX_SYMBOL_STR(__wake_up) },
	{ 0x68e2f221, __VMLINUX_SYMBOL_STR(_raw_spin_unlock) },
	{ 0x343a1a8, __VMLINUX_SYMBOL_STR(__list_add) },
	{ 0x67f7403e, __VMLINUX_SYMBOL_STR(_raw_spin_lock) },
	{ 0xb2670c09, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x33f94141, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x20000329, __VMLINUX_SYMBOL_STR(simple_strtoul) },
	{ 0x34184afe, __VMLINUX_SYMBOL_STR(current_kernel_time) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0xfe2d570, __VMLINUX_SYMBOL_STR(xenbus_directory) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xb4390f9a, __VMLINUX_SYMBOL_STR(mcount) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "B0E8B474F086EC36432C8CD");
