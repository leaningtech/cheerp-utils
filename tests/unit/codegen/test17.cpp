//===---------------------------------------------------------------------===//
//      Copyright 2015 Leaning Technlogies
//===----------------------------------------------------------------------===//

#include <tests.h>

void webMain()
{
	volatile unsigned int a=0x7fffffff;
	a *= 2;
	a += 1;
	volatile int b=0;
	b--;
	unsigned int tmp1=a;
	int tmp2=b;
	assertEqual(tmp1,tmp2,"Signed arithmetic 1");
	volatile unsigned short a2=0xffff;
	volatile short b2=0;
	b2--;
	unsigned short tmp3=a2;
	short tmp4=b2;
	assertEqual<short,short>(tmp3,tmp4,"Signed arithmetic 2");
	assertEqual<unsigned short,unsigned short>(tmp3,tmp4,"Signed arithmetic 3");
}
