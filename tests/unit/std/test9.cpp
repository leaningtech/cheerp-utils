//===---------------------------------------------------------------------===//
//	Copyright 2015 Leaning Technlogies
//===----------------------------------------------------------------------===//

#include <tests.h>
#include <vector>

void webMain()
{
	std::vector<float> v;
	for(int i=0;i<10;i++)
		v.push_back(i);
	assertEqual(v.end()-v.begin(), 10L, "std::vector 1/1");
	v.erase(v.begin()+3);
	assertEqual(v.end()-v.begin(), 9L, "std::vector 2/2");
}
