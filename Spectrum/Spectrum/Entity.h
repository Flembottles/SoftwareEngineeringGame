#include <GL/glut.h>
class Entity
{
private:
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