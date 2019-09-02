#include <cheerp/client.h>
#include <tests.h>

// Test cheerpCreateClosure and cheerpCreateClosureSplit, with multiple arguments
// and return values

void webMain()
{
	int c = unitBlackBox(3);
	int d = unitBlackBox(4);
	auto cb = cheerp::Callback([c,d](int a, int b)
	{
		return a+b+c+d;
	});
	auto cbsplit = cheerp::Callback([c](int a, int b)
	{
		return a+b+c;
	});
	assertEqual(reinterpret_cast<int(*)(int, int)>(cb)(1,2), 10, "Basic closure creation 1/2");
	assertEqual(reinterpret_cast<int(*)(int, int)>(cbsplit)(1,2), 6, "Basic closure creation 2/2");
}
