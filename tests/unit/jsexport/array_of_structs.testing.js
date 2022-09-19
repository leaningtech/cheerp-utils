function onInstantiation(_)
{
	var instance = new _.OrderedStruct();
	var res = _.getSmaller(instance,instance);
	var condition = (instance.doComputation(12) == res.doComputation(12));
	console.log("Custom has no next 1/1", condition?"SUCCESS":"FAILURE");
}
