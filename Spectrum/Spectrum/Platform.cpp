#include "Platform.h"

Platform::Platform(int width, int height)
{
	this->width = width;
	this->height = height;
	x = 50;
	y = 50;
}
void Platform::draw()
{
	glPushMatrix();
	glColor3f(0.0,0.0,1.0);
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

}