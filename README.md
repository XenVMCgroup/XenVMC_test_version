This is a test version of XenVMC, not a release one.
We don't promise there are no bugs.
(2017-5-16)

Our testing environment:
HardWare platform: Dell PowerEdge R720
	- CPU: 8 * Xeon E5 2600
	- RAM: 64GB

SoftWare platform:
	- Hypervisor: Xen-4.6.1
	- Dom0&DomUs OS: CentOS-6.5
	- Dom0&DomUs OS kernel: Linux-3.18.21

DomU:
	- 2 VCPUs
	- 1GB RAM

Others:
	- netperf-2.6
	- ntp(default version in CentOS-6.5 repo)
	- TP-Link TL-WR886N 450M wireless router(connect physical machines in VM migration tests)