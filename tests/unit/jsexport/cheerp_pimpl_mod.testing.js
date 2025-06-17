function onInstantiation(_)
{
	var instance = new _.JSExportedWrapperWithDeleter(21);
	instance.insert(45);
	instance.insert(2134);
	var X = instance.totalInserted();
	instance.deleter();
	if (_.CounterAlive.numberAlive() == 0)
	       console.log("JSExport deleter check 1/1", "SUCCESS");
	else
	       console.log("JSExport deleter check 1/1", "FAILURE");
	instance.delete();
}
function getPromise(_)
{
	return _.JSExportedWrapperWithDeleter.promise;
}
function getExports()
{
	return {
		get JSExportedWrapperWithDeleter() {
			return JSExportedWrapperWithDeleter;
		},
		get CounterAlive() {
			return CounterAlive;
		}
	};
}
function onError(err)
{
	console.log("unexpected exit : FAILURE");
	throw err;
}
