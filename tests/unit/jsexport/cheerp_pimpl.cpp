//===---------------------------------------------------------------------===//
//	Copyright 2020 Leaning Technlogies
//===----------------------------------------------------------------------===//

#include <tests.h>
#include <jsexport/cheerp_pimpl.h>
#include <vector>
#include <set>
#include <iostream>

//Initialize the counter from cheerp_pimpl.h
int CounterAlive::counter = 0;

//Arbitrary class with no limitation of sort (non-trivial destructor here)
class ArbitraryClass
{
public:
        ArbitraryClass(int N)
        {
		for (int i=0; i<N; i++)
		{
			insert(i);
			insert(i);
		}
        }
        void insert(int N)
        {
                //Insert N both in the set and the vector
                V.push_back(N);
                S.insert(N);
        }
        int totalInserted() const
        {
                return V.size();
        }
        int uniqueInserted() const
        {
                return S.size();
        }
        ~ArbitraryClass()
        {
		assertEqual(totalInserted() >= uniqueInserted(), true, "JSExport non-trivial destructor 1/1");
        }

private:
        std::vector<int> V;
        std::set<int> S;
};


//JSExported wrapper, all relevant function have to be redeclared and have them call the relevant function on the implementation
class [[cheerp::jsexport]][[cheerp::genericjs]] JSExportedWrapperWithDeleter
{
        cheerp_pimpl::pimpl_with_deleter<ArbitraryClass> m;
public:
        JSExportedWrapperWithDeleter(int N) : m(N)
					//Initialize ArbitraryClass with the value N
        {
        }
        void insert(int N)
        {
                m->insert(N);
        }
//      ~JSExportedWrapperWithDeleter()  //We can't have the destructor... for now we are forced to declare a deleter
        void deleter()
        {
                m.deleter();
        }
};


//Use of ArbitraryClass from C++ code
void invokeCpp()
{
        ArbitraryClass W(21);
        W.insert(45);
        W.insert(2134);
        //W destructor called automatically...
}

//Use of JSExportedWrapperWithDeleter of ArbitraryClass from JavaScript code
[[cheerp::genericjs]]
void invokeJavaScript()
{
        //__asm__ is a way of directing calling JavaScript arbitrary code, but in principle similar code should be on the user side
        __asm__("\
                var instance = new JSExportedWrapperWithDeleter(21);\
                instance.insert(45);\
                instance.insert(2134);\
                instance.deleter();\
                ");
                //In JS we MUST call the deleter
}

int main()
{
        invokeCpp();
        invokeJavaScript();
	assertEqual(CounterAlive::numberAlive(), 0, "JSExport deleter check 1/1");
        // You might be willing to create some objects and leave them alive, but be conscious with memory leaks
        return 0;
}
