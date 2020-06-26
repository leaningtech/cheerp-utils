//===---------------------------------------------------------------------===//
//	Copyright 2013 Leaning Technlogies
//===----------------------------------------------------------------------===//

#include <tests.h>
#include <limits>

template<typename F, typename I>
constexpr I roundTrip(I i)
{
	F f = static_cast<F>(i);
	return static_cast<I>(f);
}
template<typename F, typename I, I max>
void testFPToI()
{
	constexpr I maxExpected = roundTrip<F>(max);
	I maxi = roundTrip<F>(unitBlackBox(max));
	assertEqual(maxi, maxExpected, "fptoi support 1/N");
}
void webMain()
{
	testFPToI<float, int, 0x7fffff80>();
	testFPToI<float, unsigned int, 0xffffff00>();
	testFPToI<float, long long, 0x7fffff8000000000>();
	testFPToI<float, unsigned long long, 0xffffff0000000000>();
	testFPToI<double, int, 0x7fffffff>();
	testFPToI<double, unsigned int, 0xffffffff>();
	testFPToI<double, long long, 0x7ffffffffffffc00>();
	testFPToI<double, unsigned long long, 0xfffffffffffff800>();
}
