//===---------------------------------------------------------------------===//
//	Copyright 2015 Leaning Technlogies
//===----------------------------------------------------------------------===//

#include <tests.h>
#include <math.h>

void webMain()
{
	volatile float a = -42.0f;
	volatile float b = fabsf(a);
	assertEqual(b, 42, "fabs");
}
