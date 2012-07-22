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

//Conversion operator from generic object to Number/double
function __ZNK6ObjectcvdEv(a)
{
	return (a - 0);
}
