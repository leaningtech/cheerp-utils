//===---------------------------------------------------------------------===//
//	Copyright 2014 Leaning Technlogies
//===----------------------------------------------------------------------===//

#include <tests.h>

bool testSuccessful = false;

class [[jsexport]] JsStruct
{
private:
	float a;
	int b;
public:
	JsStruct(float _a, int _b):a(_a),b(_b)
	{
	}
	void test()
	{
		if(b  == 42)
			testSuccessful = true;
	}
};

void webMain()
{
	//Test JS-layout struct
	__asm__("var a=new JsStruct(3.0,42); a.test()");
	assertEqual(testSuccessful, true, "JS interoperability using [[jsexport]]/__asm__");
}
