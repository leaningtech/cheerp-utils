//Builtin and utility for duetto

function __duettoCreateBuiltin_ZN6client6StringC1EPKc(a)
{
	//This depends on emscripten implementation
	var ret = new String();
	for(;HEAP8[a]!=0;a++)
		ret += String.fromCharCode(HEAP8[a]);
	return ret;
}

function __duettoCreateBuiltin_ZN6client6StringC1Ei(a)
{
	return new String(a);
}

//Passthrough code to pass event handlers in a semi type safe manner
function __duettoCreateBuiltin_ZN6client8CallbackC1EPFvvE(f)
{
	var ret=FUNCTION_TABLE[f];
	return ret;
}

//Conversion operator from generic object to Number/double
function __ZNK6ObjectcvdEv(a)
{
	return (a - 0);
}

//Operator [] for array objects
function __ZN6client5ArrayixEi(a,i)
{
	return a[i];
}
