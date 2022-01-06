//===---------------------------------------------------------------------===//
//	Copyright 2021 Leaning Technlogies
//===----------------------------------------------------------------------===//

#include <tests.h>

#ifdef __ASMJS__
#define ABI_SECTION [[cheerp::wasm]]
#define OTHER_SECTION [[cheerp::genericjs]]
#else
#define ABI_SECTION [[cheerp::genericjs]]
#define OTHER_SECTION [[cheerp::wasm]]
#endif

[[cheerp::wasm]]
bool abiCatch = false;
[[cheerp::wasm]]
bool otherCatch = false;

ABI_SECTION
void doThrow()
{
	throw 1;
}

OTHER_SECTION
void middle()
{
	try {
		doThrow();
	} catch(int i) {
		otherCatch = true;
		throw;
	}
}

ABI_SECTION
void doCatch()
{
	try {
		middle();
	} catch(int i) {
		abiCatch = true;
	}
}
ABI_SECTION
void webMain()
{
	doCatch();
	assertEqual(otherCatch, true, "Non-ABI section can catch exceptions and rethrow 1/2");
	assertEqual(abiCatch, true, "Non-ABI section can catch exceptions and rethrow 2/2");
}
