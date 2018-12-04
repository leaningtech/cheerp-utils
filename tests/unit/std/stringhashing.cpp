//===---------------------------------------------------------------------===//
//	Copyright 2016 Leaning Technlogies
//===----------------------------------------------------------------------===//

#include <tests.h>
#include <string>
#include <unordered_set>

void testUnorderedSetOfString()
{
	std::unordered_set<std::string> a;
	assertEqual(a.size(), 0u, "std::set<std::string> 1/4");
	a.insert("1");
	assertEqual(a.size(), 1u, "std::set<std::string> 2/4");
	a.insert("10");
	a.insert("99");
	a.insert("100");
	a.insert("100");
	a.insert("-2");
	assertEqual(a.size(), 5u, "std::set<std::string> 3/4");
	const char* expected[] = {"-2", "99", "100", "10", "1"};
	std::unordered_set<std::string>::iterator it = a.begin();
	bool correctOrder = true;
	for(int i=0;i<a.size();i++)
	{
		if(*it != expected[i])
			correctOrder = false;
		++it;
	}
	assertEqual(correctOrder, true, "std::set<std::string> ordering 4/4");
}

void testUnorderedSetOfWString()
{
	std::unordered_set<std::wstring> a;
	assertEqual(a.size(), 0u, "std::set<std::wstring> 1/4");
	a.insert(L"1");
	assertEqual(a.size(), 1u, "std::set<std::wstring> 2/4");
	a.insert(L"10");
	a.insert(L"99");
	a.insert(L"100");
	a.insert(L"100");
	a.insert(L"-2");
	assertEqual(a.size(), 5u, "std::set<std::wstring> 3/4");
	const wchar_t* expected[] = {L"100", L"-2", L"99", L"10", L"1"};
	std::unordered_set<std::wstring>::iterator it = a.begin();
	bool correctOrder = true;
	for(int i=0;i<a.size();i++)
	{
		if(*it != expected[i])
			correctOrder = false;
		++it;
	}
	assertEqual(correctOrder, true, "std::set<std::wstring> ordering 4/4");
}

void webMain()
{
	testUnorderedSetOfString();
	testUnorderedSetOfWString();
}
