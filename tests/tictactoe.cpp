#include "client.h"
#include "server.h"
#include "canvas.h"

#include <iostream>
#include <vector>

using namespace client;

//TODO: enforce access only on server code
struct GameState
{
	bool state[9];
};

static GameState gameState;

inline int serverTest() [[server]]
{
//	return "String created on the server";
	std::cerr << "SERVER SIDE" << std::endl;
	return 42;
}

void handleEvent(Event* e)
{
}

void clientTest() [[client]]
{
	Document* d=Client::get_document();
	Element* e=d->getElementById("canvas");
	//TODO: support dynamic_cast
	HTMLCanvasElement* canvas=static_cast<HTMLCanvasElement*>(e);
	CanvasRenderingContext2D* ctx=static_cast<CanvasRenderingContext2D*>(canvas->getContext("2d"));
	for(int i=1;i<3;i++)
	{
		ctx->moveTo(i*200,0);
		ctx->lineTo(i*200,600);
	}
	for(int i=1;i<3;i++)
	{
		ctx->moveTo(0,i*200);
		ctx->lineTo(600,i*200);
	}
	ctx->stroke();

	canvas->addEventListener("click",Callback(handleEvent));
}

void webMain() [[client]]
{
//	serverTest();
}

inline void resetGame() [[server]]
{
	for(int i=0;i<9;i++)
		gameState.state[i]=false;
}

void serverMain() [[server]]
{
	std::cerr << "Initializing game" << std::endl;
	resetGame();
}
