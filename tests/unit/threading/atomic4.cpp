#include <tests.h>
#include <cstdint>

// This test is for the musl atomic primivites.
// The contents below are copied from a musl header file (/arch/cheerp/atomic_arch.h) and should be in sync with this header file.
// The unnecessary parts have been removed for readability.
// They have been tested on native and work as intended.

static inline int a_cas(volatile int *p, int t, int s)
{
	return __sync_val_compare_and_swap_4(p, t, s);
}

static inline int a_swap(volatile int *p, int v)
{
	return __sync_swap(p, v);
}

static inline int a_fetch_add(volatile int *p, int v)
{
	return __sync_fetch_and_add(p, v);
}

static inline void a_and(volatile int *p, int v)
{
	__sync_and_and_fetch(p, v);
}

static inline void a_or(volatile int *p, int v)
{
	__sync_or_and_fetch(p, v);
}

static inline void a_inc(volatile int *p)
{
	__sync_add_and_fetch(p, 1);
}

static inline void a_dec(volatile int *p)
{
	__sync_add_and_fetch(p, -1);
}

static inline void a_store(volatile int *p, int x)
{
	__atomic_store(p, &x, __ATOMIC_SEQ_CST);
}

static inline int a_ctz_64(uint64_t x)
{
	if (x == 0)
		return 64;
	return __builtin_ctzll(x);
}

static inline int a_ctz_32(uint32_t x)
{
	if (x == 0)
		return 32;
	return __builtin_ctzl(x);
}

static inline int a_clz_32(uint32_t x)
{
	return __builtin_clz(x);
}

// End of contents for the file, now the test.

int main()
{
	// a_cas
	int a = 5;
	assertEqual(a_cas(&a, 5, 2), 5, "Return value of a_cas when value is swapped");
	assertEqual(a, 2, "Value after the a_cas swapped");
	assertEqual(a_cas(&a, 5, 1), 2, "Return value of a_cas when value is not swapped.");
	assertEqual(a, 2, "Value after the a_cas did not swap");

	// a_swap
	assertEqual(a_swap(&a, 3), 2, "Return value of a_swap");
	assertEqual(a, 3, "Value after a_swap");

	// a_fetch_add
	assertEqual(a_fetch_add(&a, 3), 3, "Return value of a_fetch_add");
	assertEqual(a, 6, "Value after a_fetch_add");

	// a_and
	a_and(&a, 3);
	assertEqual(a, 2, "Value after a_and");

	// a_or
	a_or(&a, 5);
	assertEqual(a, 7, "Value after a_or");

	// a_inc
	a_inc(&a);
	assertEqual(a, 8, "Value after a_inc");

	// a_dec
	a_dec(&a);
	assertEqual(a, 7, "Value after a_dec");

	// a_store
	a_store(&a, 5);
	assertEqual(a, 5, "Value after a_store");

	// a_ctz_64
	a = 6;
	assertEqual(a_ctz_64(a), 1, "Return of a_ctz_64");

	// a_ctz_32
	a = 24;
	assertEqual(a_ctz_32(a), 3, "Return of a_ctz_32");

	// a_clz_32
	assertEqual(a_clz_32(a), 27, "Return of a_clz_32");

	return 0;
}
