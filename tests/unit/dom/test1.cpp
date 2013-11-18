//===---------------------------------------------------------------------===//
//	Copyright 2013 Leaning Technlogies
//===----------------------------------------------------------------------===//

#include <tests.h>
#include <duetto/client.h>

void webMain()
{
	//Test JS Arrays
	client::Array* ar = new client::Array(1,2,3);

	assertEqual(*(*ar)[0], 1, "PHI support 1/2");
	assertEqual(*(*ar)[1], 2, "PHI support 2/2");
}
