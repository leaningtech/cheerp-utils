//===---------------------------------------------------------------------===//
//	Copyright 2013 Leaning Technlogies
//===----------------------------------------------------------------------===//

#include <tests.h>

struct A
{
	int a;
};

void webMain()
{
	//Test copy constructor, it must not use memcpy
	A a1;
	a1.a = 42;

	volatile int count = 1;
	int* base = &a1.a;
	for(int i=0;i<count;i++)
		base[i]++;

	assertEqual(a1.a, 43, "Pointer arithmetic on pointer to member");
}
