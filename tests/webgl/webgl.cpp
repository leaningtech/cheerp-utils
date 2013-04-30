#include <utility>
#include <duetto/client.h>
#include <duetto/canvas.h>
#include <duetto/webgl.h>

using namespace client;

void loadCallback() [[client]]
{
	auto canvas=document->getElementById<HTMLCanvasElement>("glcanvas");
	auto gl=canvas->getContext<WebGLRenderingContext>("experimental-webgl");
	gl->clearColor(0,0,0,1);
	gl->clear(gl->get_COLOR_BUFFER_BIT());
}

int webMain() [[client]]
{
	document->addEventListener("DOMContentLoaded",Callback(loadCallback));
	return 0;
}
