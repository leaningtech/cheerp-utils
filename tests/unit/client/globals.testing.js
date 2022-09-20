global.externValue = 100;
global.SomeClass = function(a)
{
	this.inner = a;
}
global.SomeClass.prototype.doTest=function (b){
        if (this.inner*-3 === b)
		console.log("doTest", "SUCCESS");
	else
		console.log("doTest", "FAILURE");
};
global.externPtr = new SomeClass(-41);
global.externInstance = new SomeClass(-11);

function onInstantiation(_) {
	if (externValue === 7)
		console.log("Module export", "SUCCESS");
	else
		console.log("Module export", "FAILURE");
}
