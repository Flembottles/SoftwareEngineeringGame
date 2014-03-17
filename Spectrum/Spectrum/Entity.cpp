#include "Entity.h"

Entity::Entity()
{

}
float Entity::getX()
{
	return x;
}
float Entity::getY()
{
	return y;
}
void Entity::setX(float x)
{
	this->x = x;
}
void Entity::setY(float y)
{
	this->y = y;
}
	
int Entity::getWidth()
{
	return width;
}
int	Entity::getHeight()
{
	return height;
}
void Entity::setWidth(int width)
{
	this->width = width;
}
void Entity::setHeight(int height)
{
	this->height = height;
}