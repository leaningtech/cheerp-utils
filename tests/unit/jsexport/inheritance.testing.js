function onInstantiation(_)
{
	let base = new _.Base();
	let derived = new _.Derived();

	assert(base.memberBaseTest(), "base memberBaseTest");
	assert(!base.memberShadowTest(), "base memberShadowTest");
	assert(!base.virtualTest(), "base virtualTest");
	assert(!base.pureVirtualTest(), "base pureVirtualTest");

	assert(derived.memberBaseTest(), "derived memberMemberTest");
	assert(derived.memberDerivedTest(), "derived memberDerivedTest");
	assert(derived.memberShadowTest(), "derived memberShadowTest");
	assert(derived.virtualTest(), "derived virtualTest");
	assert(derived.pureVirtualTest(), "derived pureVirtualTest");

	assert(_.Base.staticBaseTest(), "base staticMemberTest");
	assert(!_.Base.staticShadowTest(), "base staticMemberTest");

	assert(_.Derived.staticDerivedTest(), "derived staticDerivedTest");
	assert(_.Derived.staticShadowTest(), "derived staticShadowTest");

	assert(!(base instanceof _.Derived), "!(base instanceof Derived)");
	assert(derived instanceof _.Base, "derived instanceof Base");

	base.delete();
	derived.delete();
}
function assert(condition, message)
{
	console.log(message, condition ? "SUCCESS" : "FAILURE");
}
function getPromise(_)
{
	return _.Base.promise;
}
function getExports()
{
	return {
		get Base() {
			return Base;
		},
		get Derived() {
			return Derived;
		}
	};
}
function onError(err)
{
	console.log("unexpected exit : FAILURE");
	throw err;
}
