//===---------------------------------------------------------------------===//
//	Copyright 2013 Leaning Technlogies
//===----------------------------------------------------------------------===//

#include <tests.h>

struct Never
{
};

struct A
{
	static int countC;
	static int countD;
	int i;
	A(int i): i(i)
	{
		countC++;
	}
	A(const A& o): i(o.i)
	{
		countC++;
	}
	virtual ~A()
	{
		countD++;
	}
};
int A::countC = 0;
int A::countD = 0;

struct B
{
	static int countC;
	static int countD;
	char c;
	B(char c): c(c)
	{
		countC++;
	}
	B(const B& o): c(o.c)
	{
		countC++;
	}
	virtual ~B()
	{
		countD++;
	}
};
int B::countC = 0;
int B::countD = 0;

struct C
{
	static int countC;
	static int countD;
	short s;
	C(short s): s(s)
	{
		countC++;
	}
	C(const C& o): s(o.s)
	{
		countC++;
	}
	virtual ~C()
	{
		countD++;
	}
};
int C::countC = 0;
int C::countD = 0;

struct X: public A, public B, public virtual C
{
	static int countC;
	static int countD;
	int i;
	X(int i): A(i), B(i), C(i), i(i)
	{
		countC++;
	}
	X(const X& o): A(o.i), B(o.i), C(o.i), i(o.i)
	{
		countC++;
	}
	virtual ~X()
	{
		countD++;
	}
};
int X::countC = 0;
int X::countD = 0;

struct Y: public virtual C
{
	static int countC;
	static int countD;
	short s;
	Y(short s): C(s), s(s)
	{
		countC++;
	}
	Y(const Y& o): C(o.s), s(o.s)
	{
		countC++;
	}
	virtual ~Y()
	{
		countD++;
	}
};
int Y::countC = 0;
int Y::countD = 0;

struct Z: public X, public Y
{
	static int countC;
	static int countD;
	char c;
	Z(char c): X(c), Y(c), C(3), c(c)
	{
		countC++;
	}
	Z(const Z& o): X(o.c), Y(o.c), C(o.C::s), c(o.c)
	{
		countC++;
	}
	virtual ~Z()
	{
		countD++;
	}
};
int Z::countC = 0;
int Z::countD = 0;

void zeroCounters()
{
	A::countC = 0;
	A::countD = 0;
	B::countC = 0;
	B::countD = 0;
	C::countC = 0;
	C::countD = 0;
	X::countC = 0;
	X::countD = 0;
	Y::countC = 0;
	Y::countD = 0;
	Z::countC = 0;
	Z::countD = 0;
}

template<typename T, int k>
void throwIf(T t, int v)
{
	if(v == k)
		throw t;
	else
		throw Never{};
}

void testBasic()
{
	int i = unitBlackBox(10);
	int r = 0;

	try {
		throwIf<int, 10>(i, i);
		r = 1;
	} catch(int e) {
		r = e;
	}
	assertEqual(r, i, "Throw basic type 1/2");
	assertEqual(r, 10, "Throw basic type 2/2");
}

void testPtr()
{
	int i = unitBlackBox(10);
	int j = unitBlackBox(11);
	int* r = nullptr;

	try {
		throwIf<int*, 10>(&i, i);
		r = &j;
	} catch(int* e) {
		r = e;
	}
	assertEqual(r==&i, true, "Throw pointer type 1/2");
	assertEqual(*r, 10, "Throw pointer type 2/2");
}

void testObject()
{
	zeroCounters();

	int i = unitBlackBox(10);
	A a(i);
	int r = 0;

	try {
		throwIf<A, 10>(a, a.i);
		r = 1;
	} catch(A a) {
		r = a.i;
	}
	assertEqual(r, a.i, "Throw object type 1/4");
	assertEqual(r, 10, "Throw object type 2/4");
	assertEqual(a.countC, 4, "Throw object type 3/4");
	assertEqual(a.countD, 3, "Throw object type 4/4");
}

void testObjectRef()
{
	zeroCounters();

	int i = unitBlackBox(10);
	A a(i);
	int r = 0;

	try {
		throwIf<A, 10>(a, a.i);
		r = 1;
	} catch(A& a) {
		r = a.i;
	}
	assertEqual(r, a.i, "Throw object type ref 1/4");
	assertEqual(r, 10, "Throw object type ref 2/4");
	assertEqual(a.countC, 3, "Throw object type ref 3/4");
	assertEqual(a.countD, 2, "Throw object type ref 4/4");
}

void testObjectPtr()
{
	zeroCounters();

	int i = unitBlackBox(10);
	A* a = new A(i);
	int r = 0;

	try {
		throwIf<A*, 10>(a, a->i);
		r = 1;
	} catch(A* a) {
		r = a->i;
	}
	delete a;
	assertEqual(r, a->i, "Throw object type ptr 1/4");
	assertEqual(r, 10, "Throw object type ptr 2/4");
	assertEqual(a->countC, 1, "Throw object type ptr 3/4");
	assertEqual(a->countD, 1, "Throw object type ptr 4/4");
}

void testObjectRefBase()
{
	zeroCounters();

	int i = unitBlackBox(10);
	X x(i);
	int r = 0;

	try {
		throwIf<X, 10>(x, x.i);
		r = 1;
	} catch(B& b) {
		r = b.c;
	} catch(X& x) {
		r = -1;
	}
	assertEqual(r, (int)x.c, "Throw object type ptr and catch by base type 1/4");
	assertEqual(r, 10, "Throw object type ptr and catch by base type 2/4");
	assertEqual(x.countC, 3, "Throw object type ptr and catch by base type 3/4");
	assertEqual(x.countD, 2, "Throw object type ptr and catch by base type 4/4");
}
void testObjectPtrBase()
{
	zeroCounters();

	int i = unitBlackBox(10);
	X* x = new X(i);
	int r = 0;

	try {
		throwIf<X*, 10>(x, x->i);
		r = 1;
	} catch(B* b) {
		r = b->c;
	} catch(X* b) {
		r = -1;
	}
	assertEqual(r, (int)x->c, "Throw object type ptr and catch by base type 1/4");
	delete x;
	assertEqual(r, 10, "Throw object type ptr and catch by base type 2/4");
	assertEqual(X::countC, 1, "Throw object type ptr and catch by base type 3/4");
	assertEqual(X::countD, 1, "Throw object type ptr and catch by base type 4/4");
}

void testObjectRefVBase()
{
	zeroCounters();

	int i = unitBlackBox(10);
	Z z(i);
	int r = 0;

	try {
		throwIf<Z, 10>(z, z.c);
		r = 1;
	} catch(C& c) {
		r = c.s;
	} catch(X& x) {
		r = -1;
	}
	assertEqual(r, (int)z.C::s, "Throw object type ptr and catch by virtual base type 1/4");
	assertEqual(r, 3, "Throw object type ptr and catch by virtual base type 2/4");
	assertEqual(z.countC, 3, "Throw object type ptr and catch by virtual base type 3/4");
	assertEqual(z.countD, 2, "Throw object type ptr and catch by virtual base type 4/4");
}

void testObjectPtrVBase()
{
	zeroCounters();

	int i = unitBlackBox(10);
	Z* z = new Z(i);
	int r = 0;

	try {
		throwIf<Z*, 10>(z, z->c);
		r = 1;
	} catch(C* c) {
		r = c->s;
	} catch(X* x) {
		r = -1;
	}
	assertEqual(r, (int)z->C::s, "Throw object type ptr and catch by virtual base type 1/4");
	delete z;
	assertEqual(r, 3, "Throw object type ptr and catch by virtual base type 2/4");
	assertEqual(Z::countC, 1, "Throw object type ptr and catch by virtual base type 3/4");
	assertEqual(Z::countD, 1, "Throw object type ptr and catch by virtual base type 4/4");
}

template<typename From, typename To>
[[clang::optnone]]
To* getOrCreate(From* f, int cond)
{
	if(cond==10)
		return dynamic_cast<To*>(f);
	else 
		return new To(cond);
}
void testDynCast()
{
	zeroCounters();

	int i = unitBlackBox(10);
	Z z(i);
	int r = 0;

	B* b = getOrCreate<Z, B>(&z, i);
	C* c = getOrCreate<B, C>(b, i);
	assertEqual(c->s, z.C::s, "Throw object type ptr and catch by virtual base type 1/4");
	assertEqual((int)z.C::s, 3, "Throw object type ptr and catch by virtual base type 2/4");
}

void webMain()
{
	testBasic();
	testPtr();
	testObject();
	testObjectRef();
	testObjectPtr();
	testObjectRefBase();
	testObjectPtrBase();
	testObjectRefVBase();
	testObjectPtrVBase();

	testDynCast();
}
