#ifdef __DUETTO_CLIENT__
#include <duetto/client.h>
#include <duetto/clientlib.h>
#endif
#ifdef __DUETTO_SERVER__
#include <duetto/server.h>
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
#ifdef __DUETTO_SERVER__
	void serialize(duetto::SerializationInterface* outData) const
	{
		outData->write("[",1);
		duetto::serialize<int>::run(outData,x);
		outData->write(",",1);
		duetto::serialize<int>::run(outData,y);
		outData->write(",",1);
		duetto::serialize<bool>::run(outData,valid);
		outData->write("]",1);
	}
#endif
#ifdef __DUETTO_CLIENT__
	static gameAnswer deserialize(const client::String& s) [[client]]
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

#ifdef __DUETTO_CLIENT__
void handleEvent(client::MouseEvent* e) [[client]]
{
	client::Document* d=&client::document;
	client::HTMLElement* elem=(client::HTMLElement*)d->getElementById("canvas");
	int relX = e->get_offsetX();
	int relY = e->get_offsetY();
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

int getClickCount() [[server]]
{
	static int clickCount = 0;
	clickCount++;
	return clickCount;
}

#ifdef __DUETTO_CLIENT__
void handleRightClick(client::MouseEvent* e) [[client]]
{
	client::Document* d=&client::document;
	client::Element* elem = d->getElementById("clickcount");
	elem->set_textContent(getClickCount());
	e->preventDefault();
}
#endif

void clientTest() [[client]]
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

	canvas->addEventListener("click",Callback(handleEvent));
	canvas->addEventListener("contextmenu",Callback(handleRightClick));
}

inline void resetGame() [[server]]
{
	for(int i=0;i<9;i++)
		gameState.state[i]=false;
}

void webMain() [[client]]
{
	resetGame();
	client::document.addEventListener("DOMContentLoaded",client::Callback(clientTest));
}
