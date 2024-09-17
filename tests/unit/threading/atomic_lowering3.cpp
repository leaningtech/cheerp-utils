#include <tests.h>
#include <atomic>

std::atomic<int> value(0);

void addToNumber()
{
	int num = value.load();
	int newNum = num + 1;
	while (!value.compare_exchange_weak(num, newNum))
		newNum = num + 1;
}

int main()
{
	for (int i = 0; i < 100; i++)
		addToNumber();
	assertEqual(value.load(), 100, "Simple compare exchange");
}
