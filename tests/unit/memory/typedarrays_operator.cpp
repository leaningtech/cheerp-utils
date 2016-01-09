//===---------------------------------------------------------------------===//
//	Copyright 2016 Leaning Technlogies
//===----------------------------------------------------------------------===//

#include <tests.h>
#include <cheerp/clientlib.h>

void webMain()
{
	client::Int8Array* a = new client::Int8Array(10);
	client::Int8Array& r = *a;
	r[3] = 42;
	assertEqual(r[0], (char)0, "Operator[] on typed arrays 1/2");
	assertEqual(r[3], (char)42, "Operator[] on typed arrays 2/2");
}
