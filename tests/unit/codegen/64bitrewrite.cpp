//===---------------------------------------------------------------------===//
//	Copyright 2020 Leaning Technlogies
//===----------------------------------------------------------------------===//

#include <tests.h>

struct Foo {
	int i;
	long long j;
};

int i = 1;
Foo fg{1,(long long)&i+0x0f00000000000001-(long long)&i};

void webMain()
{
	assertEqual(fg.j, 0x0f00000000000001, "Rewriting i64 in types and expressions 1/2");
	assertEqual((long long)&fg + 0x0f00000000000001 - (long long)&fg, 0x0f00000000000001, "Rewriting i64 in types and expressions 2/2");
}
