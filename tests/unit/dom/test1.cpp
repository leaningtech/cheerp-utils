//===---------------------------------------------------------------------===//
//	Copyright 2013 Leaning Technlogies
//===----------------------------------------------------------------------===//

#include <tests.h>
#include <cheerp/client.h>

void webMain()
{
	//Test JS Arrays
	client::Array* ar = new client::Array(1,2,3);

	assertEqual(*(*ar)[0], 1, "JS Array 1/2");
	assertEqual(*(*ar)[1], 2, "JS Array 2/2");
}
