function onInstantiation(_)
{
	var result = _.doCalculation(5);
	var condition = result == 25;
	console.log("Module returned after thread setup :", condition ? "SUCCESS" : "FAILURE");
}
function getPromise(_)
{
	return _.doCalculation.promise;
}
function getExports()
{
	return {
		get doCalculation() {
			return doCalculation;
		},
	};
}
function onError(err)
{
	console.log("unexpected exit : FAILURE");
	throw err;
}
