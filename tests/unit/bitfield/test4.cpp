//===---------------------------------------------------------------------===//
//	Copyright 2013 Leaning Technlogies
//===----------------------------------------------------------------------===//

#include <tests.h>

struct A
{
	short a1:2;
};

struct B: public A
{
	short a2:5;
};

void webMain()
{
	B a;
	a.a1=1;
	a.a2=15;
	assertEqual<int,int>(a.a1, 1, "Bitfield test 1/2");
	assertEqual<int,int>(a.a2, 15, "Bitfield test 2/2");
}
