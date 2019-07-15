//===---------------------------------------------------------------------===//
//	Copyright 2013 Leaning Technlogies
//===----------------------------------------------------------------------===//

#include <tests.h>
#include <cheerp/client.h>

void webMain()
{
	//Test Object to Number conversion
	client::Object* o = client::JSON.parse("42.42");
	double dval = (double)*o;
	assertEqual(dval, 42.42, "Object to Number");
}
