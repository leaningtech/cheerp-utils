//===---------------------------------------------------------------------===//
//      Copyright 2014 Leaning Technlogies
//===----------------------------------------------------------------------===//

#include <tests.h>

void webMain()
{
	volatile double d=1;
	const double epsilon = 1.0e-10;
	assertEqual(d<1.0+epsilon,true,"High precision double literals");
}
