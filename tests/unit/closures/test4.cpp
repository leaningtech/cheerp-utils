#include <cheerp/client.h>
#include <functional>
#include <tests.h>
#include <functional>

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
	int operator()(int b)
	{
		return i+b;
	}
};

[[cheerp::genericjs]]
int eventEmitter(client::EventListener* e)
{
	int res = reinterpret_cast<int(*)(int)>(e)(unitBlackBox(1));
	return res;
}
[[cheerp::genericjs]]
void webMain()
{
	A a(1);
	client::EventListener* el = nullptr;
	{
		el = cheerp::Callback(a);
		assertEqual(eventEmitter(el), 2, "Calling functor through EventListener 1/1");
		el = cheerp::Callback(std::function<int(int)>(std::move(a)));
		assertEqual(eventEmitter(el), 2, "Calling std::function through EventListener 1/1");
	}
	assertEqual(DestCount, 1, "Escaping std::function lifecycle 1/2");
	cheerp::freeCallback(el);
	assertEqual(DestCount, 2, "Escaping std::function lifecycle 2/2");
}
