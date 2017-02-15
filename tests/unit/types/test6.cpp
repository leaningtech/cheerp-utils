//===---------------------------------------------------------------------===//
//	Copyright 2013 Leaning Technlogies
//===----------------------------------------------------------------------===//

#include <tests.h>
#include <string.h>

union U
{
	int i;
	float f;
	char a[5];
};

void webMain()
{
	//Test union
	U u, u2;
	u.f = 1234.567;
	assertEqual(u.i, 0x449A5225, "Access to unions 1/2");
	assertEqual<char>(u.a[2], 0x9A, "Access to unions 2/2");

	//Memory ops on unions
	memcpy(&u2, &u, sizeof(u));
	assertEqual(u2.i, 0x449A5225, "Memops on unions 1/2");
	memset(&u2, 0, sizeof(u));
	assertEqual(u2.i, 0, "Memops on unions 2/2");

	// Test arrays of union
	U au2[2];
	U* volatile au=au2;
	au[1].f = 1234.567;
	assertEqual(au[1].i, 0x449A5225, "Access to arrays of unions 1/2");
	au[0].f = 1234.567;
	assertEqual(au[0].i, 0x449A5225, "Access to arrays of unions 2/2");
}
