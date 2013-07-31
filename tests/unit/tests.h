//===---------------------------------------------------------------------===//
//	Copyright 2013 Leaning Technlogies
//===----------------------------------------------------------------------===//

#ifndef _DUETTO_TESTS_H
#define _DUETTO_TESTS_H

#include <duetto/types.h>
#include <duetto/clientlib.h>

template<class T, class U>
void assertEqual(const T& value, const U& expected, const char* msg)
{
	client::print(msg, (value==expected)?": SUCCESS":": FAILURE");
}

#endif
