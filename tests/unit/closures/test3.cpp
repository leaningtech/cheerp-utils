#include <cheerp/client.h>
#include <tests.h>

static int ConsCount = 0;
static int DestCount = 0;
static int CopyCount = 0;
static int MoveCount = 0;
struct A {
	int i;
	A(int i): i(i) {
		ConsCount++;
	}
	~A(){
		DestCount++;
	}
	A(const A& a): i(a.i) {
		CopyCount++;
	}
	A(A&& a): i(a.i) {
		MoveCount++;
	}
};

int foo(int a)
{
	return a+unitBlackBox(2*a);
}
int eventEmitter(client::EventListener* e)
{
	int res = reinterpret_cast<int(*)(int)>(e)(unitBlackBox(1));
	return res;
}
void webMain()
{
	A a(1);
	auto l = [a{std::move(a)}](int b)
	{
		return a.i+b;
	};

	client::EventListener* el = nullptr;
	{
		auto cb = cheerp::make_closure(std::move(l));
		el = cb;
		assertEqual(eventEmitter(el), 2, "Calling closures through EventListener 1/1");
	}
	assertEqual(DestCount, 0, "Escaping closure lifecycle 1/2");
	cheerp::freeCallback(el);
	assertEqual(DestCount, 1, "Escaping closure lifecycle 2/2");
}
