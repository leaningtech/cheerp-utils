//===---------------------------------------------------------------------===//
//	Copyright 2016 Leaning Technlogies
//===----------------------------------------------------------------------===//

#include <tests.h>
#include <stdio.h>

void webMain()
{
	std::string test = "padding=1,2,3,4";
	int a,b,c,d;
	sscanf(test.c_str(), "padding=%d,%d,%d,%d", &a, &b, &c, &d);
	assertEqual(a, 1, "sscanf 1/4");
	assertEqual(b, 2, "sscanf 2/4");
	assertEqual(c, 3, "sscanf 3/4");
	assertEqual(d, 4, "sscanf 4/4");
}
