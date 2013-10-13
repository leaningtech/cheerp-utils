//===---------------------------------------------------------------------===//
//	Copyright 2013 Leaning Technlogies
//===----------------------------------------------------------------------===//

#include <tests.h>
#include <new>

void webMain()
{
	//Test placement new
	int a;
	new (&a) int(42);
	assertEqual(a, 42, "Placement new");
}
