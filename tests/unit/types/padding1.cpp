//===---------------------------------------------------------------------===//
//	Copyright 2021 Leaning Technlogies
//===----------------------------------------------------------------------===//

#include <tests.h>
#include <vector> 


class basic_json
{
public:
        basic_json()
        {
        }

public:
        /// the type of the current element
        char m_type = 0;
        long long m_value = 0;
	char x = 8;
};

template <unsigned int N>
void testSize()
{
	std::vector<basic_json> v(N);
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

