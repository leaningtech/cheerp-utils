//===---------------------------------------------------------------------===//
//	Copyright 2015 Leaning Technlogies
//===----------------------------------------------------------------------===//

#include <tests.h>

extern "C"
{
long long __divti3 (unsigned long long numerator, unsigned long long denominator);
long long __modti3 (unsigned long long numerator, unsigned long long denominator);
long long __udivti3 (unsigned long long numerator, unsigned long long denominator);
long long __umodti3 (unsigned long long numerator, unsigned long long denominator);
}

void webMain()
{
	// Test runtime based 64-bit division and module
	unsigned long long a = 1LL << 32;
	unsigned long long b = 1000000000;
	long long udiv = __udivti3(a, b);
	assertEqual(udiv, 4, "Runtime based division and modulo 1/N");
	long long umod = __umodti3(a, b);
	assertEqual(umod, 294967296, "Runtime based division and modulo 2/N");
	long long c = -a;
	long long sdiv = __divti3(c, b);
	assertEqual((long)sdiv, -4, "Runtime based division and modulo 3/N");
	long long smod = __modti3(c, b);
	assertEqual((long)smod, -294967296, "Runtime based division and modulo 4/N");
	long long d = -1LL;
	long long udiv2 = __udivti3(d, d);
	assertEqual(udiv2, 1, "Runtime based division and modulo 5/N");
}
