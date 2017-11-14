#include <tests.h>

#include <clocale>

void webMain()
{
	const char* loc;
	loc = setlocale(LC_ALL,"C");
	assertEqual(loc, "C", "setlocale 1/4");

	loc = setlocale(LC_ALL,"C.UTF-8");
	assertEqual(loc, "C.UTF-8", "setlocale 2/4");

	// Go back to default ("C")
	loc = setlocale(LC_ALL,"");
	assertEqual(loc, "C", "setlocale 3/4");

	// Invalid locale
	loc = setlocale(LC_ALL,"GARBAGE");
	assertEqual(loc==nullptr, true, "setlocale 4/4");
}
