//===---------------------------------------------------------------------===//
//	Copyright 2019 Leaning Technlogies
//===----------------------------------------------------------------------===//

#include <tests.h>
#include <math.h>

union U
{
	double d;
	uint64_t u64;
};

void webMain()
{
	//Test union with uint64_t
	U u;
	u.d = M_PI;
	assertEqual<uint64_t>(u.u64, 6072027779779076603, "Access to union with unt64_t member 1/2");
	u.d = 0.0;
	u.u64 = 6072027779779076603;
	assertEqual<double>(u.d, M_PI, "Access to union with unt64_t member 2/2");
}
