var env=[];
var argv=["argv.cpp"];

function onInstantiation(_) {
}
function onError(err)
{
	console.log("unexpected exit : FAILURE");
	throw err;
}
