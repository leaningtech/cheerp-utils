//===---------------------------------------------------------------------===//
//	Copyright 2017 Leaning Technlogies
//===----------------------------------------------------------------------===//

#include <tests.h>

void webMain()
{
	//Test dynamically sized allocas
	volatile int size = 10;
	int sum = 0;
	if (size > 4)
	{
		int arr[size];
		for (int i = 0; i < size; i++)
		{
			arr[i] = i;
		}
		for (int i = 0; i < size; i++)
		{
			sum += arr[i];
		}
	}

	assertEqual(sum, 45, "Dynamic alloca support 1/1");
}
