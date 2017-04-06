//===---------------------------------------------------------------------===//
//	Copyright 2013 Leaning Technlogies
//===----------------------------------------------------------------------===//

#ifndef _CHEERP_TESTS_H
#define _CHEERP_TESTS_H

#include <cheerp/types.h>
#include <cheerp/clientlib.h>

#ifdef __ASMJS__
namespace client
{
	void printString(const char* s, int n);
}
#endif

void log_helper(const char* msg, const char* status)
{
#ifdef __ASMJS__
	static char buf[512];
	int msg_len = strlen(msg);
	int status_len = strlen(status);
	for(int i = 0; i < msg_len; i++)
		buf[i] = msg[i];
	buf[msg_len]=' ';
	msg_len++;
	for(int i = 0; i < status_len; i++)
		buf[msg_len+i] = status[i];
	client::printString(buf, msg_len+status_len);
#else
	client::console.log(msg, status);
#endif
}

void assertEqual(double value, double expected, double epsilon, const char* msg)
#ifdef PRE_EXECUTE_TEST
;
#else
{
	if (value >= expected - epsilon && value <= expected + epsilon) {
		log_helper(msg, ": SUCCESS");
	} else {
		log_helper(msg, ": FAILURE");
	}
}
#endif

void assertEqual(const char *value, const char *expected, const char* msg)
#ifdef PRE_EXECUTE_TEST
;
#else
{
	if (strcmp(value, expected) == 0) {
		log_helper(msg, ": SUCCESS");
	} else {
		log_helper(msg, ": FAILURE");
	}
}
#endif

template<class T>
void assertEqual(const T& value, const T& expected, const char* msg)
#ifdef PRE_EXECUTE_TEST
;
#else
{
	log_helper(msg,(value==expected)?": SUCCESS":": FAILURE");
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
