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
};

template <unsigned int N>
void testSize()
{
	std::vector<B> v(N);
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

