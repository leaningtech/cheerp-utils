global.someFunc = function()
{
	return false;
}

function onInstantiation(_)
{
	if (_.someValue(255) < 255)
		console.log("Module export", "SUCCESS");
	else
		console.log("Module export", "FAILURE");
}
