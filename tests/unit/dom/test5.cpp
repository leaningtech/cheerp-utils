//===---------------------------------------------------------------------===//
//	Copyright 2014 Leaning Technlogies
//===----------------------------------------------------------------------===//

#include <cheerp/client.h>
#include <cheerp/clientlib.h>
#include "tests.h"

void webMain()
{
	client::String* a1 = new client::String("Test");
	client::String* a2 = new client::String("Test");
	
	assertEqual(a1==a2, true, "Comparing client objects");
}
