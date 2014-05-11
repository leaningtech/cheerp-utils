//===---------------------------------------------------------------------===//
//	Copyright 2014 Leaning Technlogies
//===----------------------------------------------------------------------===//

#include <tests.h>

void __attribute__((noinline)) indirect_mul2(int* r, int* a)
{
	*r = 0;
	*r = (*a+*r) * 2;
}

void webMain()
{
	int a = 2;
	int r;

	indirect_mul2(&r, &a);
	assertEqual((float)r, 4.0f, "Indirect multiply");
}
