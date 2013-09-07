//===---------------------------------------------------------------------===//
//	Copyright 2013 Leaning Technlogies
//===----------------------------------------------------------------------===//

#include <tests.h>

struct A
{
	long long a1:63;
	int b;
};

void webMain()
{
	A a;
	a.a1=(1LL<<61)|23;
	a.b=0xdeadbeaf;
	assertEqual<int,int>(a.a1, -1, "Bitfield test 1/2");
	assertEqual<int,int>(a.b, 0xdeadbeaf, "Bitfield test 2/2");
}
