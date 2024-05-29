//===---------------------------------------------------------------------===//
//	Copyright 2021 Leaning Technlogies
//===----------------------------------------------------------------------===//

#include <tests.h>

[[cheerp::wasm]]
bool abiCatch = false;
[[cheerp::wasm]]
bool otherCatch = false;

[[cheerp::wasm]]
void doThrow()
{
	throw 1;
}

[[cheerp::genericjs]]
void middle()
{
	try {
		doThrow();
	} catch(int i) {
		otherCatch = true;
		throw;
	}
}

[[cheerp::wasm]]
void doCatch()
{
	try {
		middle();
	} catch(int i) {
		abiCatch = true;
	}
}
[[cheerp::wasm]]
void webMain()
{
	doCatch();
	assertEqual(otherCatch, true, "Non-ABI section can catch exceptions and rethrow 1/2");
	assertEqual(abiCatch, true, "Non-ABI section can catch exceptions and rethrow 2/2");
}
