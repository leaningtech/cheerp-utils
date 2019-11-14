//===----------------------------------------------------------------------===//
//	Copyright 2019 Leaning Technlogies
//===----------------------------------------------------------------------===//

#include <tests.h>

struct A
{
	int i = 1;
	[[clang::optnone]]
	int funcA(int a)
	{
		return i+a;
	}
};

struct B
{
	int j = 2;
};

struct C: public B, public A
{
	int k = 3;
	[[clang::optnone]]
	int funcC(int a)
	{
		return funcA(a+k);
	}
};

struct D: public C
{
	int l = 4;
};

typedef int(D::*FPD)(int);

[[clang::optnone]]
FPD getMemberPointerA()
{
	return static_cast<FPD>(&C::funcA);
}
[[clang::optnone]]
FPD getMemberPointerC()
{
	return static_cast<FPD>(&C::funcC);
}

[[clang::optnone]]
bool bb(bool b)
{
	return b;
}

[[clang::optnone]]
int baz(A* a)
{
	//C* c = static_cast<C*>(a);
	//return c->k;
	return a->i;
}

int main()
{
	D d;
	FPD volatile f = bb(false) ? getMemberPointerC() : getMemberPointerA();
	assertEqual((d.*f)(2), 3 , "Cast member function pointer from non primary base 1/1");

	return 0;
}
