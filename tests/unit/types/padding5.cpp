//===---------------------------------------------------------------------===//
//	Copyright 2021 Leaning Technlogies
//===----------------------------------------------------------------------===//

#include <tests.h>
#include <vector>

struct [[cheerp::genericjs]][[cheerp::bytelayout]] A
{
public:
        A() {}
        char m_type = 0;
        long long m_value = 0;
	void addStuff(int X)
	{
		m_type += X;
		m_value *= X;
	}
	int hash() const
	{
		return m_value * m_type;
	}
};

struct [[cheerp::genericjs]][[cheerp::bytelayout]] B
{
public:
	B() {}
	char some_char = 2;
	A a;
	A z[12];
	char k;
	char some_other_char = 23;
	long long some_64 = 123;
	char lastCHar;
	void addStuff(int X)
	{
		some_64 += X;
		some_other_char ^= X;
		a.addStuff(some_64++);
		z[3].addStuff(some_other_char++);
		some_64 += some_other_char;
	}
	int hash()
	{
		return a.hash() + z[3].hash() * some_other_char + some_64;
	}
};

template <unsigned int N>
[[cheerp::genericjs]] int testSize()
{
	B v[N];
	for (int i=0; i<N*3; i++)
	{
		v[i%N].addStuff(i);
	}
	int hash = 123;
	for (int i=0; i<N; i++)
	{
		hash += v[i].hash();
	}
	assertEqual(sizeof(B[N]), N * sizeof(B), "Padding support");

	return hash;
}

int main()
{
	int sum = 0;
	sum += testSize<1>();
	sum += testSize<2>();
	sum += testSize<3>();
	sum += testSize<57>();
	assertEqual(sum, 29198, "Access to member test");
	return 0;
}

