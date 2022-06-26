//===---------------------------------------------------------------------===//
//	Copyright 2014-2022 Leaning Technologies
//===----------------------------------------------------------------------===//

#include <cheerp/client.h>
#include <cheerp/clientlib.h>
#include <set>
#include "tests.h"

int callbackCount=0;
std::set<int> calledBack;


void plainFunction()
{
	assertEqual<bool>(calledBack.insert(callbackCount++).second, 1, "Calling back plain functions");
}

class Functor
{
private:
	int data;
	client::EventListener** e;
public:
	static int destructorCalled;
	Functor(client::EventListener** e):data(42), e(e)
	{
	}
	~Functor()
	{
		destructorCalled++;
	}
	void operator()()
	{
		assertEqual(data, 42, "Calling back functors 1/3");
		assertEqual<bool>(calledBack.insert(callbackCount++).second, 1, "Calling back functors 2/3");
		cheerp::freeCallback(*e);
	}
};

int Functor::destructorCalled=0;

void webMain()
{
	// Test various ways of passing callbacks to JavaScript code
	setTimeout(cheerp::Callback(plainFunction), 0);
	client::EventListener** c = new client::EventListener*[1];
	*c = cheerp::Callback(Functor(c));
	setTimeout(*c, 0);
	setTimeout(cheerp::Callback([]()
	{
		assertEqual<bool>(calledBack.insert(callbackCount++).second, 1, "Calling back non-capturing lambdas");
	}), 0);
	int capturedInt=43;
	setTimeout(cheerp::Callback([capturedInt]()
	{
		assertEqual(capturedInt, 43, "Calling back capturing lambdas 1/2");
		assertEqual<bool>(calledBack.insert(callbackCount++).second, 1, "Calling back capturing lambdas 2/2");
		assertEqual(Functor::destructorCalled | 3, 3, "Calling back functors 3/3");
	}), 0);
}
