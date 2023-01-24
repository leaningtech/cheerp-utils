function onInstantiation(_)
{
	global.jsFunc = function(p)
	{
		console.log("Access jsexported object in js callback 1/1", p.getI()==1?"SUCCESS":"FAILURE");
		return p;
	};
	var b = _.Bar.create();
	var f = b.getFoo(1);
	console.log("Compare jsexported pointers 1/2", f.cmp(b)?"SUCCESS":"FAILURE");
	console.log("Compare jsexported pointers 2/2", b.cmp(f)?"SUCCESS":"FAILURE");
}
function getPromise(_)
{
	return _.Bar.promise;
}
function getExports()
{
	return {
		get Bar() {
			return Bar;
		}
	};
}
