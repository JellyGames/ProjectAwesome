#include <SDL2/SDL.h>
#include <Windows.h>
#include <iostream>
#include <stdio.h>

using namespace std;

int main(int argc, char ** argv)
{
	SDL_Init(SDL_INIT_EVERYTHING);
	bool isDone = false;
	//AllocConsole(); freopen("CONOUT$", "w", stdout);
	SDL_Window * window = SDL_CreateWindow("NOG geen naam",100,50,640,480,SDL_WINDOW_SHOWN);
	SDL_Renderer* renderer = SDL_CreateRenderer(window,0,SDL_RENDERER_ACCELERATED);

	Sleep(10000);
	while(!isDone)
	{
	//uPDATE	
		isDone = true;
	}

	SDL_Quit();

	return 0;
}