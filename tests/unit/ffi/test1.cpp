//===---------------------------------------------------------------------===//
//	Copyright 2017 Leaning Technlogies
//===----------------------------------------------------------------------===//

#include <tests.h>
#include <cstdlib>


void process(int* v, int n) {
	int k = 0;
	for(int i = 0; i < n; i++) {
		v[i] += k;
		k = v[i];
	}
}

template<typename T>
T* typed_malloc(size_t n) {
	return (T*)malloc(n*sizeof(T));
}
template<typename T>
void typed_free(T* p) {
	free(p);
}

[[cheerp::genericjs]]
int generic() {
	int* v = typed_malloc<int>(5);
	for(int i = 0; i < 5; i++) {
		v[i]=i;
	}
	process(v,5);
	int ret = v[4];
	typed_free(v);
	return ret;
}
void webMain()
{
	assertEqual(generic(), 10, "ffi pointer interoperation");
}
