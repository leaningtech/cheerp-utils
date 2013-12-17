//Builtin and utility for duetto

//Passthrough code to pass event handlers in a semi type safe manner
function __Z14SimpleCallbackPFvvE(func)
{
	return func;
}

function __Z8CallbackPFvvEPv(func, obj)
{
	return function(e) { func(obj, e); };
}

//Conversion operator from generic object to Number/double
function __ZNK6client6ObjectcvdEv(a)
{
	return (a - 0);
}

//Helper to convert a pointer to an ArrayBufferView
//it is supposed to only work for numerical arrays
function __Z16BufferForPointerPKv(ptr)
{
	if(ptr.o == 0)
		return ptr.d;
	else
		return ptr.d.subarray(ptr.o);
}

// NOTE: size must be in bytes
function __Z16BufferForPointerPKvj(ptr, size)
{
	return ptr.d.subarray(ptr.o, size/ptr.d.BYTES_PER_ELEMENT);
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
