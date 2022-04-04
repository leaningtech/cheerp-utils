//===---------------------------------------------------------------------===//
//	Copyright 2015 Leaning Technlogies
//===----------------------------------------------------------------------===//

#include <tests.h>
#include <wchar.h>
#include <locale.h>

void webMain()
{
    setlocale(LC_ALL, "C.UTF-8");
	const char * h = "hello";
	mbstate_t s;
	size_t ret=mbsrtowcs(0, &h, 0, &s);

	assertEqual<size_t>(ret, 5, "Multibyte string support");
}
