function onInstantiation(_)
{
	assert(3 == _.globalVariable, "JS: 3 == globalVariable");
	assert(3 == _.getGlobalVariable(), "JS: 3 == getGlobalVariable()");
	_.globalVariable = 4;
	assert(4 == _.globalVariable, "JS: 4 == globalVariable");
	assert(4 == _.getGlobalVariable(), "JS: 4 == getGlobalVariable()");
	_.setGlobalVariable(5);
	assert(5 == _.globalVariable, "JS: 5 == globalVariable");
	assert(5 == _.getGlobalVariable(), "JS: 5 == getGlobalVariable()");
}
function assert(condition, message)
{
	console.log(message, condition ? "SUCCESS" : "FAILURE");
}
function getPromise(_)
{
	return _.getGlobalVariable.promise;
}
function getExports()
{
	return {};
}
function onError(err)
{
	console.log("unexpected exit : FAILURE");
	throw err;
}
