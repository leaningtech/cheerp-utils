//===---------------------------------------------------------------------===//
//	Copyright 2018 Leaning Technlogies
//===----------------------------------------------------------------------===//

#include <tests.h>

void webMain()
{
	volatile float f1 = -0x80000000;
	volatile float f2 = 0x7fffff80;
	volatile float f3 = 0;
	volatile float f4 = f1 * 2;
	volatile float f5 = 0x80000000;
#ifndef __WASM__
	assertEqual<int32_t>(int32_t(f1), -0x80000000, "Float to int (signed) 1/3");
#endif
	assertEqual<int32_t>(int32_t(f2), 0x7fffff80, "Float to int (signed) 2/3");
	assertEqual<int32_t>(int32_t(f3), 0, "Float to int (signed) 3/3");
#ifndef __WASM__
	volatile int32_t fi4 = int32_t(f4); // Check for runtime crash
	volatile int32_t fi5 = int32_t(f5); // Check for runtime crash
#endif
	volatile uint32_t u1 = uint32_t(f1); // Check for runtime crash
	assertEqual<uint32_t>(uint32_t(f2), 0x7fffff80, "Float to int (unsigned) 1/3");
	assertEqual<uint32_t>(uint32_t(f3), 0, "Float to int (unsigned) 2/3");
#ifndef __WASM__
	volatile uint32_t fu4 = uint32_t(f4); // Check for runtime crash
#endif
	assertEqual<uint32_t>(uint32_t(f5), 0x80000000, "Float to int (unsigned) 3/3");

	volatile double d1 = -0x80000000;
	volatile double d2 = 0x7fffffff;
	volatile double d3 = 0;
	volatile double d4 = d1 * 2;
	volatile double d5 = 0x80000000;
#ifndef __WASM__
	assertEqual<int32_t>(int32_t(d1), -0x80000000, "Double to int (signed) 1/3");
#endif
	assertEqual<int32_t>(int32_t(d2), 0x7fffffff, "Double to int (signed) 2/3");
	assertEqual<int32_t>(int32_t(d3), 0, "Double to int (signed) 3/3");
#ifndef __WASM__
	volatile int32_t di4 = int32_t(d4); // Check for runtime crash
	volatile int32_t di5 = int32_t(d5); // Check for runtime crash
#endif
	volatile uint32_t du1 = uint32_t(d1); // Check for runtime crash
	assertEqual<uint32_t>(uint32_t(d2), 0x7fffffff, "Double to int (unsigned) 1/3");
	assertEqual<uint32_t>(uint32_t(d3), 0, "Double to int (unsigned) 2/3");
#ifndef __WASM__
	volatile uint32_t du4 = uint32_t(d4); // Check for runtime crash
#endif
	assertEqual<uint32_t>(uint32_t(d5), 0x80000000, "Double to int (unsigned) 3/3");
}
