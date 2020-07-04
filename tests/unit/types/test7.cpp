//===---------------------------------------------------------------------===//
//	Copyright 2014 Leaning Technlogies
//===----------------------------------------------------------------------===//

#include <tests.h>

bool testSuccessful = false;
bool testSuccessful2 = false;

class [[cheerp::jsexport]] JsStruct
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
		if(b == 42)
			testSuccessful = true;
	}
};

class [[cheerp::jsexport]] JsStruct2
{
private:
	float a;
	int b;
public:
	JsStruct2() = default;
	void set_b(int i)
	{
		b = i;
	}
	void test()
	{
		if(b == 43)
			testSuccessful2 = true;
	}
	float testptr(client::Float32Array* b, int o)
	{
		float* f = __builtin_cheerp_make_regular<float>(b, o);
		return f[1];
	}
};

void webMain()
{
	//Test JS-layout struct
	__asm__("var a=new JsStruct(3.0,42); a.test()");
	assertEqual(testSuccessful, true, "JS interoperability using [[cheerp::jsexport]]/__asm__ 1/3");
	__asm__("var a=new JsStruct2(); a.set_b(43); a.test()");
	assertEqual(testSuccessful2, true, "JS interoperability using [[cheerp::jsexport]]/__asm__ 2/3");
	client::Object* tmp;
	__asm__("new JsStruct2()" : "=r"(tmp));
	float ret;
	__asm__("%1.testptr(new Float32Array([0,0,42.5]), 1)" : "=r"(ret) : "r"(tmp));
	assertEqual(ret, 42.5f, "JS interoperability using [[cheerp::jsexport]]/__asm__ 3/3");
}
