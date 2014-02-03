
#include "GameObject.h"
using namespace std;


GameObject::GameObject(char* texturePath,SDL_Rect sourceRectangle,SDL_Rect destRect,SDL_Renderer* renderer)
{ 

	sRect = sourceRectangle;
	dRect = destRect;
	cRenderer = renderer;
	texture = IMG_LoadTexture(cRenderer, texturePath);
	
	if(texture == NULL)
	{
		std::cout << "texture is 0" << std::endl;
		IMG_GetError();
	}
	Init();
}

void GameObject::Init()
{

}
void GameObject::Draw()
{
	SDL_RenderCopy(cRenderer,texture,&sRect,&dRect);
}
GameObject::~GameObject(void)
{

}
