//===---------------------------------------------------------------------===//
//	Copyright 2020 Leaning Technlogies
//===----------------------------------------------------------------------===//

#include <tests.h>

class [[cheerp::jsexport]][[cheerp::genericjs]] B
{
public:
	B(int k) : value(k)
	{
		counter++;
	}
	int getValue()
	{
		return value;
	}
	static int howMany()
	{
		return counter;
	}
private:
	int value;
	static int counter;
};

int B::counter = 0;

[[cheerp::jsexport]][[cheerp::genericjs]]
B* factoryB(int t)
{
	return new B(t);
}

class [[cheerp::jsexport]][[cheerp::genericjs]] A
{
public:
	A(int X) : value(X) {}
	B* generateB()
	{
		B* b = new B(value);
		return b;
	}
private:
	int value;
};

[[cheerp::genericjs]]B global(23);

[[cheerp::genericjs]]
void webMain()
{
	assertEqual(global.getValue(), 23, "JSExport member function 1/1");

	A a(23);

	assertEqual(B::howMany(), 1, "JSExport generator 1/4");
	B* generatedByA = a.generateB();
	assertEqual(B::howMany(), 2, "JSExport generator 2/4");
	__asm__("var generator = new A(12); var X = generator.generateB(); X = factoryB(213);");
	assertEqual(B::howMany(), 4, "JSExport generator 3/4");
	B* generatedByFactory = factoryB(1234);
	assertEqual(B::howMany(), 5, "JSExport generator 4/4");
}
