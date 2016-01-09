//===---------------------------------------------------------------------===//
//	Copyright 2016 Leaning Technlogies
//===----------------------------------------------------------------------===//

#include <tests.h>

uint16_t a = 0x11AA;

void webMain()
{
	//Test that bswaps are properly handled
	volatile uint16_t b = __builtin_bswap16(a);

        uint16_t b2 = b;
	assertEqual(a, (uint16_t)0x11AA, "bswap support 1/2");
	assertEqual(b2, (uint16_t)0xAA11, "bswap support 2/2");
}
