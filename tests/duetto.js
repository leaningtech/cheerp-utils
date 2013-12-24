//Builtin and utility for duetto

//Conversion operator from generic object to Number/double
function __ZNK6client6ObjectcvdEv(a)
{
	return (a - 0);
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
