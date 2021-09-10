//===---------------------------------------------------------------------===//
//	Copyright 2013 Leaning Technlogies
//===----------------------------------------------------------------------===//

#include <tests.h>
#include <cheerpintrin.h>

namespace [[cheerp::genericjs]] cheerp {
	class JSException {
		client::Object* inner;
		public:
			JSException(client::Object* e): inner(e)
			{
			}
			client::Object* get()
			{
				return inner;
			}
	};
}
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

void testNullptr()
{
	zeroCounters();

	int i = unitBlackBox(10);
	int r = 0;

	try {
		throwIf<C*, 10>(nullptr, i);
		r = 1;
	} catch(A* a) {
		r = -1;
	} catch(C* c) {
		r = 2;
	}
	assertEqual(r, 2, "Throw a null pointer and catch it 1/1");
}

void testNullptr_t()
{
	zeroCounters();

	int i = unitBlackBox(10);
	int r = 0;

	try {
		throwIf<std::nullptr_t, 10>(nullptr, i);
		r = 1;
	} catch(std::nullptr_t n) {
		r = -1;
	} catch(C* c) {
		r = c->s;
	}
	assertEqual(r, -1, "Throw nullptr_t type and catch it 1/1");
}

void testJsObject()
{
	int i = unitBlackBox(10);
	client::Object* o = new client::Object();
	o->set_("data", i); 
	int r = 0;

	try {
		__builtin_cheerp_throw(o);
		r = 1;
	} catch(cheerp::JSException& e) {
		r = int(*(*e.get())["data"]);
	} catch(X* x) {
		r = -1;
	}
	assertEqual(r, i, "Throw a client::Object* and catch it 1/1");
}

void testRethrow()
{
	zeroCounters();

	int i = unitBlackBox(10);
	A a(i);
	int r = 0;

	auto inner = [](A& a, int& r)
	{
		try {
			throwIf<A, 10>(a, a.i);
			r = 1;
		} catch(A& a) {
			r = a.i;
			throw;
		}
	};
	try {
		inner(a, r);
	} catch(A& a) {
		r+= a.i;
	}
	assertEqual(r, 2*a.i, "Throw object type ref 1/4");
	assertEqual(r, 2*10, "Throw object type ref 2/4");
	assertEqual(a.countC, 3, "Throw object type ref 3/4");
	assertEqual(a.countD, 2, "Throw object type ref 4/4");
}

void testRethrowForeign()
{
	int i = unitBlackBox(10);
	client::Object* o = new client::Object();
	o->set_("data", i); 
	int r = 0;

	auto inner = [](client::Object* o, int& r)
	{
		try {
			__builtin_cheerp_throw(o);
			r = 1;
		} catch(cheerp::JSException& e) {
			r = int(*(*e.get())["data"]);
			throw;
		} catch(X* x) {
			r = -1;
		}
	};

	try {
		inner(o, r);
	} catch(cheerp::JSException& e) {
		r += int(*(*e.get())["data"]);
	}
	assertEqual(r, 2*i, "Throw a client::Object* and rethrow it 1/1");
}

void testResume()
{
	zeroCounters();

	int i = unitBlackBox(10);
	A a(i);
	int r = 0;

	auto inner = [](A& a, int& r)
	{
		try {
			throwIf<A, 10>(a, a.i);
			r = 1;
		} catch(B& b) {
			r = b.c;
		}
		r = 2;
	};
	try {
		inner(a, r);
	} catch(A& a) {
		r+= a.i;
	}
	assertEqual(r, a.i, "Test resume unwinding 1/4");
	assertEqual(r, 10, "Test resume unwinding 2/4");
	assertEqual(a.countC, 3, "Test resume unwinding 3/4");
	assertEqual(a.countD, 2, "Test resume unwinding 4/4");
}

void testGetCurrentException()
{
	zeroCounters();

	int i = unitBlackBox(10);
	A a(i);
	int r = 0;

	auto inner = [](A& a, int& r)
	{
		std::exception_ptr ex;
		try {
			throwIf<A, 10>(a, a.i);
			r = 1;
		} catch(A& a) {
			ex = std::current_exception();
			r = a.i;
		}
		return ex;
	};
	try {
		auto ex = inner(a, r);
		std::rethrow_exception(ex);
	} catch(A& a) {
		r+= a.i;
	}
	assertEqual(r, 2*a.i, "Capture and rethrow current exception 1/4");
	assertEqual(r, 2*10, "Capture and rethrow current exception 2/4");
	assertEqual(a.countC, 3, "Capture and rethrow current exception 3/4");
	assertEqual(a.countD, 2, "Capture and rethrow current exception 4/4");
}

struct T
{
	static int count;
	int i;
	T(int i): i(i)
	{
	}
	~T()
	{
		A a(i);
		try {
			throwIf<A, 10>(a, a.i);
		} catch (A& a) {
			count = std::uncaught_exceptions();
		}
	}
};
int T::count = 0;

void testNestedUnwind()
{
	zeroCounters();

	int i = unitBlackBox(10);
	try {
		T t(i);
		throwIf<int, 10>(i, i);
		T::count = -1;
	} catch(int i) {
	}
	assertEqual(T::count, 1, "Throw exception during another exception cleanup 1/1");
}

void testCatchAll()
{
	int i = unitBlackBox(10);
	int r = 0;
	try {
		throwIf<int, 10>(i, i);
		r = -1;
	} catch(...) {
		r = 1;
	}
	assertEqual(r, 1, "Catchall clause 1/1");
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
	testNullptr();
	testNullptr_t();
	testJsObject();
	testRethrow();
	testRethrowForeign();
	testResume();
	testGetCurrentException();
	testNestedUnwind();
	testCatchAll();
}
