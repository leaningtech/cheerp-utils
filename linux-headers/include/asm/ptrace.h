/* SPDX-License-Identifier: GPL-2.0 WITH Linux-syscall-note */
#ifndef _ASM_X86_PTRACE_H
#define _ASM_X86_PTRACE_H

	/* For */
#include <asm/ptrace-abi.h>
#include <asm/processor-flags.h>


#ifndef __ASSEMBLER__

/* this struct defines the way the registers are stored on the
   stack during a system call. */


struct pt_regs {
	long ebx;
	long ecx;
	long edx;
	long esi;
	long edi;
	long ebp;
	long eax;
	int  xds;
	int  xes;
	int  xfs;
	int  xgs;
	long orig_eax;
	long eip;
	int  xcs;
	long eflags;
	long esp;
	int  xss;
};





#endif /* !__ASSEMBLER__ */

#endif /* _ASM_X86_PTRACE_H */
