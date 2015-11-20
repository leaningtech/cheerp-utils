//===---------------------------------------------------------------------===//
//	Copyright 2013 Leaning Technlogies
//===----------------------------------------------------------------------===//

#include <tests.h>

struct A
{
	short a1:15;
	short a2:2;
	int a3:10;
};

void webMain()
{
	A a;
	a.a1=7;
	a.a2=1;
	a.a3=511;
	assertEqual<int>(a.a1, 7, "Bitfield test 1/3");
	assertEqual<int>(a.a2, 1, "Bitfield test 2/3");
	assertEqual<int>(a.a3, 511, "Bitfield test 2/3");
}
