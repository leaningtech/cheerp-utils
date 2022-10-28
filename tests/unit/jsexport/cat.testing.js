function onInstantiation(_)
{
	var instance = new _.Cat("2");
	console.log(instance.i0());
	instance.delete();
}
function getPromise(_)
{
	return _.Cat.promise;
}
function getExports()
{
	return {Cat : Cat};
}
