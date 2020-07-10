//===---------------------------------------------------------------------===//
//	Copyright 2020 Leaning Technlogies
//===----------------------------------------------------------------------===//

#include <tests.h>

//If we need to pass functors as parameters, we need to tag [[cheerp::genercijs]]
[[cheerp::jsexport]][[cheerp::genericjs]]
int invokeFunction(int a, int b, int (*function)(int,int))
{
	return (*function)(a,b);
}

[[cheerp::jsexport]][[cheerp::genericjs]]
int invokeFunction2(int a, int b, int (*function)(int, int,int(*x)(int,int)))
{
	auto lambda = [](int a,int b) {return a+b;};
	return (*function)(a,b,lambda);
}

[[cheerp::genericjs]]
void webMain()
{
	int result;

	__asm__("invokeFunction(50, 50, (a,b)=>{return a+b;})" : "=r"(result) :);
	assertEqual(result, 100, "JSExport invoke functions 1/3");

	__asm__("invokeFunction(50, 50, (a,b)=>{return a*b;})" : "=r"(result) :);
	assertEqual(result, 2500, "JSExport invoke functions 2/3");

	__asm__("invokeFunction2(50, 50, invokeFunction)" : "=r"(result) :);
	assertEqual(result, 100, "JSExport invoke functions 3/3");
}
