function onInstantiation() {
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
	console.log("unexpected exit : FAILURE");
	throw err;
}
