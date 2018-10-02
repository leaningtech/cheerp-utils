//===---------------------------------------------------------------------===//
//	Copyright 2018 Leaning Technlogies
//===---------------------------------------------------------------------===//

#include <tests.h>

class A {
public:
	virtual ~A() { }
};

class B : virtual public A {
};

class C : public B, virtual public A {
public:
	virtual int foo();
};

int C::foo()
{
	return 1;
}
void webMain()
{
	C c;
	int ret = c.foo();
	assertEqual(1, ret, "Nearly empty virtual bases 1/1");
}
