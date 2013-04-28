#include <string.h>

struct B
{
	int b;
};

struct A
{
	B b;
	int a;
};

A a2;

void webMain()
{
	A a;
	memcpy(&a.b,&a2.b,sizeof(B));
	volatile int u=a.b.b;
}
