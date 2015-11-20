//===---------------------------------------------------------------------===//
//	Copyright 2013 Leaning Technlogies
//===----------------------------------------------------------------------===//

#include <tests.h>

struct A
{
	int a1:15;
	int a2:16;
	int a3:3;
};

void webMain()
{
	A a;
	a.a1=-8191;
	a.a2=8191;
	a.a3=2;
	assertEqual<int>(a.a1, -8191, "Bitfield test 1/3");
	assertEqual<int>(a.a2, 8191, "Bitfield test 2/3");
	assertEqual<int>(a.a3, 2, "Bitfield test 3/3");
}
