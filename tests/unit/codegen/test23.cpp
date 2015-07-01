//===---------------------------------------------------------------------===//
//	Copyright 2015 Leaning Technlogies
//===----------------------------------------------------------------------===//

#include <tests.h>
#include <stdlib.h>

struct A
{
	struct A* a;
};

void webMain()
{
	struct A a;
	a.a = &a;
	assertEqual(a.a, &a, "Support recursive pointer in struct");
}
