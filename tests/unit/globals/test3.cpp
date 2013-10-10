//===---------------------------------------------------------------------===//
//	Copyright 2013 Leaning Technlogies
//===----------------------------------------------------------------------===//

#include <tests.h>

static char *initial_env[] = { 0 };

char **environ = &initial_env[0];

void webMain()
{
	char* a=*environ;
	assertEqual(*a, 0, "Access to pointers of global arrays");
}
