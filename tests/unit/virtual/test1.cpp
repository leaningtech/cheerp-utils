//#include <jscore.h>

struct X
{
	double x;
	virtual ~X()
	{
	}
};

struct B
{
	int b;
	B():b(1){}
	virtual ~B()
	{
	}
	virtual void f()
	{
	}
};

struct A: public X, public B
{
	int a;
	A():a(2){}
	~A()
	{
	}
	void f()
	{
//		client::print(a);
		volatile int u=a;
	}
};

void webMain()
{
	A a;
	A* volatile a2=&a;
	B* volatile b=&a;
	b->f();
	a2->f();
}
