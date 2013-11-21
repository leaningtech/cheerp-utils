//===---------------------------------------------------------------------===//
//	Copyright 2013 Leaning Technlogies
//===----------------------------------------------------------------------===//

#include <tests.h>

static char *var1[] = { 0 };

char **var2 = &var1[0];

void webMain()
{
	char* a=*var2;
	assertEqual(*a, 0, "Access to pointers of global arrays");
}
