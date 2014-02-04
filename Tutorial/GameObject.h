#ifndef _GAMEOBJECT_H_
#define _GAMEOBJECT_H_

#include <SDL.h>
#include <stdlib.h>
#include <stdio.h>
#include <iostream>
#include <Windows.h>
#include <SDL_image.h>
#include <conio.h>
#include <fstream>
#include <vector>

class GameObject
{
public: 
	//methods
	GameObject(char* texturePath,SDL_Rect sourceRectangle,SDL_Rect destRect,SDL_Renderer* renderer);
	~GameObject(void);
	
	void Draw();
	void Init();

	//fields
	SDL_Texture* texture;
	//sprite size and offset for animations
	SDL_Rect sRect;
	//position and actual size on screen
	SDL_Rect dRect;
	SDL_Renderer* cRenderer;

	

};


#endif 

