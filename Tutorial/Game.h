#ifndef _GAME_H_
#define _GAME_H_

#include <SDL.h>
#include <stdlib.h>
#include <stdio.h>
#include <iostream>
#include <conio.h>
#include <vector>
#include <Windows.h> 
#include <SDL_image.h>
#include "GameObject.h"
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
	void InitRect(SDL_Rect* rec,int h,int w,int x,int y);
	SDL_Rect CreateRect(int h ,int w,int x, int y);

	//Fields
	GameObject* objectGame;
	bool done;
	SDL_Window* cWindow;
	SDL_Renderer* cRenderer;
	unsigned int deltaTime;
	unsigned int oldTime;
	unsigned int newTime;
};

#endif
