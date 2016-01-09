#ifdef __CHEERP_CLIENT__
#include <cheerp/client.h>
#include <cheerp/clientlib.h>
#endif
#ifdef __CHEERP_SERVER__
#include <cheerp/server.h>
#endif

#include <iostream>

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

struct gameAnswer
{
	int x;
	int y;
	bool valid;
	gameAnswer(int _x, int _y,bool v):x(_x),y(_y),valid(v){}
#ifdef __CHEERP_SERVER__
	void serialize(cheerp::SerializationInterface* outData) const
	{
		outData->write("[",1);
		cheerp::serialize<int>(outData,x);
		outData->write(",",1);
		cheerp::serialize<int>(outData,y);
		outData->write(",",1);
		cheerp::serialize<bool>(outData,valid);
		outData->write("]",1);
	}
#endif
#ifdef __CHEERP_CLIENT__
	static gameAnswer deserialize(const client::String& s) [[cheerp::client]]
	{
		client::Array* a=static_cast<client::Array*>(client::JSON.parse(s));
		gameAnswer ret(*(*a)[0],*(*a)[1],*(*a)[2]);
		return ret;
	}
#endif
};

/*
 * The returned struct tells the client if the click is valid and if so
 * what's the server answer to the move
 */
gameAnswer notifyClick(int x, int y) [[cheerp::server]]
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

#ifdef __CHEERP_CLIENT__
void handleEvent(client::MouseEvent* e) [[cheerp::client]]
{
	client::Document* d=&client::document;
	client::HTMLElement* elem=(client::HTMLElement*)d->getElementById("canvas");
	int relX=-1;
	int relY=-1;
	if(!client::isNaN(e->get_offsetX()))
	{
		relX += e->get_offsetX();
		relY += e->get_offsetY();
	}
	else if(!client::isNaN(e->get_layerX()))
	{
		relX = e->get_layerX()-elem->get_offsetLeft();
		relY = e->get_layerY()-elem->get_offsetTop();
	}
	int gameX = relX / 200;
	int gameY = relY / 200;
	const gameAnswer& a=notifyClick(gameX,gameY);
	if(a.valid)
	{
		client::HTMLCanvasElement* canvas=static_cast<client::HTMLCanvasElement*>(elem);
		client::CanvasRenderingContext2D* ctx=static_cast<client::CanvasRenderingContext2D*>(canvas->getContext("2d"));
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
#endif

int getClickCount() [[cheerp::server]]
{
	static int clickCount = 0;
	clickCount++;
	return clickCount;
}

#ifdef __CHEERP_CLIENT__
void handleRightClick(client::MouseEvent* e) [[cheerp::client]]
{
	client::Document* d=&client::document;
	client::Element* elem = d->getElementById("clickcount");
	elem->set_textContent(getClickCount());
	e->preventDefault();
}
#endif

void clientTest() [[cheerp::client]]
{
	client::Document* d=&client::document;
	client::Element* e=d->getElementById("canvas");
	client::HTMLCanvasElement* canvas=static_cast<client::HTMLCanvasElement*>(e);
	client::CanvasRenderingContext2D* ctx=static_cast<client::CanvasRenderingContext2D*>(canvas->getContext("2d"));
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

	canvas->addEventListener("click",cheerp::Callback(handleEvent));
	canvas->addEventListener("contextmenu",cheerp::Callback(handleRightClick));
}

inline void resetGame() [[cheerp::server]]
{
	for(int i=0;i<9;i++)
		gameState.state[i]=false;
}

void webMain() [[cheerp::client]]
{
	resetGame();
	client::document.addEventListener("DOMContentLoaded",cheerp::Callback(clientTest));
}
