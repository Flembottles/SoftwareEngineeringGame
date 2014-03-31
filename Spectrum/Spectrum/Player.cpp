#include "Player.h"

const int colorChangeSpeed = 0.1;

Player::Player()
{
	setX(16);
	setY(32);
	setWidth(8);
	setHeight(16);

	color = BLUE;

	
}

void Player::draw()
{
	glPushMatrix();
	switch(color)
	{
	case RED:
		colorR=1.0;
		break;
	case GREEN:
		colorG=1.0;
		break;
	case BLUE:
		colorB=1.0;
		break;
	}
	glColor3f(colorR,colorG,colorB);
	glTranslatef(getX(),getY(),0);
	glBegin(GL_QUADS);
	glVertex2f(0.0,0.0);
	glVertex2f(getWidth(),0.0);
	glVertex2f(getWidth(),getHeight());
	glVertex2f(0.0,getHeight());
	glEnd();
	glPopMatrix();
}
void Player::update()
{
	if (colorChange && color == BLUE)
	{
		colorR-=0.05;
		colorG-=0.05;
	}
	if (colorChange && color == GREEN)
	{
		colorR-=0.05;
		colorB-=0.05;
	}
	if (colorChange && color == RED)
	{
		colorB-=0.05;
		colorG-=0.05;
	}
}