//===---------------------------------------------------------------------===//
//	Copyright 2021 Leaning Technlogies
//===----------------------------------------------------------------------===//

#include <tests.h>

[[cheerp::wasm]]
bool wasmCatch = false;
[[cheerp::wasm]]
bool genericjsCatch = false;

[[cheerp::genericjs]]
void doThrow()
{
	throw 1;
}

[[cheerp::wasm]]
void middle()
{
	try {
		doThrow();
	} catch(int i) {
		wasmCatch = true;
	}
}

[[cheerp::genericjs]]
void doCatch()
{
	try {
		middle();
	} catch(int i) {
		genericjsCatch = true;
	}
}
[[cheerp::wasm]]
void webMain()
{
	doCatch();
	assertEqual(wasmCatch, false, "Wasm invoke/landingpads removed 1/1");
	assertEqual(genericjsCatch, true, "Genericjs invoke/landingpads not removed 1/1");
}
