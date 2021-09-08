import module from './cheerp_pimpl_mod.mjs'
module({absPath:'./unit/jsexport/cheerp_pimpl_mod.wasm'}).then(_ => {
	var instance = new _.JSExportedWrapperWithDeleter(21);
	instance.insert(45);
	instance.insert(2134);
	instance.deleter();
	var X = instance.totalInserted();
	if (_.CounterAlive.numberAlive() == 0)
		console.log("JSExport deleter check 1/1", "SUCCESS");
	else
		console.log("JSExport deleter check 1/1", "FAILURE");
	})
