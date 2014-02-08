//===---------------------------------------------------------------------===//
//	Copyright 2013 Leaning Technlogies
//===----------------------------------------------------------------------===//

#include <tests.h>
#include <stdio.h>
#include <string.h>

void webMain()
{
	//Test printf of a very small negative float
	union {
		float f;
		unsigned int i;
	} tmp;
	tmp.i = 0xb3428184;
	char buf[20];
	sprintf(buf,"%f",tmp.f);
	
	assertEqual(strcmp(buf,"-0.000000"), 0, "Printf of very small negative float");
}
