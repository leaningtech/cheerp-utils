//===---------------------------------------------------------------------===//
//	Copyright 2021 Leaning Technlogies
//===----------------------------------------------------------------------===//

#include <tests.h>
#include <cheerp/jsobject.h>

namespace [[cheerp::genericjs]] client
{
	struct SomeClass : public Object
	{
		SomeClass(int X);
		static int someFunc();
		int otherFunc();
	};
}

class [[cheerp::jsexport]][[cheerp::genericjs]] SomeClass
{
public:
	SomeClass(int Y)
		: counter(Y)
	{
	}
	static int someFunc()
	{
		return invocations;
	}
	int otherFunc()
	{
		invocations++;
		counter += 7;
		return counter;
	}
private:
	int counter;
	static int invocations;
};

int SomeClass::invocations = 0;

int [[cheerp::genericjs]] main()
{
	client::SomeClass* c = new client::SomeClass(7);

	assertEqual(client::SomeClass::someFunc(), 0, "Static method");

	assertEqual(c->otherFunc(), 14, "Non static method");
	assertEqual(c->otherFunc(), 21, "Non static method");
	assertEqual(c->otherFunc(), 28, "Non static method");

	assertEqual(client::SomeClass::someFunc(), 3, "Static method");

	return 1;
}
