//===---------------------------------------------------------------------===//
//	Copyright 2017 Leaning Technlogies
//===----------------------------------------------------------------------===//

#include <tests.h>
#include <time.h>
#include <sys/time.h>

void webMain()
{
	timeval tv;
	struct timezone tz;
	int ret=gettimeofday(&tv, &tz);
	assertEqual(ret, 0, "gettimeofday 1/3");
	assertEqual(tv.tv_sec!=0, true, "gettimeofday 2/3");
	assertEqual(tv.tv_usec!=0, true, "gettimeofday 3/3");
	volatile time_t t1;
	time_t t2;
	t1=time(&t2);
	assertEqual((time_t)t1,t2, "time");
}
