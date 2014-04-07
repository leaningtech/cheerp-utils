//===---------------------------------------------------------------------===//
//      Copyright 2014 Leaning Technlogies
//===----------------------------------------------------------------------===//

#include <tests.h>
#include <math.h>

// Test alloca merging on libc pow. It is implemented using tons of unions.

void webMain()
{
	volatile float val = 2.0f;
	float ret = powf(val, 10.0f);
	assertEqual(ret, 1024.0f, "libc pow");
}
