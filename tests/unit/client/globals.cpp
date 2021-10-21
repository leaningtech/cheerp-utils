#include <tests.h>

namespace [[cheerp::genericjs]] client
{
	extern int externValue;
	int internValue = 100;

	class [[cheerp::client_layout]] SomeClass
	{
	public:
		SomeClass(int);
		void doTest(int);
	};
	extern SomeClass* externPtr;
	SomeClass* internPtr = new SomeClass(14);
	extern SomeClass externInstance;
}

[[cheerp::genericjs]]
void someFunc(client::SomeClass& instance)
{
	instance.doTest(33);
}

[[cheerp::genericjs]]
int main()
{
	assertEqual(client::internValue, 100, "Internal value 1/3");
	client::internValue = 7;
	assertEqual(client::internValue, 7, "Internal value 2/3");
	assertEqual(client::internValue * client::internValue, 49, "Internal value 3/3");
	
	assertEqual(client::externValue, 100, "External value 1/3");
	client::externValue = 7;
	assertEqual(client::externValue, 7, "External value 2/3");
	assertEqual(client::externValue * client::externValue, 49, "External value 3/3");

	client::internPtr->doTest(-42);
	client::externPtr->doTest(123);

	someFunc(client::externInstance);

	return 1;
}
