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

	// Test ArrayRef
	auto ref1 = cheerp::makeArrayRef(ar);
	assertEqual((int)*ref1[0], 1, "Array ref 1/6");
	assertEqual((int)*ref1[1], 2, "Array ref 2/6");
	const auto ref2 = cheerp::makeArrayRef(ar8);
	assertEqual(ref2[0], char(-1), "Array ref 3/6");
	assertEqual(ref2[1], char(42), "Array ref 4/5");
	auto ref3 = cheerp::makeArrayRef(ar8);
	ref3[2] = 126;
	assertEqual(ref2[2], char(126), "Array ref 5/6");
	assertEqual(ref3[2], char(126), "Array ref 6/6");
	assertEqual(int(ref3->get_length()), 3, "Array ref operator->");
}
