#include "Entity.h"
class Platform : public Entity
{
public:
	
	
	//float colorR,colorG,colorB;
	//bool colorChange;
	Platform(colorList color);
	void draw();
	void update();
	void switchColor(colorList color);
};