#ifndef _LEVEL_H_
#define _LEVEL_H_

#include <SDL.h>
#include <stdlib.h>
#include <stdio.h>
#include <iostream>
#include <conio.h>
#include <vector>
#include <Windows.h> 
#include <SDL_image.h>
#include "GameObject.h"

class Level
{
public:
	//Methods
	Level(SDL_Renderer* renderer);
	~Level(void);
	void Update();
	void Draw();
	void Init();
	void KeyHandle();
	void InitRect(SDL_Rect* rec,int h,int w,int x,int y); // used to initiliaze SDL_Rect
	SDL_Rect CreateRect(int h ,int w,int x, int y);// used to create a new one out of nowhere
	//fields
	Hero* testHero;
	SDL_Renderer* cRenderer;
	

};
#endif

