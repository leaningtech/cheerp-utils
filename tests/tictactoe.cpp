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
	bool get(int x, int y) const
	{
		return state[y*3+x];
	}
	void set(int x,int y)
	{
		state[y*3+x]=true;
	}
	void getFirstEmpty(int& x, int& y)
	{
		for(int i=0;i<9;i++)
		{
			if(state[i]==false)
			{
				x = i % 3;
				y = i / 3;
				return;
			}
		}

		x = -1;
		y = -1;
	}
};

static GameState gameState;

inline int serverTest() [[server]]
{
//	return "String created on the server";
	std::cerr << "SERVER SIDE" << std::endl;
	return 42;
}

struct gameAnswer
{
	int x;
	int y;
	bool valid;
	//HACK: emscripten fails badly when working on small structs. Pad them for now
	int pad1;
	int pad2;
	gameAnswer(int _x, int _y,bool v):x(_x),y(_y),valid(v){}
	int serialize(char* outData) const
	{
		outData[0]='[';
		int ret=1;
		ret+=server::serialize(outData+ret,x);
		outData[ret]=',';
		ret++;
		ret+=server::serialize(outData+ret,y);
		outData[ret]=',';
		ret++;
		ret+=server::serialize(outData+ret,valid);
		outData[ret]=']';
		outData[ret+1]='\0';
		ret+=2;
		return ret;
	}
	static gameAnswer deserialize(const String& s) [[client]]
	{
		Array* a=static_cast<Array*>(Client::get_JSON()->parse(s));
		gameAnswer ret(*(*a)[0],*(*a)[1],*(*a)[2]);
		return ret;
	}
};

/*
 * The returned struct tells the client if the click is valid and if so
 * what's the server answer to the move
 */
gameAnswer notifyClick(int x, int y) [[server]]
{
	if(x < 0 || x > 2 || y < 0 || y > 2)
		return gameAnswer(0,0,false);

	if(gameState.get(x,y)) //Already set
		return gameAnswer(0,0,false);

	gameState.set(x,y);

	int retX;
	int retY;
	gameState.getFirstEmpty(retX,retY);
	gameState.set(retX,retY);
	return gameAnswer(retX,retY,true);
}

void handleEvent(MouseEvent* e) [[client]]
{
	Document* d=Client::get_document();
	Element* elem=d->getElementById("canvas");
	int relX = e->get_clientX() - elem->get_offsetLeft();
	int relY = e->get_clientY() - elem->get_offsetTop();
	int gameX = relX / 200;
	int gameY = relY / 200;
	const gameAnswer& a=notifyClick(gameX,gameY);
	if(a.valid)
	{
		HTMLCanvasElement* canvas=static_cast<HTMLCanvasElement*>(elem);
		CanvasRenderingContext2D* ctx=static_cast<CanvasRenderingContext2D*>(canvas->getContext("2d"));
		ctx->moveTo(gameX*200+10,gameY*200+10);
		ctx->lineTo(gameX*200+190,gameY*200+190);
		ctx->moveTo(gameX*200+10,gameY*200+190);
		ctx->lineTo(gameX*200+190,gameY*200+10);
		ctx->stroke();
		ctx->beginPath();
		ctx->arc(a.x*200+100,a.y*200+100,90,0,6.28);
		ctx->stroke();
	}
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
