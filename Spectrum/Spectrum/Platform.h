#include "Entity.h"
class Platform : public Entity
{
private:

public:
	Platform(int width, int height);
	void draw();
	void update();
};