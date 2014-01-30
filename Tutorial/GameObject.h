#ifndef _GAMEOBJECT_H_
#define _GAMEOBJECT_H_

#include <SDL.h>
#include <stdlib.h>
#include <iostream>
#include <Windows.h>
#include <SDL_image.h>


class GameObject
{
public:
	//methods
	GameObject(char* texturePath,SDL_Rect sourceRectangle,SDL_Rect destRect,SDL_Renderer* renderer);
	~GameObject(void);
	
	void Draw(SDL_Renderer* renderer);
	void Init();

	//fields
	SDL_Texture* texture;
	//sprite size and offset for animations
	SDL_Rect sRect;
	//position and actual size on screen
	SDL_Rect dRect;

	

};


#endif 

