//===---------------------------------------------------------------------===//
//	Copyright 2014 Leaning Technlogies
//===----------------------------------------------------------------------===//

#include <cheerp/client.h>
#include <cheerp/clientlib.h>
#include "tests.h"

client::String* volatile globalString;

void webMain()
{
	client::String* a1 = new client::String("Test");
	globalString = a1;
	
	assertEqual(globalString==a1, true, "Comparing client objects from globals");
}
