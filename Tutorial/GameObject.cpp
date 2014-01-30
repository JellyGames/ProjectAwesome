#include "GameObject.h"

GameObject::GameObject(char* texturePath,SDL_Rect sourceRectangle,SDL_Rect destRect,SDL_Renderer* renderer)
{

	sRect = sourceRectangle;
	dRect = destRect;
	

};

GameObject::~GameObject(void)
{
}
