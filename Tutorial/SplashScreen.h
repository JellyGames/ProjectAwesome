#ifndef _LEVEL_H_
#define _LEVEL_H_

#include <SDL.h>
#include <stdio.h>
#include <iostream>
#include "GameObject.h"

class SplashScreen
{
public:
	//methods
	SplashScreen(char* texturePath,SDL_Rect sourceRectangle,SDL_Rect destRect,SDL_Renderer* renderer);
	void Draw();

	//fields
	GameObject* objectGame;
	SDL_Texture* texture;
	//sprite size and offset for animations
	SDL_Rect sRect;
	//position and actual size on screen
	SDL_Rect dRect;
	SDL_Renderer* cRenderer;
};

#endif