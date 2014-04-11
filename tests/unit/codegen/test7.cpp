//===---------------------------------------------------------------------===//
//	Copyright 2014 Leaning Technlogies
//===----------------------------------------------------------------------===//

#include <tests.h>
#include <array>
#include <cstdio>

std::array<int,2> arr({{1, 2}});

void webMain()
{
	int index = 0;
	for (const auto & elem: arr)
	{
		if(index==0)
			assertEqual(elem, 1, "Range for on std::array 1/3");
		else if(index==1)
			assertEqual(elem, 2, "Range for on std::array 2/3");
		index++;
	}
	assertEqual(index, 2, "Range for on std::array 3/3");
}
