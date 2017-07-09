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
	{ 0x11855744, __VMLINUX_SYMBOL_STR(kmem_cache_destroy) },
	{ 0x45d14bdf, __VMLINUX_SYMBOL_STR(hypercall_page) },
	{ 0x33f94141, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0xd2b09ce5, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0x2545c170, __VMLINUX_SYMBOL_STR(unregister_xenbus_watch) },
	{ 0xa2ef34d7, __VMLINUX_SYMBOL_STR(rps_sock_flow_table) },
	{ 0x7906df73, __VMLINUX_SYMBOL_STR(sockfd_lookup) },
	{ 0x68e2f221, __VMLINUX_SYMBOL_STR(_raw_spin_unlock) },
	{ 0x439cb751, __VMLINUX_SYMBOL_STR(pv_lock_ops) },
	{ 0x9d06688b, __VMLINUX_SYMBOL_STR(register_xenbus_watch) },
	{ 0xdd1eea25, __VMLINUX_SYMBOL_STR(__napi_complete) },
	{ 0x60d1064, __VMLINUX_SYMBOL_STR(set_memory_ro) },
	{ 0xc1d8cfaf, __VMLINUX_SYMBOL_STR(__fdget) },
	{ 0x20d8154, __VMLINUX_SYMBOL_STR(__skb_checksum_complete_head) },
	{ 0x34184afe, __VMLINUX_SYMBOL_STR(current_kernel_time) },
	{ 0xfe727411, __VMLINUX_SYMBOL_STR(get_phys_to_machine) },
	{ 0x55526907, __VMLINUX_SYMBOL_STR(xen_features) },
	{ 0xb6230f1f, __VMLINUX_SYMBOL_STR(gnttab_grant_foreign_access) },
	{ 0x1a05e1b0, __VMLINUX_SYMBOL_STR(_raw_read_lock) },
	{ 0xbf468985, __VMLINUX_SYMBOL_STR(dev_get_by_name) },
	{ 0x20000329, __VMLINUX_SYMBOL_STR(simple_strtoul) },
	{ 0x299c9d3, __VMLINUX_SYMBOL_STR(sock_queue_rcv_skb) },
	{ 0x593a99b, __VMLINUX_SYMBOL_STR(init_timer_key) },
	{ 0x4629334c, __VMLINUX_SYMBOL_STR(__preempt_count) },
	{ 0x7a2af7b4, __VMLINUX_SYMBOL_STR(cpu_number) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0x2717665a, __VMLINUX_SYMBOL_STR(kthread_create_on_node) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0x343a1a8, __VMLINUX_SYMBOL_STR(__list_add) },
	{ 0x86623fd7, __VMLINUX_SYMBOL_STR(notify_remote_via_irq) },
	{ 0x96365523, __VMLINUX_SYMBOL_STR(__pskb_pull_tail) },
	{ 0x531d5884, __VMLINUX_SYMBOL_STR(tcp_hashinfo) },
	{ 0x68dfc59f, __VMLINUX_SYMBOL_STR(__init_waitqueue_head) },
	{ 0xc671e369, __VMLINUX_SYMBOL_STR(_copy_to_user) },
	{ 0xe41534ce, __VMLINUX_SYMBOL_STR(bind_evtchn_to_irqhandler) },
	{ 0xd5f2172f, __VMLINUX_SYMBOL_STR(del_timer_sync) },
	{ 0xe30388bc, __VMLINUX_SYMBOL_STR(free_vm_area) },
	{ 0xf97456ea, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irqrestore) },
	{ 0x49c47e2b, __VMLINUX_SYMBOL_STR(current_task) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x3c3fce39, __VMLINUX_SYMBOL_STR(__local_bh_enable_ip) },
	{ 0x4c9d28b0, __VMLINUX_SYMBOL_STR(phys_base) },
	{ 0xb4390f9a, __VMLINUX_SYMBOL_STR(mcount) },
	{ 0xe5c3bc22, __VMLINUX_SYMBOL_STR(kmem_cache_free) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0x59750f38, __VMLINUX_SYMBOL_STR(skb_push) },
	{ 0x85a36939, __VMLINUX_SYMBOL_STR(_raw_write_lock) },
	{ 0xeeb04e7b, __VMLINUX_SYMBOL_STR(xen_event_channel_op_compat) },
	{ 0x521445b, __VMLINUX_SYMBOL_STR(list_del) },
	{ 0x907dae04, __VMLINUX_SYMBOL_STR(alloc_vm_area) },
	{ 0x2386e329, __VMLINUX_SYMBOL_STR(sk_free) },
	{ 0x48a025d3, __VMLINUX_SYMBOL_STR(dev_remove_pack) },
	{ 0x8834396c, __VMLINUX_SYMBOL_STR(mod_timer) },
	{ 0xbe2c0274, __VMLINUX_SYMBOL_STR(add_timer) },
	{ 0xa20ce1b8, __VMLINUX_SYMBOL_STR(net_msg_warn) },
	{ 0xb3c69ae, __VMLINUX_SYMBOL_STR(init_net) },
	{ 0x4caa977, __VMLINUX_SYMBOL_STR(fput) },
	{ 0x673e4ae2, __VMLINUX_SYMBOL_STR(kmem_cache_alloc) },
	{ 0x78764f4e, __VMLINUX_SYMBOL_STR(pv_irq_ops) },
	{ 0x2ac20265, __VMLINUX_SYMBOL_STR(__alloc_skb) },
	{ 0xbbeed7a2, __VMLINUX_SYMBOL_STR(__napi_schedule) },
	{ 0x93fca811, __VMLINUX_SYMBOL_STR(__get_free_pages) },
	{ 0x1000e51, __VMLINUX_SYMBOL_STR(schedule) },
	{ 0xfe963e07, __VMLINUX_SYMBOL_STR(kfree_skb) },
	{ 0xf1faac3a, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irq) },
	{ 0x5f495601, __VMLINUX_SYMBOL_STR(pv_cpu_ops) },
	{ 0xbdb7aeec, __VMLINUX_SYMBOL_STR(_raw_write_lock_irq) },
	{ 0xf013cd52, __VMLINUX_SYMBOL_STR(wake_up_process) },
	{ 0xb2670c09, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x67f7403e, __VMLINUX_SYMBOL_STR(_raw_spin_lock) },
	{ 0x21fb443e, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irqsave) },
	{ 0x2a18c74, __VMLINUX_SYMBOL_STR(nf_conntrack_destroy) },
	{ 0x28188c35, __VMLINUX_SYMBOL_STR(kmem_cache_create) },
	{ 0x4302d0eb, __VMLINUX_SYMBOL_STR(free_pages) },
	{ 0xe45f60d8, __VMLINUX_SYMBOL_STR(__wake_up) },
	{ 0xeba9820b, __VMLINUX_SYMBOL_STR(sock_from_file) },
	{ 0xf6ebc03b, __VMLINUX_SYMBOL_STR(net_ratelimit) },
	{ 0xb3f7646e, __VMLINUX_SYMBOL_STR(kthread_should_stop) },
	{ 0xa56d356, __VMLINUX_SYMBOL_STR(prepare_to_wait_event) },
	{ 0x8b9200fd, __VMLINUX_SYMBOL_STR(lookup_address) },
	{ 0x27b20b04, __VMLINUX_SYMBOL_STR(__xfrm_policy_check) },
	{ 0x1e047854, __VMLINUX_SYMBOL_STR(warn_slowpath_fmt) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x69acdf38, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0xb99d5837, __VMLINUX_SYMBOL_STR(xenbus_read) },
	{ 0x731dba7a, __VMLINUX_SYMBOL_STR(xen_domain_type) },
	{ 0x9af89f98, __VMLINUX_SYMBOL_STR(memcpy_fromiovec) },
	{ 0x254c5afe, __VMLINUX_SYMBOL_STR(paravirt_ticketlocks_enabled) },
	{ 0x75bb675a, __VMLINUX_SYMBOL_STR(finish_wait) },
	{ 0xad0798d3, __VMLINUX_SYMBOL_STR(udp4_lib_lookup) },
	{ 0x4ebfe2ed, __VMLINUX_SYMBOL_STR(__inet_lookup_listener) },
	{ 0x81dc333f, __VMLINUX_SYMBOL_STR(dev_add_pack) },
	{ 0xf97666a0, __VMLINUX_SYMBOL_STR(set_memory_rw) },
	{ 0x65992ef9, __VMLINUX_SYMBOL_STR(dev_queue_xmit) },
	{ 0xfd51b281, __VMLINUX_SYMBOL_STR(gnttab_end_foreign_access_ref) },
	{ 0x25b90d02, __VMLINUX_SYMBOL_STR(skb_put) },
	{ 0x471bbf81, __VMLINUX_SYMBOL_STR(__skb_checksum_complete) },
	{ 0xdcb0349b, __VMLINUX_SYMBOL_STR(sys_close) },
	{ 0x7712771a, __VMLINUX_SYMBOL_STR(unbind_from_irqhandler) },
	{ 0x5764bfcd, __VMLINUX_SYMBOL_STR(__inet_lookup_established) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "13D676F3C84CBBE0B946477");
