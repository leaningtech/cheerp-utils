import module from './_delete.mjs'
global.counter = 0;
global.externValue = 100;
global.ToBeDeleted = function(a)
{
	this.a = a;
	counter++;
}
global.ToBeDeleted.prototype.catch=function (){
	return this.a;
};
global.ToBeDeleted.prototype.delete=function (){
	counter--;
};
global.counterAlive=function(){
	return counter;
};
global.assert=function(obj){
	if (obj.catch() == obj.a)
		console.log("Assert", "SUCCESS");
	else
		console.log("Assert", "FAILURE");
};

module({}).then(_ => {
	if (counter === 0)
		console.log("Module export", "SUCCESS");
	else
		console.log("Module export", "FAILURE");
	})
