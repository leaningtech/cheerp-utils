//#include <jscore.h>

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
}
