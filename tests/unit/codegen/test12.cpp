//===---------------------------------------------------------------------===//
//      Copyright 2014 Leaning Technlogies
//===----------------------------------------------------------------------===//

#include <tests.h>
#include <stdio.h>
#include <stdlib.h>

void webMain()
{
	const char* str="-0.832050323486328125";
	double ret=strtod(str, NULL);
	assertEqual<double>(ret,(double)-0.832050323486328125,"High precision strtod");
}
