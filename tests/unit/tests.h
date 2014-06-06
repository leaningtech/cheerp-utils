//===---------------------------------------------------------------------===//
//	Copyright 2013 Leaning Technlogies
//===----------------------------------------------------------------------===//

#ifndef _CHEERP_TESTS_H
#define _CHEERP_TESTS_H

#include <cheerp/types.h>
#include <cheerp/clientlib.h>

template<class T, class U>
void assertEqual(const T& value, const U& expected, const char* msg)
{
	client::console.log(msg,(value==expected)?": SUCCESS":": FAILURE");
}

#endif
