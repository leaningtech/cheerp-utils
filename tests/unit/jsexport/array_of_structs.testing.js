function onInstantiation(_)
{
	var instance = new _.OrderedStruct();
	var res = _.getSmaller(instance,instance);
	var condition = (instance.doComputation(12) == res.doComputation(12));
	console.log("Custom has no next 1/1", condition?"SUCCESS":"FAILURE");
	instance.delete();
}
function getPromise(_)
{
	return _.OrderedStruct.promise;
}
function getExports()
{
	return {
		get OrderedStruct() {
			return OrderedStruct;
		},
		get getSmaller() {
			return getSmaller;
		}
	};
}
function onError(err)
{
	console.log("unexpected exit : FAILURE");
	throw err;
}
