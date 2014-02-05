#include "GameObject.h"

Hero::~Hero()
{
}

void Hero::Animate()
{
	time++;
	if(time >=10)
	{
		animationX ++;
		if(animationX>3)
		{
			animationX =0;
		}
		time =0;
	}
	sRect.x = animationX*32;
	sRect.y = animationY*32;
}
void Hero::MoveLeft()
{
	animationY = 0;
	dRect.x -= 1;
}
void Hero::MoveRight()
{
	animationY = 0;
	dRect.x +=1;
}
