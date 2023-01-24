//===---------------------------------------------------------------------===//
//	Copyright 2022 Leaning Technologies
//===----------------------------------------------------------------------===//

#include <tests.h>

#include <iostream>
#include <cheerp/client.h>

#include <cheerp/client.h>

struct [[cheerp::jsexport]] Bar;
struct [[cheerp::jsexport]] Foo
{
	int i{1};
	static Foo* create()
	{
		return new Foo();
	}
	int getI()
	{
		return i;
	}
	[[cheerp::genericjs]]
	bool cmp(Bar* b);
};
struct [[cheerp::jsexport]] Bar
{
	int i{1};
	Foo* f;
	static Bar* create()
	{
		auto* b = new Bar();
		auto* ff = new Foo[10];
		b->f = ff;
		return b;
	}
	Foo* getFoo(int i)
	{
		return &f[i];
	}
	bool cmp(Foo* f)
	{
		return &this->f[2] == &f[1];
	}
};
namespace [[cheerp::genericjs]] client
{
	struct Callback: public Object
	{
		Foo* operator()(Foo* f);
	};
	extern Callback jsFunc;
}

[[cheerp::genericjs]]
bool Foo::cmp(Bar* b)
{
	Foo* f1 = client::jsFunc(&this[1]);
	Foo* f2 = client::jsFunc(&b->f[2]);
	return f1 == f2;
}


int main()
{
	return 0;
}
