//===---------------------------------------------------------------------===//
//	Copyright 2013 Leaning Technlogies
//===----------------------------------------------------------------------===//

#include <tests.h>

void webMain()
{
	//Test casting to void*
	void* volatile opaque1 = (void*)0;
	float a = 0.2f;

	opaque1 = &a;

	float* pa = (float*)opaque1;
	assertEqual(*pa, 0.2, "Float, cast to void* and back");
}
