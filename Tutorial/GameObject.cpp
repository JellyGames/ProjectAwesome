
#include "GameObject.h"
using namespace std;


GameObject::GameObject(char* texturePath,SDL_Rect sourceRectangle,SDL_Rect destRect,SDL_Renderer* renderer)
{

	sRect = sourceRectangle;
	dRect = destRect;
	texture = IMG_LoadTexture(renderer,texturePath);
	if(texture == NULL)
	{
		std::cout << "texture is 0" << std::endl;
	}
	Init();
}

void GameObject::Init()
{

}
void GameObject::Draw(SDL_Renderer* renderer)
{
	SDL_RenderCopy(renderer,texture,&sRect,&dRect);
}
GameObject::~GameObject(void)
{

}
