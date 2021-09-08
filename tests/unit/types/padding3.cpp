//===---------------------------------------------------------------------===//
//	Copyright 2021 Leaning Technlogies
//===----------------------------------------------------------------------===//

#include <tests.h>
#include <vector> 

struct A
{
public:
        A() {}
        char m_type = 0;
        long long m_value = 0;
	char XXX = 23;
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

struct B
{
public:
	B() {}
	char some_char = 2;
	A a;
	char some_other_char = 23;
	A z;
	long long some_64 = 123;
	void addStuff(int X)
	{
		some_64 += X;
		some_other_char ^= X;
		a.addStuff(some_64++);
		z.addStuff(some_other_char++);
		some_64 += some_other_char;
	}
	int hash()
	{
		return a.hash() + z.hash() * some_other_char + some_64;
	}
};

template <unsigned int N>
void testSize()
{
	std::vector<B> v(N);
	for (int i=0; i<N*3; i++)
	{
		v[i%N].addStuff(i);
	}
	int hash = 123;
	for (int i=0; i<N; i++)
	{
		hash += v[i].hash();
	}

	assertEqual(v.size(), N, "Padding support");
}

int main()
{
	testSize<1>();
	testSize<2>();
	testSize<3>();
	testSize<10>();
	testSize<57>();
        return 0;
}

