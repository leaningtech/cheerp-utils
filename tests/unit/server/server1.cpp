#ifdef __CHEERP_CLIENT__
#include <cheerp/client.h>
#else
#include "server.h"
#endif

#include <string>

#ifdef __CHEERP_CLIENT__
using namespace client;
#endif

int serverTest(int i, float f) [[cheerp::server]]
{
	return f * 10 + i;
}

int serverTest(int i, int i2) [[cheerp::server]]
{
	return i-i2;
}

void webMain() [[cheerp::client]]
{
	const std::string str("CreateTest");
	int serverVal = serverTest(10, 0.2f);
	console.log(str.c_str(), serverVal);
}
