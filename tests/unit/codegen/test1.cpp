//===---------------------------------------------------------------------===//
//	Copyright 2013 Leaning Technlogies
//===----------------------------------------------------------------------===//

#include <tests.h>

void webMain()
{
	//Test recursive dependency in PHIs
	int a = 1;
	int b = 2;

	for(volatile int i=0;i<3;i++)
	{
		int c=a;
		a=b;
		b=c;
	}

	assertEqual(a, 2, "PHI support 1/2");
	assertEqual(b, 1, "PHI support 2/2");
}
