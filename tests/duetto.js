//Builtin and utility for duetto

function __duettoCreateBuiltin_ZN6client6StringC1EPKc(a)
{
	//The pointer is a const char*, so we expect
	//the referenced data to be a String
	return a.d.substr(a.o);
}

function __duettoCreateBuiltin_ZN6client6StringC1Ei(a)
{
	return new String(a);
}

//Passthrough code to pass event handlers in a semi type safe manner
function __duettoCreateBuiltin_ZN6client8CallbackC1EPFvvE(f)
{
	return f;
}

//Conversion operator from generic object to Number/double
function __ZNK6client6ObjectcvdEv(a)
{
	return (a - 0);
}

//Operator [] for array objects
function __ZN6client5ArrayixEi(a,i)
{
	return a[i];
}
