#include "Game.h"

Game::Game(void)
{ 
	done = false;
	SDL_Window* window;
	SDL_Renderer* renderer;
	SDL_CreateWindowAndRenderer(800,600,SDL_WINDOW_SHOWN,&window,&renderer);
	cWindow = window;
	cRenderer = renderer;
	SDL_SetRenderDrawColor(cRenderer,50,125,255,0);
	SDL_SetHint(SDL_HINT_RENDER_SCALE_QUALITY,"nearest");
	SDL_RenderSetLogicalSize(cRenderer,800,600);
	Initialize();
	while(!done)
	{
		
		regulateRenderFrameRate();
	}
	SDL_Quit();
}
Uint32 nextFrameR; 
int framesSkippedR; 
int maxFrameSkipR = 5;  
int skipFramesBehindR = 5; 
int frameLengthR = 17; 
//for rectangle initialization works only for an existing one
void Game::InitRect(SDL_Rect* rec,int h,int w,int x,int y)
{
	rec->h = h;
	rec->w = w;
	rec->x = x;
	rec->y = y;
}
SDL_Rect Game::CreateRect(int h ,int w,int x, int y)
{
	SDL_Rect rec;
	rec.h = h;
	rec.w = w;
	rec.x = x;
	rec.y = y;
	return rec;
}
void Game::regulateRenderFrameRate()
{ 
	// get time between next frame and now 
	Sint32 dif = (Sint32)(SDL_GetTicks() - nextFrameR); 
	// if it's not yet time for the next frame... wait and sleep for a bit
	if(dif < 0) 
	{
		//std::cout<< dif<<std::endl; 
		SDL_Delay(1); 
		return; 
	} // otherwise, we're going to do at least 1 frame. increment our time counter
	nextFrameR += frameLengthR; 
	// if we have fallen too far behind.. we need to start skipping frames to catch up 
	if(dif >= (frameLengthR * skipFramesBehindR))
	{ 
		// if we have already skipped the maximum number of times. "Give up" and just resync 
		if(framesSkippedR >= maxFrameSkipR)
		{ 
			resyncRenderFrameTime(); 
		} 
		else 
		{ 
			// otherwise, skip this frame 
			doFrame(false);
			++framesSkippedR; 
			return; 
		} 
	} 
	// otherwise, we just do a "normal" frame 
	framesSkippedR = 0; 
	doFrame(true); 
	// do the frame, and draw it 
}
void Game::resyncRenderFrameTime()//if we changed something big (like initializing or something that makes the clock not synced) (or makes us lose NextFrame or framesSkipped) 
{ 
	nextFrameR = SDL_GetTicks();
	framesSkippedR = 0; 
}
void Game::Update()
{

}
void Game::doFrame(bool draw)
{
	if(draw)
	{
		//Renderfunctie en Update hier!;
		Update();
		Draw();

	}
	else
	{
		//UpdateFunctie zonder Renderfunctie Hier
		Update();
	}
}
void Game::Initialize()
{

}
void Game::GetInput()
{
	SDL_Event e;
	while(SDL_PollEvent(&e))
	{
		if(e.type == SDL_KEYDOWN)
		{
			switch(e.key.keysym.sym)
			{
			case SDLK_ESCAPE:
				done = true;
				break;
			}

		}
	}
}

void Game::Draw()
{
	GetInput();
	SDL_RenderClear(cRenderer);

	SDL_RenderPresent(cRenderer);
}
Game::~Game(void)
{
}
