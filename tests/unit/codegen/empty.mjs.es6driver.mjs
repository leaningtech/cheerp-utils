import module from './empty.mjs'
module({absPath:'./unit/codegen/empty.wasm'}).then(_ => {
	if (Object.keys(_).length === 0)
		console.log("Empty module export", "SUCCESS");
	else
		console.log("Empty module export", "FAILURE");
	})
