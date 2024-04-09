function onInstantiation(_)
{
	assert(3 == _.getInstance().memberVariable, "JS: 3 == memberVariable");
	assert(3 == _.getInstance().getMemberVariable(), "JS: 3 == getMemberVariable()");
	_.getInstance().memberVariable = 4;
	assert(4 == _.getInstance().memberVariable, "JS: 4 == memberVariable");
	assert(4 == _.getInstance().getMemberVariable(), "JS: 4 == getMemberVariable()");
	_.getInstance().setMemberVariable(5);
	assert(5 == _.getInstance().memberVariable, "JS: 5 == memberVariable");
	assert(5 == _.getInstance().getMemberVariable(), "JS: 5 == getMemberVariable()");
}
function assert(condition, message)
{
	console.log(message, condition ? "SUCCESS" : "FAILURE");
}
function getPromise(_)
{
	return _.getInstance.promise;
}
function getExports()
{
	return {
		get getInstance() {
			return getInstance;
		}
	};
}
