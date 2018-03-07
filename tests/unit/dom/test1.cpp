//===---------------------------------------------------------------------===//
//	Copyright 2013,2018 Leaning Technlogies
//===----------------------------------------------------------------------===//

#include <tests.h>
#include <cheerp/client.h>

void webMain()
{
	//Test JS Arrays
	client::Array* ar = new client::Array(1,2,3);

	assertEqual((int)*(*ar)[0], 1, "JS Array 1/2");
	assertEqual((int)*(*ar)[1], 2, "JS Array 2/2");

	// Test typed array
	client::Int8Array* ar8 = new client::Int8Array(3);
	(*ar8)[0] = 0x7fffffff;
	(*ar8)[1] = 42;

	assertEqual((*ar8)[0], char(-1), "Typed array 1/3");
	assertEqual((*ar8)[1], char(42), "Typed array 2/3");
	assertEqual((*ar8)[2], char(0), "Typed array 3/3");
}
