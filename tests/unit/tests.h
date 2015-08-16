//===---------------------------------------------------------------------===//
//	Copyright 2013 Leaning Technlogies
//===----------------------------------------------------------------------===//

#ifndef _CHEERP_TESTS_H
#define _CHEERP_TESTS_H

#include <cheerp/types.h>
#include <cheerp/clientlib.h>

void assertEqual(double value, double expected, double epsilon, const char* msg)
{
	if (value >= expected - epsilon && value <= expected + epsilon) {
		client::console.log(msg, ": SUCCESS");
	} else {
		client::console.log(msg, ": FAILURE");
	}
}

void assertEqual(const char *value, const char *expected, const char* msg)
{
	if (strcmp(value, expected) == 0) {
		client::console.log(msg, ": SUCCESS");
	} else {
		client::console.log(msg, ": FAILURE");
	}
}

template<class T, class U>
void assertEqual(const T& value, const U& expected, const char* msg)
{
	client::console.log(msg,(value==expected)?": SUCCESS":": FAILURE");
}

#endif
