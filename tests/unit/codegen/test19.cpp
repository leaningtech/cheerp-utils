//===---------------------------------------------------------------------===//
//	Copyright 2015 Leaning Technlogies
//===----------------------------------------------------------------------===//

#include <tests.h>

int testSwitch(volatile int16_t* i)
{
	switch((int16_t)*i)
	{
		case (int16_t)10:
			return 0;
		case (int16_t)-1:
			return 1;
		default:
			return 2;
	}
}

void webMain()
{
	volatile int16_t a = 0xffff;
	assertEqual(testSwitch(&a), 1, "Switch on 16-bit integers 1/3");
	a = -1;
	assertEqual(testSwitch(&a), 1, "Switch on 16-bit integers 2/3");
	a = 10;
	assertEqual(testSwitch(&a), 0, "Switch on 16-bit integers 3/3");
}
