/*
 * Copyright (c) 2000, 2001, 2002, 2003, 2004, 2005, 2008, 2009
 *	The President and Fellows of Harvard College.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 * 1. Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer.
 * 2. Redistributions in binary form must reproduce the above copyright
 *    notice, this list of conditions and the following disclaimer in the
 *    documentation and/or other materials provided with the distribution.
 * 3. Neither the name of the University nor the names of its contributors
 *    may be used to endorse or promote products derived from this software
 *    without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE UNIVERSITY AND CONTRIBUTORS ``AS IS'' AND
 * ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
 * IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
 * ARE DISCLAIMED.  IN NO EVENT SHALL THE UNIVERSITY OR CONTRIBUTORS BE LIABLE
 * FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL
 * DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS
 * OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION)
 * HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT
 * LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY
 * OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF
 * SUCH DAMAGE.
 */

/*
 * malloctest.c
 *
 * This program contains a variety of tests for malloc and free.
 * XXX most tests leak on error.
 *
 * These tests (subject to restrictions and limitations noted below) should
 * work once user-level malloc is implemented.
 */

// CHEERP NOTE: this is the original:
// https://github.com/vivekbhalla/OS161/blob/master/src/user/testbin/malloctest/malloctest.c
// We probably want to add more tests from there in the future, in particular those for
// graceful failure of malloc (our malloc never returns NULL for now)

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <stdint.h>
#include <fcntl.h>

#include "tests.h"

#define SMALLSIZE   72
#define MEDIUMSIZE  896
#define BIGSIZE	 16384
#define HUGESIZE	(1024 * 1024 * 1024)

/* Maximum amount of space per block we allow for indexing structures */
#define OVERHEAD		 32

/* Point past which we assume something else is going on */
#define ABSURD_OVERHEAD  256

////////////////////////////////////////////////////////////

/*
 * Fill a block of memory with a test pattern.
 */
static
void
markblock(volatile void *ptr, size_t size, unsigned bias)
{
	size_t n, i;
	unsigned long *pl;
	unsigned long val;

	pl = (unsigned long *)ptr;
	n = size / sizeof(unsigned long);

	for (i=0; i<n; i++) {
		val = ((unsigned long)i ^ (unsigned long)bias);
		pl[i] = val;
	}
}

/*
 * Check a block marked with markblock()
 */
static
bool
checkblock(volatile void *ptr, size_t size, unsigned bias)
{
	size_t n, i;
	unsigned long *pl;
	unsigned long val;

	pl = (unsigned long *)ptr;
	n = size / sizeof(unsigned long);

	for (i=0; i<n; i++) {
		val = ((unsigned long)i ^ (unsigned long)bias);
		if (pl[i] != val) {
			return false;
		}
	}

	return true;
}

////////////////////////////////////////////////////////////

/*
 * Test 1
 *
 * This test checks if all the bytes we asked for are getting
 * allocated.
 */

static
void
test1(void)
{
	volatile unsigned *x;

	x = (volatile unsigned int*)malloc(BIGSIZE);
	assertEqual(x!=NULL,true, "Allocating 16384 bytes");
	if (x==NULL) {
		return;
	}

	markblock(x, BIGSIZE, 0);
	bool ret = checkblock(x, BIGSIZE, 0);
	assertEqual(ret, true, "Checking malloc'd block");

	free((void *)x);
}


////////////////////////////////////////////////////////////

/*
 * Test 4
 *
 * Tries to test in detail if malloc coalesces the free list properly.
 *
 * This test will likely fail if something other than a basic first-fit/
 * next-fit/best-fit algorithm is used.
 */

static
void
test4(void)
{
	void *x, *y, *z;
	unsigned long lx, ly, lz, overhead, zsize;

	x = malloc(SMALLSIZE);
	y = malloc(MEDIUMSIZE);

	lx = (unsigned long)x;
	ly = (unsigned long)y;

	/*
	 * The memory should look something like this:
	 *
	 *	 OXXXOYYYYYYYYYYY
	 *
	 * where O are optional overhead (indexing) blocks.
	 */

	/* This is obviously wrong. */
	assertEqual(lx!=ly, true, "Malloc'd blocks overlap 1/3");

	/*
	 * Check for overlap. It is sufficient to check if the start
	 * of each block is within the other block. (If the end of a
	 * block is within the other block, either the start is too,
	 * or the other block's start is within the first block.)
	 */
	assertEqual(lx < ly && lx + SMALLSIZE > ly, false, "Malloc'd blocks overlap 2/3");
	assertEqual(ly < lx && ly + MEDIUMSIZE > lx, false, "Malloc'd blocks overlap 3/3");

	/*
	 * If y is lower than x, some memory scheme we don't
	 * understand is in use, or else there's already stuff on the
	 * free list.
	 */
	assertEqual(ly < lx, false, "Coalescing freelists 4/N");

	/*
	 * Compute the space used by index structures.
	 */
	overhead = ly - (lx + SMALLSIZE);

	assertEqual(overhead > ABSURD_OVERHEAD, false, "Malloc index structures overhead 1/2");
	assertEqual(overhead > OVERHEAD, false, "Malloc index structures overhead 1/2");

	free(x);
	free(y);

	zsize = SMALLSIZE + MEDIUMSIZE + overhead;

	// Now allocating zsize bytes... should reuse the space
	z = malloc(zsize);

	lz = (unsigned long) z;

	assertEqual(lz, lx, "Coalescing freelists");

	free(z);
}

////////////////////////////////////////////////////////////

/*
 * Test 5/6/7
 *
 * Generally beats on malloc/free.
 *
 * Test 5 uses random seed 0.
 * Test 6 seeds the random number generator from random:.
 * Test 7 asks for a seed.
 */

static
void
testRand(unsigned long seed, int bigAllocation = 6060, bool useRealloc = false)
{
	static const int sizes[8] = { 13, 17, 69, 176, 433, 871, 1150, bigAllocation };
	
	void *ptrs[32];
	int psizes[32];
	int i, n, size;

	srand(seed);

	for (i=0; i<32; i++) {
		ptrs[i] = NULL;
		psizes[i] = 0;
	}

	bool ret = true;
	for (i=0; i<100000; i++) {
		n = rand()%32;
		if (ptrs[n] == NULL) {
			size = sizes[rand()%8];
			ptrs[n] = malloc(size);
			if (ptrs[n] == 0)
			{
				printf("Failed to malloc memory\n");
				break;
			}
			psizes[n] = size;
			markblock(ptrs[n], size, n);
		}
		else {
			size = psizes[n];
			ret &= checkblock(ptrs[n], size, n);
			if (useRealloc && rand()%2)
			{
				int new_size = sizes[rand()%8];
				ptrs[n] = realloc(ptrs[n], new_size);
				if (ptrs[n] == 0)
				{
					printf("Failed to realloc memory\n");
					break;
				}
				psizes[n] = new_size;
				markblock(ptrs[n], new_size, n);
			}
			else
			{
				free(ptrs[n]);
				ptrs[n] = NULL;
				psizes[n] = 0;
			}
		}
	}
	assertEqual(ret, true, "Checking malloc'd blocks");

	for (i=0; i<32; i++) {
		if (ptrs[i] != NULL) {
			free(ptrs[i]);
		}
	}
}

static
void
test5(void)
{
	testRand(0);
	testRand(1, 0x1e5b9, /*useRealloc*/ true);
}


////////////////////////////////////////////////////////////

void
webMain()
{
	test1();
	test4();
	test5();
	return;
}

