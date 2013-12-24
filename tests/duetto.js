//Builtin and utility for duetto

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
