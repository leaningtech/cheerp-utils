//===---------------------------------------------------------------------===//
//	Copyright 2015 Leaning Technologies
//===---------------------------------------------------------------------===//

#include <tests.h>

void webMain()
{
	std::string buffer;
	int val = 100;
	uint64_t d = 1;
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
	
	assertEqual(buffer.c_str(), "100", "Converting 64-bit integers to string 1/6");

	char charBuffer[32];
	d = 100;
	sprintf(charBuffer,"%llu",d);
	assertEqual(strcmp(charBuffer, "100"), 0, "Converting 64-bit integers to string 2/6");
	d = 0xffffffffLL;
	sprintf(charBuffer,"%llu",d);
	assertEqual(strcmp(charBuffer, "4294967295"), 0, "Converting 64-bit integers to string 3/6");
	sprintf(charBuffer,"%lli",d);
	assertEqual(strcmp(charBuffer, "4294967295"), 0, "Converting 64-bit integers to string 4/6");
	d = 0xffffffffffffffffLL;
	sprintf(charBuffer,"%llu",d);
	assertEqual(strcmp(charBuffer, "18446744073709551615"), 0, "Converting 64-bit integers to string 5/6");
	sprintf(charBuffer,"%lli",d);
	assertEqual(strcmp(charBuffer, "-1"), 0, "Converting 64-bit integers to string 6/6");

	sscanf("100", "%llu", &d);
	assertEqual<uint64_t>(d, 100LL, "Converting string to 64-bit integers 1/");
	sscanf("4294967295", "%llu", &d);
	assertEqual<uint64_t>(d, 4294967295LL, "Converting string to 64-bit integers 2/");
	sscanf("4294967295", "%lli", &d);
	assertEqual<uint64_t>(d, 4294967295LL, "Converting string to 64-bit integers 3/");
	sscanf("18446744073709551615", "%llu", &d);
	assertEqual<uint64_t>(d, 0xffffffffffffffffLL, "Converting string to 64-bit integers 4/");
	sscanf("-1", "%lli", &d);
	assertEqual<uint64_t>(d, 0xffffffffffffffffLL, "Converting string to 64-bit integers 5/");
}
