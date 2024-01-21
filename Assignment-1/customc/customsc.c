#include <linux/kernel.h>
#include <linux/syscalls.h>

asmlinkage long __x64_sys_customsc(void) {
	pr_info("This is the new system call implemented by Arnav Arora\n");
	return 0;
}

EXPORT_SYMBOL(__x64_sys_customsc);

