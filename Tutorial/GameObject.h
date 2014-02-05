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
	bool flip;
	SDL_Point sdlPoint;
	SDL_Texture* texture;
	//sprite size and offset for animations
	SDL_Rect sRect;
	//position and actual size on screen
	SDL_Rect dRect;
	SDL_Renderer* cRenderer;

	

};
class Hero :
	public GameObject
{
public:
	//Methods
	Hero(char* texturePath,SDL_Rect sourceRect,SDL_Rect destRect,SDL_Renderer* renderer):GameObject(texturePath,sourceRect,destRect,renderer)
	{	
	sRect = sourceRect;
	dRect = destRect;
	cRenderer = renderer;
	texture = IMG_LoadTexture(cRenderer,texturePath);
	if(texture == NULL)
	{
		std::cout << "Texture is null" << std::endl;
	}
	Init();
	}
	~Hero();
	void Init()
	{
		animationX = 0;
		animationY= 0;
		time = 0;
	}
	void MoveLeft();
	void MoveRight();
	void Animate();

	//Fields
	int animationX;
	int animationY;
	int time;
	
};

#endif 

