//===---------------------------------------------------------------------===//
//	Copyright 2015 Leaning Technlogies
//===----------------------------------------------------------------------===//

#include <tests.h>

bool testSuccessful = false;

class [[cheerp::jsexport]] JsStruct
{
public:
	JsStruct()
	{
	}
	void test(client::Float64Array* a)
	{
		assertEqual(a->get(2), 1.2, "Accessing typed arrays using set/get 2/3");
		testSuccessful = true;
	}
};

void webMain()
{
	client::Float64Array* a=new client::Float64Array(10);
	a->set(2, 1.2);

	assertEqual(a->get(2), 1.2, "Accessing typed arrays using set/get 1/3");
	__asm__("var ar=new Float64Array(10); ar[2] = 1.2; var test = new JsStruct(); test.test(ar)");
	assertEqual(testSuccessful, true, "Accessing typed arrays using set/get 3/3");
}
