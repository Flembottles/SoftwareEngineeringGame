#include "Player.h"

Player::Player()
{
	setX(100);
	setY(150);
	setWidth(30);
	setHeight(30);
}

void Player::draw()
{
	glPushMatrix();
	glColor3f(0.0,0.0,1.0);
	glTranslatef(getX(),getY(),0);
	glBegin(GL_QUADS);
	glVertex2f(0.0,0.0);
	glVertex2f(getWidth(),0.0);
	glVertex2f(getWidth(),getHeight());
	glVertex2f(0.0,getHeight());
	glEnd();
	glPopMatrix();
}