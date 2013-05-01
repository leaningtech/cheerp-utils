#include <duetto/client.h>
#include <duetto/clientlib.h>
#include <duetto/webgl.h>

using namespace client;

void loadCallback() [[client]]
{
	auto canvas=static_cast<HTMLCanvasElement*>(document->getElementById("glcanvas"));
	auto gl=reinterpret_cast<WebGLRenderingContext*>(canvas->getContext("experimental-webgl"));
	gl->clearColor(0,0,0,1);
	gl->clear(gl->get_COLOR_BUFFER_BIT());
}

int webMain() [[client]]
{
	document->addEventListener("DOMContentLoaded",Callback(loadCallback));
	return 0;
}
