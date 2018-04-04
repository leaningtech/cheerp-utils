//===---------------------------------------------------------------------===//
//	Copyright 2018 Leaning Technlogies
//===---------------------------------------------------------------------===//

#include <tests.h>

struct X
{
	double x;
	virtual ~X()
	{
	}
};

struct J {
	int j{10};
	virtual int aaaaa() {
		return j;
	}
};
struct K {
	int k{20};
	virtual int f() {
		return k;
	}
};
struct B: public virtual K, public J
{
	int b;
	B():b(1){}
	virtual ~B()
	{
	}
	virtual int f() override
	{
		return b;
	}
};

struct A: public X, public  virtual B
{
	int a;
	A():a(2){}
	~A()
	{
	}
	int f() override
	{
		return a;
	}
};

void webMain()
{
	A a;
	A* volatile a2=&a;
	B* volatile b=&a;
	K* volatile k=&a;
	J* volatile j=&a;
	A* volatile a3=dynamic_cast<A*>(k);
	B* volatile b2=dynamic_cast<B*>(k);
	K* volatile k2=dynamic_cast<K*>(j);
	assertEqual(2, a3->f(), "dynamic_cast with virtual bases 1/3");
	assertEqual(2, b2->f(), "dynamic_cast with virtual bases 2/3");
	assertEqual(2, k2->f(), "dynamic_cast with virtual bases 3/3");
}
