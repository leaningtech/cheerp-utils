//#include <jscore.h>

struct B
{
	int b;
	B():b(1){}
	virtual B* clone() = 0;
};

struct A: public B
{
	int a;
	A():a(2){}
	A* clone() { return new A(*this); }
};

void webMain()
{
	A a;
}
