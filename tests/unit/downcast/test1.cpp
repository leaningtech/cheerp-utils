#include <duetto/types.h>
#include <duetto/clientlib.h>

template<class T>
void assertEqual(const T& value, const T& expected, const char* msg)
{
	client::print(msg, (value==expected)?": SUCCESS":": FAILURE");
}

struct B
{
	int b;
	B():b(1){}
};

struct A: public B
{
	int a;
	A():a(2){}
};

void webMain()
{
	A a;
	B* volatile b=&a;
	A* volatile a2=static_cast<A*>(b);
	assertEqual(a2->a, 2, "Downcast");
}
