//===---------------------------------------------------------------------===//
//      Copyright 2014 Leaning Technlogies
//===----------------------------------------------------------------------===//

#include <tests.h>

bool funcCalled = false;

void testMethod()
{
	funcCalled = true;
}

void (*globalMethodPtr)() = NULL;

void webMain()
{
	if(globalMethodPtr==NULL)
		globalMethodPtr = testMethod;
	globalMethodPtr();
	assertEqual(funcCalled,true,"Global function pointer");
}



