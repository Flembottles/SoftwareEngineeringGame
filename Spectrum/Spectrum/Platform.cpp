#include "Platform.h"

Platform::Platform(colorList color)
{
	this->color = color;
	width = 64;
	height = 8;
	x = 16;
	y = 16;
}

void Platform::draw()
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
	glBegin(GL_QUADS);
	glVertex2i(x,y);
	glVertex2i(x+width,y);
	glVertex2i(x+width,y-height);
	glVertex2i(x,y-height);
	glEnd();
	glPushMatrix();
}
void Platform::update()
{
	if (colorChange && color == BLUE)
	{
		colorR-=0.1;
		colorG-=0.1;
	}
	if (colorChange && color == GREEN)
	{
		colorR-=0.1;
		colorB-=0.1;
	}
	if (colorChange && color == RED)
	{
		colorB-=0.1;
		colorG-=0.1;
	}
}
void Platform::switchColor(colorList color)
{
	
}