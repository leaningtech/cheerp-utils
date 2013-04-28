#include <string.h>

struct A
{
	int a;
	virtual ~A()
	{
	}
};

struct B: public A
{
	virtual ~B()
	{
	}
};

struct C: public B
{
	virtual ~C()
	{
	}
};

void webMain()
{
	C c;
	B* volatile b=&c;
	A* volatile a=&c;

	delete a;
	delete b;
	delete &c;
}
