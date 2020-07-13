//===---------------------------------------------------------------------===//
//	Copyright 2020 Leaning Technlogies
//===----------------------------------------------------------------------===//

#include <tests.h>

[[cheerp::jsexport]]
int sumInt(int a, int b)
{
	return a+b;
}

[[cheerp::jsexport]]
int sumUInt(unsigned int a, unsigned int b)
{
	return a+b;
}

[[cheerp::jsexport]]
int sumChar(char a, char b)
{
	//Return has to be int
	return a+b;
}

[[cheerp::jsexport]]
int sumUChar(unsigned char a, unsigned char b)
{
	//Return has to be int
	return a+b;
}

[[cheerp::jsexport]]
double sumDouble(double a, double b)
{
	return a+b;
}

[[cheerp::jsexport]]
float sumFloat(float a, float b)
{
	return a+b;
}

[[cheerp::jsexport]]
bool areEqualChar(char a, char b)
{
	return a==b;
}

int global_variable{0};

[[cheerp::jsexport]]
void setToFortyTwo()
{
	assertEqual(global_variable, 23, "JSExport free function void(void) 1/2");
	global_variable = 42;
}

[[cheerp::jsexport]][[cheerp::genericjs]]
void setToFortyTwoGenericJS()
{
	assertEqual(global_variable, 23, "JSExport free function void(void) 1/2");
	global_variable = 42;
}

[[cheerp::genericjs]]
void webMain()
{

	int result;

	__asm__("sumInt(-101,100)" : "=r"(result) :);
	assertEqual(result, -1, "JSExport free function int");

	__asm__("sumUInt(-101,100)" : "=r"(result) :);
	assertEqual(result, -1, "JSExport free function unsigned int");

	__asm__("sumChar(-128,127)" : "=r"(result) :);
	assertEqual(result, -1, "JSExport free function char");

	__asm__("sumUChar(-128,127)" : "=r"(result) :);
	assertEqual(result, 255, "JSExport free function unsigned char");

	__asm__("areEqualChar(12,13)" : "=r"(result) :);
	assertEqual(result, 0, "JSExport free function returns bool");

	global_variable = 23;
	setToFortyTwo();
	assertEqual(global_variable, 42, "JSExport free function void(void) 2/2");

	global_variable = 23;
	setToFortyTwoGenericJS();
	assertEqual(global_variable, 42, "JSExport free function void(void) genercijs 2/2");
}
