//===---------------------------------------------------------------------===//
//	Copyright 2013 Leaning Technlogies
//===----------------------------------------------------------------------===//

#ifndef _CHEERP_TESTS_H
#define _CHEERP_TESTS_H

#include <cheerp/types.h>
#include <cheerp/client.h>

extern "C" void assertEqualImpl(bool success, const char* msg)
#ifdef PRE_EXECUTE_TEST
;
#else
{
	if (success) {
		cheerp::console_log(msg, ": SUCCESS");
	} else {
		cheerp::console_log(msg, ": FAILURE");
	}
}
#endif

void assertEqual(double value, double expected, double epsilon, const char* msg)
{
	assertEqualImpl(value >= expected - epsilon && value <= expected + epsilon, msg);
}

void assertEqual(const char *value, const char *expected, const char* msg)
{
	assertEqualImpl(strcmp(value, expected) == 0, msg);
}

template<class T>
void assertEqual(const T& value, const T& expected, const char* msg)
{
	assertEqualImpl(value==expected, msg);
}
void assertEqual(int64_t value, int64_t expected, const char* msg)
{
	assertEqualImpl(value==expected, msg);
}
void assertEqual(int value, int expected, const char* msg)
{
	assertEqualImpl(value==expected, msg);
}
void assertEqual(double value, double expected, const char* msg)
{
	assertEqualImpl(value==expected, msg);
}
void assertEqual(float value, float expected, const char* msg)
{
	assertEqualImpl(value==expected, msg);
}
void assertEqual(char value, char expected, const char* msg)
{
	assertEqualImpl(value==expected, msg);
}

template <typename T>
[[clang::optnone]]
T unitBlackBox(T v)
{
	static T a[1];
	volatile T* volatile p = &a[0];
	a[0] = v;
	v = *p;
	return v;
}

#endif
