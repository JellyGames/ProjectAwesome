#include "SplashScreen.h"
using namespace std;

SplashScreen::SplashScreen(char* texturePath,SDL_Rect sourceRectangle,SDL_Rect destRect,SDL_Renderer* renderer)
{
	objectGame = new GameObject(texturePath, sourceRectangle, destRect, renderer);
}

void SplashScreen::Draw()
{
	objectGame->Draw();
}