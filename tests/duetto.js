//Builtin and utility for duetto

function __duettoCreateBuiltin_ZN6client6StringC1EPKc(a)
{
	//The pointer is a const char*, so we expect
	//the referenced data to be convertible to String
	var ret = "";
	var buf=a.d;
	var len=a.d.length;
	for(var i=a.o;;i++)
	{
		if(buf[i]===0 || i==len)
			break;
		ret+=String.fromCharCode(buf[i]);
	}
	return ret;
}

function __duettoCreateBuiltin_ZN6client6StringC1Ei(a)
{
	return new String(a);
}

//Passthrough code to pass event handlers in a semi type safe manner
function SimpleCallback(func)
{
	return func;
}

function Callback(func, obj)
{
	return function(e) { func(obj, e); };
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

function handleVAArg(ptr)
{
	var ret=ptr.d[ptr.o];
	ptr.o++;
	return ret;
}

function createPointerArray(size)
{
	var ret=new Array(size);
	for(var __i__=0;__i__<size;__i__++)
		ret[__i__]={ d: null, o: 0};
	return ret;
}
