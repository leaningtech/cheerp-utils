//===---------------------------------------------------------------------===//
//	Copyright 2020 Leaning Technlogies
//===----------------------------------------------------------------------===//

#include <tests.h>

using u64 = unsigned long long;

[[cheerp::wasm]]
u64 process_wasm(u64 a, u64 b) {
	return a/b;
}
[[cheerp::genericjs]]
u64 wrapper_genericjs(u64 a, u64 b) {
	return process_wasm(a,b);
}
[[cheerp::genericjs]]
u64 process_genericjs(u64 a, u64 b) {
	return a/b;
}
[[cheerp::wasm]]
u64 wrapper_wasm(u64 a, u64 b) {
	return process_genericjs(a,b);
}

void webMain()
{
	u64 a = unitBlackBox(0xffffffffffffll);
	u64 b = unitBlackBox(0xff00000000ll);
	assertEqual(wrapper_wasm(a,b), unitBlackBox(257ll), "ffi pointer interoperation 1/2");
	assertEqual(wrapper_genericjs(a,b), unitBlackBox(257ll), "ffi pointer interoperation 2/2");
}
