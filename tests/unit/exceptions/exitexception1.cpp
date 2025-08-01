#include <tests.h>
#include <cheerp/client.h>

int main()
{
	cheerp::console_log("Start execution : SUCCESS");
	int i = unitBlackBox(1);
	try
	{
		if (i == 1)
			exit(0);
#ifndef __ASMJS__
	} catch(cheerp::JSException& e) {
		cheerp::console_log("JSException clause ignores exit-exception : FAILURE");
#endif
	} catch(...) {
		cheerp::console_log("Catch-all clause ignores exit-exception : FAILURE");
	}
	cheerp::console_log("Stop execution on exit : FAILURE");
}
