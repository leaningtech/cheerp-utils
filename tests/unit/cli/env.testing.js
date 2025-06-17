var env=["TEST=1"];
var argv=[];

function onInstantiation(_) {
}
function onError(err)
{
	console.log("unexpected exit : FAILURE");
	throw err;
}
