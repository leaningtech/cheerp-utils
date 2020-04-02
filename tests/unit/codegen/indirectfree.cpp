//===---------------------------------------------------------------------===//
//	Copyright 2013 Leaning Technlogies
//===----------------------------------------------------------------------===//

#include <tests.h>

struct [[cheerp::asmjs]] A
{
	int i;
};

void zzz(void* p)
{
}

using fptr = void(*)(void*);

fptr gf = &free;
fptr gfv[] = {&free, &free, &zzz};

void webMain()
{
	int* intv = (int*)malloc(10);
	A* av = (A*)malloc(10);
	if (unitBlackBox(1)) gf = &zzz;
	fptr f = unitBlackBox(1) ? &free : gf;
	f(av);
	f(intv);
	A* av2 = (A*)malloc(10);
	assertEqual(av, av2, "Indirect free() call support in genericjs 1/2");
	fptr f2 = gfv[unitBlackBox(1)];
	f2(av2);
	assertEqual(av, av2, "Indirect free() call support in genericjs 2/2");
}
