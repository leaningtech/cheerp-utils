function onInstantiation(_)
{
	var instance = new _.JSExportedWrapperWithDeleter(21);
	instance.insert(45);
	instance.insert(2134);
	instance.deleter();
	var X = instance.totalInserted();
	if (_.CounterAlive.numberAlive() == 0)
	       console.log("JSExport deleter check 1/1", "SUCCESS");
	else
	       console.log("JSExport deleter check 1/1", "FAILURE");
}
