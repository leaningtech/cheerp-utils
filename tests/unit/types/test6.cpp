//===---------------------------------------------------------------------===//
//	Copyright 2013 Leaning Technlogies
//===----------------------------------------------------------------------===//

#include <tests.h>

union U
{
	int i;
	float f;
	char a[5];
};

void webMain()
{
	//Test union
	U u;
	u.f = 1234.567;
	assertEqual(u.i, 0x449A5225, "Access to unions 1/2");
	assertEqual<char,char>(u.a[2], 0x9A, "Access to unions 2/2");
}
