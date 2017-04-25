//===---------------------------------------------------------------------===//
//	Copyright 2017 Leaning Technlogies
//===----------------------------------------------------------------------===//

#include <stdarg.h>
#include <stdlib.h>
#include <tests.h>

int variadicSum(int a, ...)
{
	int ret = 0;
	va_list args;
	va_start(args,a);
	while(char* p = va_arg(args, char*))
	{
		ret += *p;
	}
	va_end(args);
	return ret;
}

void webMain()
{
	int i = NULL;
	int *p = NULL;
	char a = 1;
	char b = 2;
	char c = 3;
	char d = 4;
	int r1 = variadicSum(NULL,&a,&b,&c,&d,NULL);
	assertEqual(r1, 10, "Passing NULL to variadic call 1/2");
	int r2 = variadicSum(NULL,NULL);
	assertEqual(r2, 0, "Passing NULL to variadic call 2/2");
}
