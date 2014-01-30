#ifndef _GAMEOBJECT_H_
#define _GAMEOBJECT_H_
#include <SDL.h>
#include <stdlib.h>
#include <stdio.h>
#include <iostream>
#include <conio.h>
#include <vector>
#include <Windows.h> 
class Game
{
public:
	//Methods
	Game(void); 
	~Game(void);
	void Initialize();
	void regulateRenderFrameRate();
	void GetInput();
	void resyncRenderFrameTime();
	void doFrame(bool draw);
	void Update();
	void Draw();

	//Fields
	bool done;
	SDL_Window* cWindow;
	SDL_Renderer* cRenderer;
	unsigned int deltaTime;
	unsigned int oldTime;
	unsigned int newTime;
};

#endif
