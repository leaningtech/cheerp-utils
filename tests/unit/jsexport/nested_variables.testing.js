function onInstantiation(_)
{
	assert(3 == _.Module.nestedVariable, "JS: 3 == nestedVariable");
	assert(3 == _.Module.getNestedVariable(), "JS: 3 == getNestedVariable()");
	_.Module.nestedVariable = 4;
	assert(4 == _.Module.nestedVariable, "JS: 4 == nestedVariable");
	assert(4 == _.Module.getNestedVariable(), "JS: 4 == getNestedVariable()");
	_.Module.setNestedVariable(5);
	assert(5 == _.Module.nestedVariable, "JS: 5 == nestedVariable");
	assert(5 == _.Module.getNestedVariable(), "JS: 5 == getNestedVariable()");
}
function assert(condition, message)
{
	console.log(message, condition ? "SUCCESS" : "FAILURE");
}
function getPromise(_)
{
	return _.Module.getNestedVariable.promise;
}
function getExports()
{
	return {
		get Module() {
			return Module;
		}
	};
}
