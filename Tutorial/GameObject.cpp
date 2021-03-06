
#include "GameObject.h"
using namespace std;

GameObject::GameObject(char* texturePath,SDL_Rect sourceRectangle,SDL_Rect destRect,SDL_Renderer* renderer)
{ 
	ifstream myfile (texturePath);
	if (myfile.good())
	{
		//MessageBox(handleWindow,"Could Not Find editorresources.txt, EditorMode won't work", "ThempX()",MB_OK);
		cout << "found "<<  texturePath << endl;
	}
	sRect = sourceRectangle;
	dRect = destRect;
	cRenderer = renderer;
	texture = NULL;
	texture = IMG_LoadTexture(cRenderer,texturePath);
	flip = false;
	if(texture == NULL)
	{
		std::cout << "texture is 0" << std::endl;
	}
	Init();
}

void GameObject::Init()
{

}
void GameObject::Draw()
{
		SDL_RendererFlip f;
		if(flip)
		{
			f= SDL_FLIP_HORIZONTAL;
			SDL_RenderCopyEx(cRenderer,texture,&sRect,&dRect,0,&sdlPoint,f);
		}
		else if(!flip)
		{
			f= SDL_FLIP_NONE;
			SDL_RenderCopyEx(cRenderer,texture,&sRect,&dRect,0,&sdlPoint,f);
		}
}
GameObject::~GameObject(void)
{

}
