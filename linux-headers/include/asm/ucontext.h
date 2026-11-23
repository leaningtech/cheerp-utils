/* SPDX-License-Identifier: GPL-2.0 WITH Linux-syscall-note */
#ifndef _ASM_X86_UCONTEXT_H
#define _ASM_X86_UCONTEXT_H

/*
 * Indicates the presence of extended state information in the memory
 * layout pointed by the fpstate pointer in the ucontext's sigcontext
 * struct (uc_mcontext).
 */
#define UC_FP_XSTATE	0x1


#include <asm-generic/ucontext.h>

#endif /* _ASM_X86_UCONTEXT_H */
