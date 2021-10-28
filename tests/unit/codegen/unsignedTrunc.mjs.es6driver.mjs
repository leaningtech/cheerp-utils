import module from './unsignedTrunc.mjs'
global.someFunc = function()
{
	return false;
}

module({}).then(_ => {
	if (_.someValue(255) < 255)
		console.log("Module export", "SUCCESS");
	else
		console.log("Module export", "FAILURE");
	})
