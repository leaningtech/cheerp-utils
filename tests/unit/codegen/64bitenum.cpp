//===---------------------------------------------------------------------===//
//	Copyright 2016 Leaning Technlogies
//===----------------------------------------------------------------------===//

#include <tests.h>

enum class BIG_ENUM : uint64_t
{
	SMALL_VALUE = 1,
	BIG_VALUE = 0xffff00000000
};

void webMain()
{
	BIG_ENUM a = BIG_ENUM::SMALL_VALUE;
	assertEqual(1, (int)a, "64-bit wide enum 1/3");
	assertEqual(BIG_ENUM(1), BIG_ENUM::SMALL_VALUE, "64-bit wide enum 2/3");
	volatile BIG_ENUM b = BIG_ENUM::BIG_VALUE;
	assertEqual(a < b, true, "64-bit wide enum 3/3");
}
