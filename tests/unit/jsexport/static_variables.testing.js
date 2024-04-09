function onInstantiation(_)
{
	assert(3 == _.Struct.staticVariable, "JS: 3 == staticVariable");
	assert(3 == _.Struct.getStaticVariable(), "JS: 3 == getStaticVariable()");
	_.Struct.staticVariable = 4;
	assert(4 == _.Struct.staticVariable, "JS: 4 == staticVariable");
	assert(4 == _.Struct.getStaticVariable(), "JS: 4 == getStaticVariable()");
	_.Struct.setStaticVariable(5);
	assert(5 == _.Struct.staticVariable, "JS: 5 == staticVariable");
	assert(5 == _.Struct.getStaticVariable(), "JS: 5 == getStaticVariable()");
}
function assert(condition, message)
{
	console.log(message, condition ? "SUCCESS" : "FAILURE");
}
function getPromise(_)
{
	return _.Struct.promise;
}
function getExports()
{
	return {
		get Struct() {
			return Struct;
		}
	};
}
