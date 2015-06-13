//===---------------------------------------------------------------------===//
//	Copyright 2015 Leaning Technologies
//===---------------------------------------------------------------------===//

#include <tests.h>

// Test 64-bit integer arithmetics

static void dump(long long t) {
	long h = (long)((t & (0xffffffffll << 32)) >> 32);
	long l = (long)(t & 0xffffffff);
	client::console.log("highint h:", h, "l:", l);
}

static void testShiftOps() {
	long long a = 0x10000;
	long long b = 0x100000000;
	long long c = 0x1000000000000;
	long long d = 0x7fffffffLL;
	long long e = 0x7fffffff00000000LL;

	assertEqual(a << 16, b, "int64_t shl support 1/N");
	assertEqual(a << 32, c, "int64_t shl support 2/N");
	assertEqual(d << 32, e, "int64_t shl support 3/N");

	assertEqual(b >> 16, a, "int64_t shr support 1/N");
	assertEqual(c >> 32, a, "int64_t shr support 2/N");
	assertEqual(e >> 32, d, "int64_t shr support 3/N");
}

static void testBitwiseOps() {
	long long a = 0xffffffffffffffffLL;
	long long b = 0x0000000000000000LL;
	long long l = 0x00000000ffffffffLL;
	long long u = 0xffffffff00000000LL;

	assertEqual(a & l, l, "int64_t and support 1/N");
	assertEqual(a & u, u, "int64_t and support 2/N");

	assertEqual(a | l, a, "int64_t or support 1/N");
	assertEqual(b | l, l, "int64_t or support 2/N");
	assertEqual(a | u, a, "int64_t or support 3/N");
	assertEqual(b | u, u, "int64_t or support 4/N");

	assertEqual(a ^ b, a, "int64_t xor support 1/N");
	assertEqual(a ^ a, b, "int64_t xor support 2/N");
	assertEqual(b ^ b, b, "int64_t xor support 3/N");

	assertEqual(~a, b, "int64_t not support 1/N");
	assertEqual(~b, a, "int64_t not support 2/N");
	assertEqual(~l, u, "int64_t not support 3/N");
}

static void testAddSubOps() {
	long long a = 0x0deadbeaf;
	long long b = 0x100000000;
	long long c = 0x0ffffffff;
	long long d = 0xffffffffffffffff;
	long long e = 0xfffffffffffffffe;

	assertEqual(a + b, 0x1deadbeaf, "int64_t add support 1/N");
	assertEqual(c + 1, 0x100000000, "int64_t add support 2/N");
	assertEqual(d + 1, 0x000000000, "int64_t add support 3/N");
	assertEqual(d + d, e, "int64_t add support 4/N");

	assertEqual(a - 1, 0xdeadbeae, "int64_t sub support 1/N");
	assertEqual(b - 1, 0xffffffff, "int64_t sub support 2/N");
	assertEqual(b - b, 0x00000000, "int64_t sub support 3/N");
	assertEqual(c - b, 0xffffffffffffffff, "int64_t sub support 4/N");
	assertEqual(d - d, 0x00000000, "int64_t sub support 5/N");
}

static void testUnaryOps() {
	long long a = 0x0;
	long long b = 0x1;
	long long c = 0x0000000100000000;
	long long d = 0xffffffffffffffff;

	assertEqual(-a, 0, "int64_t neg support 1/N");
	assertEqual(-b, 0xffffffffffffffff, "int64_t neg support 2/N");
	assertEqual(-c, 0xffffffff00000000, "int64_t neg support 3/N");
	assertEqual(-d, 0x00000001, "int64_t neg support 4/N");

	assertEqual(!a, true, "int64_t lnot support 1/N");
	assertEqual(!b, false, "int64_t lnot support 2/N");
	assertEqual(!c, false, "int64_t lnot support 3/N");
	assertEqual(!d, false, "int64_t lnot support 4/N");
}

static void testBitwiseCompoundAssignmentOps() {
	long long a = 0x0;
	long long b = 0x1;
	long long c = 0x0000000100000000;
	long long d = 0xffffffffffffffff;
	long long t;

	// TODO: test these operations with non-int64_t rhs values
	t = a; t &= b;
	assertEqual(t, 0x0000000000000000, "int64_t and assign support 1/N");
	t = b; t &= c;
	assertEqual(t, 0x0000000000000000, "int64_t and assign support 2/N");
	t = c; t &= d;
	assertEqual(t, 0x0000000100000000, "int64_t and assign support 3/N");
	t = d; t &= a;
	assertEqual(t, 0x0000000000000000, "int64_t and assign support 4/N");

	t = a; t |= b;
	assertEqual(t, 0x0000000000000001, "int64_t or assign support 1/N");
	t = b; t |= c;
	assertEqual(t, 0x0000000100000001, "int64_t or assign support 2/N");
	t = c; t |= d;
	assertEqual(t, 0xffffffffffffffff, "int64_t or assign support 3/N");
	t = d; t |= a;
	assertEqual(t, 0xffffffffffffffff, "int64_t or assign support 4/N");

	t = a; t ^= b;
	assertEqual(t, 0x0000000000000001, "int64_t xor assign support 1/N");
	t = b; t ^= c;
	assertEqual(t, 0x0000000100000001, "int64_t xor assign support 2/N");
	t = c; t ^= d;
	assertEqual(t, 0xfffffffeffffffff, "int64_t xor assign support 3/N");
	t = d; t ^= a;
	assertEqual(t, 0xffffffffffffffff, "int64_t xor assign support 4/N");
}

static void testArithmeticCompoundAssignmentOps() {
	long long a = 0x0;
	long long b = 0x1;
	long long c = 0x0000000100000000;
	long long d = 0xffffffffffffffff;
	long long t;

	// TODO: test these operations with non-int64_t rhs values
	t = a; t += b;
	assertEqual(t, 0x0000000000000001, "int64_t add assign support 1/N");
	t = b; t += c;
	assertEqual(t, 0x0000000100000001, "int64_t add assign support 2/N");
	t = c; t += d;
	assertEqual(t, 0x00000000ffffffff, "int64_t add assign support 3/N");
	t = d; t += a;
	assertEqual(t, 0xffffffffffffffff, "int64_t add assign support 4/N");

	t = a; t -= b;
	assertEqual(t, 0xffffffffffffffff, "int64_t sub assign support 1/N");
	t = b; t -= c;
	assertEqual(t, 0xffffffff00000001, "int64_t sub assign support 2/N");
	t = c; t -= d;
	assertEqual(t, 0x0000000100000001, "int64_t sub assign support 3/N");
	t = d; t -= a;
	assertEqual(t, 0xffffffffffffffff, "int64_t sub assign support 4/N");
}

static void testCastToFloat() {
	long long a = 0x0;
	long long b = 0x1;
	long long c = 0x0000000100000000;
	long long e = 0xffffffffffffffff;
	float f;

	assertEqual((float) a, 0., 1e-6, "int64_t cast to float support 1/N");
	assertEqual((float) b, 1., 1e-6, "int64_t cast to float support 2/N");
	// TODO verify that '(float) 0x0000000100000000' is '0'.
	assertEqual((float) c, 0., 1e-6, "int64_t cast to float support 3/N");
	assertEqual((float) e, -1., 1e-6, "int64_t cast to float support 4/N");
}

static void testCastFromFloat() {
	float a = 0;
	float b = 1;
	float c = 1337.;
	float d = 3.142;

	assertEqual((int64_t) a, 0, "int64_t cast from float support 1/N");
	assertEqual((int64_t) b, 1, "int64_t cast from float support 2/N");
	assertEqual((int64_t) c, 1337, "int64_t cast from float support 3/N");
	assertEqual((int64_t) d, 3, "int64_t cast from float support 4/N");
}

static void testDump() {
	long long t = 0xff;
	client::console.log("test dump(0xff):");
	dump(t);
}

void webMain() {
	testShiftOps();
	testBitwiseOps();
	testAddSubOps();
	testUnaryOps();
	testBitwiseCompoundAssignmentOps();
	testArithmeticCompoundAssignmentOps();
	testCastToFloat();
	testCastFromFloat();
	testDump();
}
