#include <tests.h>

thread_local int myInt = 0;

struct myStruct {
	[[cheerp::genericjs]]
	myStruct(int param) : myVal(param)
	{
		myInt = param;
	}
	int myVal;
};

static thread_local struct myStruct myStr(7);

int main()
{
	assertEqual(myStr.myVal, 7, "thread local access in genericjs constructors 1/1");
}
