//===---------------------------------------------------------------------===//
//	Copyright 2021 Leaning Technlogies
//===----------------------------------------------------------------------===//

#include <tests.h>
#include <cmath>

template <class T>
int computeFunc(int A)
{
	T B = A;
	B *= A;
	B *= A;
	B = std::abs(B);
	return B % 123123;
}

int main()
{
	int X = 0;
	for (int i=-100; i<100; i++)
		X += computeFunc<long long>(i) + computeFunc<long long>(i << 5) + computeFunc<long long>(i * 1e5 + 12);
	assertEqual(X, 32038773, "Absolute value summation 1/2");
	int Y = 0;
	for (int i=-100; i<100; i++)
		Y += computeFunc<int>(i) + computeFunc<int>(i << 5) + computeFunc<int>(i * 1e5 + 12);
	assertEqual(Y, 33131675, "Absolute value summation 2/2");
}
