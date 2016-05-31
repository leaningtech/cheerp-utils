//===---------------------------------------------------------------------===//
//	Copyright 2016 Leaning Technlogies
//===----------------------------------------------------------------------===//

#include <tests.h>

void webMain()
{
	const char* buf = "abcdefghi";
	const char* volatile a = buf+5;
	volatile long long off = 2;
	const char* volatile b = a + off;
	const char* volatile c = a - off;
	assertEqual(*a, 'f', "64-bit wide pointer offsets 1/3");
	assertEqual(*b, 'h', "64-bit wide pointer offsets 2/3");
	assertEqual(*c, 'd', "64-bit wide pointer offsets 3/3");
}
