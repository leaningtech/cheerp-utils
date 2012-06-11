//Builtin and utility for duetto

function _DOMString_duettoCreateBuiltin(a)
{
	//This depends on emscripten implementation
	var ret = new String();
	for(;HEAP8[a]!=0;a++)
		ret += String.fromCharCode(HEAP8[a]);
	return ret;
}
