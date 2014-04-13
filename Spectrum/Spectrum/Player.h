#include "Entity.h"

class Player : public Entity
{
public:
	Player();
	void draw();
	void update();
	enum playermove{UP,DOWN,LEFT,RIGHT, NONE};
	playermove playerMoveState;
	bool jumping;
	float velocityX;
	float velocityY;

};