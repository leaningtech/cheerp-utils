//===---------------------------------------------------------------------===//
//	Copyright 2021 Leaning Technlogies
//===----------------------------------------------------------------------===//

#include <tests.h>

struct __attribute__((packed)) MyStruct{
    char c;
    int a;
};

int main()
{
	assertEqual(sizeof(MyStruct), 5, "Sizeof support");
	return 0;
}

