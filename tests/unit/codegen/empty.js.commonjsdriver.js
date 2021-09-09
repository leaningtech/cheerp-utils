require('./empty.js').then(_ => {
	if (Object.keys(_).length === 0)
		console.log("Empty module export", "SUCCESS");
	else
		console.log("Empty module export", "FAILURE");
	})
