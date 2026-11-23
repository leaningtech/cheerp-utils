/* SPDX-License-Identifier: GPL-2.0 WITH Linux-syscall-note */
#ifndef _ASM_X86_UNISTD_H
#define _ASM_X86_UNISTD_H

/*
 * x32 syscall flag bit.  Some user programs expect syscall NR macros
 * and __X32_SYSCALL_BIT to have type int, even though syscall numbers
 * are, for practical purposes, unsigned long.
 *
 * Fortunately, expressions like (nr & ~__X32_SYSCALL_BIT) do the right
 * thing regardless.
 */
#define __X32_SYSCALL_BIT	0x40000000

#  include <asm/unistd_32.h>

#endif /* _ASM_X86_UNISTD_H */
