#include "Player.h"

Player::Player()
{
	setX(16);
	setY(32);
	setWidth(8);
	setHeight(16);
	velocityX = 1;
	velocityY = 1;
	jumping = false;
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

void Player::update() {

	switch(playerMoveState) {
		case LEFT:
			setX(getX()-velocityX);
		break;
		case RIGHT:
			setX(getX()+velocityX);
		break;
		case UP:
			if(!jumping)
				jumping = true;
		break;
		case NONE:
			jumping = false;
		break;
	}

	if(jumping) {
		setY(getY()+velocityY);
		//std::cout << "Jumping." << std::endl;
	} else {
		if(getY() > 20)
		setY(getY()-velocityY);
	}

}