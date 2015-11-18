//===---------------------------------------------------------------------===//
//	Copyright 2013 Leaning Technlogies
//===----------------------------------------------------------------------===//

#include <tests.h>

struct A
{
	short a1:15;
	short a2:2;
};

void webMain()
{
	A a;
	a.a1=7;
	a.a2=1;
	assertEqual<int>(a.a1, 7, "Bitfield test 1/2");
	assertEqual<int>(a.a2, 1, "Bitfield test 2/2");
}
