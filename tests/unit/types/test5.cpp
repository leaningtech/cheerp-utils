//===---------------------------------------------------------------------===//
//	Copyright 2013 Leaning Technlogies
//===----------------------------------------------------------------------===//

#include <tests.h>

void webMain()
{
	//Test small integer math
	volatile unsigned short a=10;
	volatile unsigned short b=0xfffe;
	assertEqual((unsigned short)(b+a), 8, "Int16 unsigned addition");
	assertEqual((unsigned short)(b-a), 0xfff4, "Int16 unsigned subtraction");
	assertEqual((unsigned short)(b*a), 0xFFEC, "Int16 unsigned multiplication");
	assertEqual((unsigned short)(b/a), 0x1999, "Int16 unsigned division");
	assertEqual((unsigned short)(b%a), 4, "Int16 unsigned remainder");

	volatile signed short c=10;
	volatile signed short d=0xfffe;
	assertEqual((signed short)(d+c), 8, "Int16 signed addition");
	assertEqual((signed short)(d-c), -12, "Int16 signed subtraction");
	assertEqual((signed short)(d*c), -20, "Int16 signed multiplication");
	assertEqual((signed short)(c/d), -5, "Int16 signed division");
	assertEqual((signed short)(d%c), -2, "Int16 signed remainder");
}
