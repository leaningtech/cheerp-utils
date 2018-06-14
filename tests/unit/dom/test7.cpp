//===---------------------------------------------------------------------===//
//	Copyright 2014 Leaning Technlogies
//===----------------------------------------------------------------------===//

#include <cheerp/client.h>
#include <cheerp/clientlib.h>
#include "tests.h"

int callbackCount=0;

void plainFunction()
{
	assertEqual(callbackCount++, 0, "Calling back plain functions");
}

class Functor
{
private:
	int data;
public:
	static int destructorCalled;
	Functor():data(42)
	{
	}
	~Functor()
	{
		destructorCalled++;
	}
	void operator()()
	{
		assertEqual(data, 42, "Calling back functors 1/3");
		assertEqual(callbackCount++, 1, "Calling back functors 2/3");
	}
};

int Functor::destructorCalled=0;

void webMain()
{
	// Test various ways of passing callbacks to JavaScript code
	setTimeout(cheerp::Callback(plainFunction), 0);
	setTimeout(cheerp::Callback(Functor()), 0);
	setTimeout(cheerp::Callback([]()
	{
		assertEqual(callbackCount++, 2, "Calling back non-capturing lambdas");
	}), 0);
	int capturedInt=43;
	setTimeout(cheerp::Callback([capturedInt]()
	{
		assertEqual(capturedInt, 43, "Calling back capturing lambdas 1/2");
		assertEqual(callbackCount++, 3, "Calling back capturing lambdas 2/2");
		assertEqual(Functor::destructorCalled, 2, "Calling back functors 3/3");
	}), 0);
}
