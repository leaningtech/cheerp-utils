//===---------------------------------------------------------------------===//
//	Copyright 2013 Leaning Technlogies
//===----------------------------------------------------------------------===//

#ifndef _CHEERP_TESTS_H
#define _CHEERP_TESTS_H

#include <cheerp/types.h>
#include <cheerp/clientlib.h>

void assertEqual(double value, double expected, double epsilon, const char* msg)
#ifdef PRE_EXECUTE_TEST
;
#else
{
	if (value >= expected - epsilon && value <= expected + epsilon) {
		client::console.log(msg, ": SUCCESS");
	} else {
		client::console.log(msg, ": FAILURE");
	}
}
#endif

void assertEqual(const char *value, const char *expected, const char* msg)
#ifdef PRE_EXECUTE_TEST
;
#else
{
	if (strcmp(value, expected) == 0) {
		client::console.log(msg, ": SUCCESS");
	} else {
		client::console.log(msg, ": FAILURE");
	}
}
#endif

template<class T>
void assertEqual(const T& value, const T& expected, const char* msg)
#ifdef PRE_EXECUTE_TEST
;
#else
{
	client::console.log(msg,(value==expected)?": SUCCESS":": FAILURE");
}
#endif

#ifdef PRE_EXECUTE_TEST
void webMain();
class ExecuteTestWebMain {
public:
    ExecuteTestWebMain() {
        webMain();
    }
}
static ExecuteTestWebMain;
#endif

#endif
