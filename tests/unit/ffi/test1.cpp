//===---------------------------------------------------------------------===//
//	Copyright 2017 Leaning Technlogies
//===----------------------------------------------------------------------===//

#include <tests.h>
#include <vector>

void process(std::vector<int>& v) {
	int k = 0;
	for(int i = 0; i < v.size(); i++) {
		v[i] += k;
		k = v[i];
	}
}

template<typename T>
void push_back_wrapper(std::vector<T>& v, T i)
{
	v.push_back(i);
}
[[cheerp::genericjs]]
int generic() {
	std::vector<int> v;
	for(int i = 0; i < 5; i++) {
		push_back_wrapper(v, i);
	}
	process(v);
	int ret = v[4];
	return ret;
}
void webMain()
{
	assertEqual(generic(), 10, "ffi pointer interoperation");
}
