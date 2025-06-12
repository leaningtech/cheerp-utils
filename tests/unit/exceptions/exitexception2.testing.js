function onInstantiation() {
	console.log("Exit exception with code 1 reported : FAILURE");
}
function getPromise(_)
{
	return Promise.resolve();
}
function getExports()
{
	return {};
}
function onError(err)
{
	console.log("Exit exception with code 1 reported : SUCCESS");
}
