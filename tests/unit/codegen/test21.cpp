//===---------------------------------------------------------------------===//
//	Copyright 2015 Leaning Technologies
//===---------------------------------------------------------------------===//

#include <tests.h>

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
	long long lmask = 0x00000000ffffffffLL;
	long long umask = 0xffffffff00000000LL;

	assertEqual(a & lmask, lmask, "int64_t and support 1/N");
	assertEqual(a & umask, umask, "int64_t and support 2/N");

	assertEqual(a | lmask, a, "int64_t or support 1/N");
	assertEqual(b | lmask, lmask, "int64_t or support 2/N");
	assertEqual(a | umask, a, "int64_t or support 3/N");
	assertEqual(b | umask, umask, "int64_t or support 4/N");

	assertEqual(a ^ b, a, "int64_t xor support 1/N");
	assertEqual(a ^ a, b, "int64_t xor support 2/N");
	assertEqual(b ^ b, b, "int64_t xor support 3/N");

	assertEqual(~a, b, "int64_t not support 1/N");
	assertEqual(~b, a, "int64_t not support 2/N");
	assertEqual(~lmask, umask, "int64_t not support 3/N");
}

static void testDump() {
	long long t = 0xff;
	client::console.log("test dump(0xff):");
	dump(t);
}

// Test 64-bit integers arithmetics

void webMain()
{
	testShiftOps();
	testBitwiseOps();
	testDump();
	//long long e = a + d;
	//assertEqual(e, 0x2deadbeaf, "64-bit integer support 4/N");
	//long long f = e - 1;
	//assertEqual(f, 0x2deadbeae, "64-bit integer support 5/N");
}
