//===---------------------------------------------------------------------===//
//	Copyright 2015 Leaning Technlogies
//===----------------------------------------------------------------------===//

#include <tests.h>

class A
{
public:
	float data[4][4];
};

void webMain()
{
	A a, a2;
	a2.data[1][2] = 42;
	memcpy(&a,&a2,sizeof(A));
	assertEqual(a.data[1][2], 42.f, "Interaction between arrays of arrays and memory intrinsics");
}
