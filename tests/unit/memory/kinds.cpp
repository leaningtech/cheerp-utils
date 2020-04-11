//===---------------------------------------------------------------------===//
//	Copyright 2018 Leaning Technlogies
//===----------------------------------------------------------------------===//

#include <tests.h>

void webMain()
{
	//Check pointer kinds assigned by Cheerp
	client::String* str = new client::String();
	assertEqual(__builtin_cheerp_pointer_kind(str), /*COMPLETE_OBJECY*/0u, "Pointer kind on client object");

	std::string* str2 = new std::string("text");
	assertEqual(__builtin_cheerp_pointer_kind(str2), /*COMPLETE_OBJECY*/0u, "Pointer kind on heap allocated object");
	delete str2;

	union u
	{
		int i;
		float f;
	};

	u* blData = new u();
	blData->i = 0x41400000;
	assertEqual(blData->f, 12.0f, "Pointer kind on union 1/2");
	assertEqual(__builtin_cheerp_pointer_kind(blData), /*BYTE_LAYOUT*/3u, "Pointer kind on union 2/2");
	delete blData;
	
	int a[] = {1,2,3,4,5,6,7,8};

	int* ap = a+2;

	assertEqual(__builtin_cheerp_pointer_kind(ap), /*SPLIT_REGULAR*/1u, "Pointer kind on array");
	assertEqual(*ap, 3, "Force array loads");
}
