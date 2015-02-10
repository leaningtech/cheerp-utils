//===---------------------------------------------------------------------===//
//	Copyright 2015 Leaning Technlogies
//===----------------------------------------------------------------------===//

#include <tests.h>
#include <wchar.h>

void webMain()
{
	const char * h = "hello";
	mbstate_t s;
	size_t ret=mbsrtowcs(0, &h, 0, &s);

	assertEqual(ret, 5, "Multibyte string support");
}
