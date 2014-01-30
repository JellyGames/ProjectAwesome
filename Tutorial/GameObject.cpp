#include "GameObject.h"

GameObject::GameObject(char* texturePath,SDL_Rect sourceRectangle,SDL_Rect destRect,SDL_Renderer* renderer)
{

	sRect = sourceRectangle;
	dRect = destRect;
	texture = IMG_LoadTexture(renderer,texturePath);

};

GameObject::~GameObject(void)
{
}
