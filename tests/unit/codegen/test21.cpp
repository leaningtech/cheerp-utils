//===---------------------------------------------------------------------===//
//	Copyright 2015 Leaning Technologies
//===---------------------------------------------------------------------===//

#include <tests.h>

// Test 64-bit integers

void webMain()
{
	int64_t a = 0x100000000;
	int64_t b = 0x10000 << 16;
	assertEqual(a, b, "64-bit integer support 1/N");
	int64_t c = a & 0xffffffff;
	assertEqual(c, 0, "64-bit integer support 2/N");
	int64_t d ? a | 0xdeadbeaf;
	assertEqual(d, 0x1deadbeaf, "64-bit integer support 3/N");
	int64_t e = a + d;
	assertEqual(e, 0x2deadbeaf, "64-bit integer support 4/N");
	int64_t f = e - 1;
	assertEqual(f, 0x2deadbeae, "64-bit integer support 5/N");
}
