function onInstantiation(_)
{
	assert(!canConstruct(_.Empty), "new Empty()");
	assert(!canConstruct(_.AllPrivate), "new AllPrivate()");
	assert(!canConstruct(_.OnlyStatic), "new OnlyStatic()");
}
function canConstruct(Class)
{
	let instance;

	try {
		instance = new Class();
	} catch (_) {
		return false;
	}

	instance.delete();
	return true;
}
function assert(condition, message)
{
	console.log(message, condition ? "SUCCESS" : "FAILURE");
}
function getPromise(_)
{
	return _.Empty.promise;
}
function getExports()
{
	return {
		get Empty() {
			return Empty;
		},
		get AllPrivate() {
			return AllPrivate;
		},
		get OnlyStatic() {
			return OnlyStatic;
		}
	};
}
function onError(err)
{
	console.log("unexpected exit : FAILURE");
	throw err;
}
