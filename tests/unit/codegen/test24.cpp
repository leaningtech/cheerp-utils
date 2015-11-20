//===---------------------------------------------------------------------===//
//	Copyright 2015 Leaning Technologies
//===---------------------------------------------------------------------===//

#include <tests.h>

void webMain()
{
	std::string buffer;
	int val = 100;
	int64_t d = 1;
	while (d <= val)
	    d *= 10;

	while (d > 10)
	{
	    d /= 10;
	    int x = val / d;
	    buffer.push_back('0'+x);
	    val -= x * d;
	}
	buffer.push_back('0' + val);
	
	assertEqual(buffer.c_str(), "100", "Converting 64-bit integers to string 1/2");

	char charBuffer[10];
	d = 100;
	sprintf(charBuffer,"%llu",d);
	assertEqual(strcmp(charBuffer, "100"), 0, "Converting 64-bit integers to string 2/2");
}
