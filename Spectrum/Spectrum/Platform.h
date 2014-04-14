#include "Entity.h"
class Platform : public Entity
{
public:
	
	enum colorList{RED,BLUE,GREEN,CHANGING};
	colorList color;
	float colorR,colorG,colorB;
	bool colorChange;
	Platform(colorList color);
	void draw();
	void update();
	void switchColor(colorList color);
};