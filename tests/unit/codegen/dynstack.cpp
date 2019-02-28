//===---------------------------------------------------------------------===//
//	Copyright 2019 Leaning Technlogies
//===----------------------------------------------------------------------===//

#include <tests.h>

void webMain()
{
	// Test dynamic stack allocation
	volatile int length = 100;
	double v1[length];
	for(int i=0;i<length;i++)
		v1[i] = double(i)/2;
	assertEqual(v1[1], 0.5, "Dyn stack 1/2");

	double* v2 = static_cast<double*>(alloca(length*sizeof(double)));
	for(int i=0;i<length;i++)
		v2[i] = double(i)/2;
	assertEqual(v2[1], 0.5, "Dyn stack 2/2");
}
