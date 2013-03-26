#include "client.h"
#include "canvas.h"
#include "webgl.h"

using namespace client;

void loadCallback() [[client]]
{
	HTMLCanvasElement* canvas=document->getElementById<HTMLCanvasElement>("glcanvas");
	WebGLRenderingContext* gl=canvas->getContext<WebGLRenderingContext>("experimental-webgl");
	gl->clearColor(0,0,0,1);
	gl->clear(gl->get_COLOR_BUFFER_BIT());
}

int webMain() [[client]]
{
	document->addEventListener("DOMContentLoaded",Callback(loadCallback));
	return 0;
}
