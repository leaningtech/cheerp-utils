function _compatRequestAnimationFrame(callback)
{
	//Ripped from https://developer.mozilla.org/en-US/docs/Web/API/window.requestAnimationFrame
	var requestAnimationFrame = window.requestAnimationFrame || window.mozRequestAnimationFrame ||
		window.webkitRequestAnimationFrame || window.msRequestAnimationFrame;
	requestAnimationFrame(callback);
}
