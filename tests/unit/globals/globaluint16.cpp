//===---------------------------------------------------------------------===//
//	Copyright 2022 Leaning Technologies
//===----------------------------------------------------------------------===//

#include <tests.h>

#include <stdint.h>
#include <stdio.h>

uint16_t global = 123;

void doSomething()
{
	char buffer[100];
	sprintf(buffer, "%d\n", global);

	int len = strlen(buffer);
	assertEqual(len < 7, true, "Globalized globals should be masked");
}

int main()
{
	for (int i=0; i<53; i++)
	{
		global *= global;
		doSomething();
	}
	return global;
}
