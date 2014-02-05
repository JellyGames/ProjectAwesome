#include "Level.h"


Level::Level(SDL_Renderer* renderer)
{
	cRenderer = renderer;
}


Level::~Level(void)
{
}
//Use initilization logics here
void Level::Init()
{
	testHero = new Hero("knightly spritesheet.png",CreateRect(32,32,0,0),CreateRect(64,64,0,0),cRenderer);
}
//Add update logic
void Level::Update()
{
	testHero->Animate();
}
//Use this method for keyboard handling don't know how yet tough
void Level::KeyHandle()
{

}
void Level::Draw()
{
	testHero->Draw();
	
}


void Level::InitRect(SDL_Rect* rec,int h,int w,int x,int y)
{
	rec->h = h;
	rec->w = w;
	rec->x = x;
	rec->y = y;
}
SDL_Rect Level::CreateRect(int h ,int w,int x, int y)
{
	SDL_Rect rec;
	rec.h = h;
	rec.w = w;
	rec.x = x;
	rec.y = y;
	return rec;
}