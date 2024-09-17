#include <tests.h>
#include <atomic>

struct structWithAtomicMember
{
	std::atomic<int> atomicValue;
};

struct normalStruct
{
	int value;
};

int main()
{
	std::atomic<int> val = 4205;
	val.fetch_add(1391);
	val.fetch_and(6234);
	val.fetch_or(9196);
	val.fetch_sub(4985);
	val.fetch_xor(7578);
	assertEqual(val.load(), 15641, "Atomic binary operations");

	int b = 90;
	b += val.exchange(3125);
	b += val.fetch_add(7264);
	b += val.fetch_sub(4981);
	b += val.fetch_or(2037);
	b += val.fetch_and(8185);
	b += val.load();
	assertEqual(b, 46915 , "Atomic binary return values");

	structWithAtomicMember s1;
	s1.atomicValue.store(3);
	s1.atomicValue.fetch_add(95);
	s1.atomicValue.fetch_and(51);
	assertEqual(s1.atomicValue.load(), 34, "Atomic value inside struct");

	normalStruct s2 = {3};
	std::atomic<normalStruct> s3;
	s3.store(s2);
	s2.value = 25;
	s2 = s3.load();
	assertEqual(s2.value, 3, "Atomic struct");
}
