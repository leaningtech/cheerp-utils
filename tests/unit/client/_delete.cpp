#include <tests.h>

namespace [[cheerp::genericjs]] client
{
	class [[cheerp::client_layout]] ToBeDeleted
	{
	public:
		ToBeDeleted(int a);
		[[cheerp::interface_name(("delete"))]] void _delete();
		[[cheerp::interface_name(("catch"))]] int _catch();
	};
	int counterAlive();
	template <class T>
	[[cheerp::interface_name(("assert"))]]
	void _assert(T& someObject);
}

[[cheerp::genericjs]]
int main()
{
	assertEqual(client::counterAlive(), 0, "Check counter 1/3");

	client::ToBeDeleted* TBD = new client::ToBeDeleted(123);
	client::_assert<client::ToBeDeleted>(*TBD);
	assertEqual(client::counterAlive(), 1, "Check counter 2/3");
	assertEqual(TBD->_catch(), 123, "Call actual catch");
	
	TBD -> _delete();

	assertEqual(client::counterAlive(), 0, "Check counter 3/3");
}
