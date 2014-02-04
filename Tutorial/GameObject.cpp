
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
	SDL_RenderCopy(cRenderer,texture,&sRect,&dRect);
}
GameObject::~GameObject(void)
{

}
