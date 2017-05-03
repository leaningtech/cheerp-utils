//===---------------------------------------------------------------------===//
//	Copyright 2017 Leaning Technlogies
//===----------------------------------------------------------------------===//

#include <tests.h>
#include <algorithm>
#include <vector>
#include <string>

struct S
{
    int32_t i;
    std::string s;
    bool operator<(const S& r) const
    {
        return this->i < r.i;
    }
};

std::vector<S> v;

void webMain()
{
	std::sort(v.begin(),v.end());
	assertEqual(v.size(), 0u, "std::sort on complex structures");
}
