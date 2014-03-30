//===---------------------------------------------------------------------===//
//	Copyright 2013-2014 Leaning Technlogies
//===----------------------------------------------------------------------===//

#include <tests.h>

static const char str[]="testStr";

static const char* str2=str;

static const char* str3=str+2;

static char str4[] = "testStr3";

static char* str5[] = { str4 };

static char* str6[] = { &str4[3] };

void webMain()
{
	char a1=*str;
	char b1=str[0];
	char c1=str[3];
	assertEqual(a1, 't', "Access to global array 1/3");
	assertEqual(b1, 't', "Access to global array 2/3");
	assertEqual(c1, 't', "Access to global array 3/3");

	char a2=*str2;
	char b2=str2[0];
	char c2=str2[1];
	assertEqual(a2, 't', "Access to global array using pointer 1/3");
	assertEqual(b2, 't', "Access to global array using pointer 2/3");
	assertEqual(c2, 'e', "Access to global array using pointer 3/3");

	char a3=*str3;
	char b3=str3[0];
	char c3=str3[1];
	assertEqual(a3, 's', "Access to global array using pointer with offset 1/3");
	assertEqual(b3, 's', "Access to global array using pointer with offset 2/3");
	assertEqual(c3, 't', "Access to global array using pointer with offset 3/3");

	const char* str4 = str+2;
	char a4=*str4;
	char b4=str4[0];
	char c4=str4[1];
	assertEqual(a4, 's', "Access to global array using local pointer with offset 1/3");
	assertEqual(b4, 's', "Access to global array using local pointer with offset 2/3");
	assertEqual(c4, 't', "Access to global array using local pointer with offset 3/3");

	char** lstr6 = str5;
	char a5=*lstr6[0];
	char b5=lstr6[0][0];
	char c5=lstr6[0][1];
	assertEqual(a5, 't', "Access to global array using local pointer with offset 1/6");
	assertEqual(b5, 't', "Access to global array using local pointer with offset 2/6");
	assertEqual(c5, 'e', "Access to global array using local pointer with offset 3/6");

	char** lstr7 = str6;
	char a6=*lstr7[0];
	char b6=lstr7[0][0];
	char c6=lstr7[0][1];
	assertEqual(a6, 't', "Access to global array using local pointer with offset 4/6");
	assertEqual(b6, 't', "Access to global array using local pointer with offset 5/6");
	assertEqual(c6, 'S', "Access to global array using local pointer with offset 6/6");
}
