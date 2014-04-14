#ifndef ENTITY_H
#define ENTITY_H
#include <GL/glut.h>
class Entity
{
protected:
	float x, y;
	int width, height;
public:
	Entity();
	void draw();
	void update();
	float getX(), getY();
	void setX(float x), setY(float y);
	int getWidth(),getHeight();
	void setWidth(int width),setHeight(int height);
};
#endif