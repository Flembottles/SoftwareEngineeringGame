#include <SFML/Graphics.hpp>
#include <SFML/Window.hpp>
#include <SFML/OpenGL.hpp>
#include <GL\glut.h>
#include "Player.h"
#include "Platform.h"


Player player;
Platform platform(Platform::RED);
Platform platform2(Platform::BLUE);
Platform platform3(Platform::GREEN);
Platform platform4(Platform::BLUE);
Platform platform5(Platform::RED);
Platform platform6(Platform::GREEN);
Platform platform7(Platform::BLUE);
Platform platform8(Platform::GREEN);
Platform platform9(Platform::BLUE);
Platform platform10(Platform::RED);
Platform platform11(Platform::BLUE);
Platform platform12(Platform::GREEN);
Platform platform13(Platform::BLUE);
Platform platform14(Platform::GREEN);
Platform platform15(Platform::BLUE);
Platform platform16(Platform::BLUE);
Platform platform17(Platform::GREEN);
bool colorKeyPressed = false;
float moveX1 = 340;
float moveY1 = 300;
void setup()
{
	glClearColor(0.0, 0.0, 0.0, 0.0);
	
	//Plat2
	platform2.setHeight(15);
	platform2.setWidth(15);
	platform2.setX(95);
	platform2.setY(40);

	//Plat3
	platform3.setHeight(15);
	platform3.setWidth(15);
	platform3.setX(120);
	platform3.setY(60);

	//Plat4
	platform4.setHeight(15);
	platform4.setWidth(15);
	platform4.setX(145);
	platform4.setY(80);

	//Plat5
	platform5.setHeight(8);
	platform5.setWidth(60);
	platform5.setX(40);
	platform5.setY(100);

	//Plat6
	platform6.setHeight(2);
	platform6.setWidth(10);
	platform6.setX(40);
	platform6.setY(120);

	//Plat7
	platform7.setHeight(2);
	platform7.setWidth(10);
	platform7.setX(40);
	platform7.setY(145);

	//Plat8
	platform8.setHeight(2);
	platform8.setWidth(10);
	platform8.setX(40);
	platform8.setY(170);

	//Plat9
	platform9.setHeight(5);
	platform9.setWidth(30);
	platform9.setX(60);
	platform9.setY(190);

	//Plat10
	platform10.setHeight(2);
	platform10.setWidth(10);
	platform10.setX(110);
	platform10.setY(170);

	//Plat11
	platform11.setHeight(2);
	platform11.setWidth(10);
	platform11.setX(130);
	platform11.setY(190);

	//Plat12
	platform12.setHeight(2);
	platform12.setWidth(10);
	platform12.setX(150);
	platform12.setY(170);

	//Plat13
	platform13.setHeight(2);
	platform13.setWidth(10);
	platform13.setX(170);
	platform13.setY(190);

	//Plat14 BACK AT BOTTOMISH
	platform14.setHeight(2);
	platform14.setWidth(10);
	platform14.setX(120);
	platform14.setY(100);

	//Plat15
	platform15.setHeight(100);
	platform15.setWidth(2);
	platform15.setX(210);
	platform15.setY(120);

	//Plat16
	platform16.setHeight(100);
	platform16.setWidth(2);
	platform16.setX(225);
	platform16.setY(120);

	//Plat17
	platform17.setHeight(2);
	platform17.setWidth(17);
	platform17.setX(210);
	platform17.setY(20);


}
void keyDown(unsigned char key, int x, int y)
{
	switch(key)
	{
	case 98:
		if (!colorKeyPressed)
		{
			colorKeyPressed = true;
			platform.colorR = 1.0;
			platform.colorG = 1.0;
			platform.colorB = 1.0;
			platform.colorChange = true;
			platform.color = platform.BLUE;
		}
		break;
	case 103:
		if (!colorKeyPressed)
		{
			colorKeyPressed = true;
			platform.colorR = 1.0;
			platform.colorG = 1.0;
			platform.colorB = 1.0;
			platform.colorChange = true;
			platform.color = platform.GREEN;
		}
		break;
	case 114:
		if (!colorKeyPressed)
		{
			colorKeyPressed = true;
			platform.colorR = 1.0;
			platform.colorG = 1.0;
			platform.colorB = 1.0;
			platform.colorChange = true;
			platform.color = platform.RED;
		}
		break;

	}
}
void keyUp(unsigned char key, int x, int y)
{
	switch(key)
	{
	case 98:
		colorKeyPressed = false;
		break;
	case 103:
		colorKeyPressed = false;
		break;
	case 114:
		colorKeyPressed = false;
		break;
	
	}
}
void specialKeyDown(int key, int x, int y)
{
	switch(key)
	{
	case GLUT_KEY_LEFT:
		player.playerMoveState = player.LEFT;
		//player.setX(player.getX()-1);
		break;
	case GLUT_KEY_RIGHT:
		player.playerMoveState = player.RIGHT;
		//player.setX(player.getX()+1);
		break;
	case GLUT_KEY_UP:
		player.playerMoveState = player.UP;
		break;
	}
}
void specialKeyUp(int key, int x, int y)
{
		switch(key)
	{
	case GLUT_KEY_LEFT:
		player.playerMoveState = player.NONE;
		break;
	case GLUT_KEY_RIGHT:
		player.playerMoveState = player.NONE;
		break;
	case GLUT_KEY_UP:
		player.playerMoveState = player.NONE;
		break;
	}
}
void update()
{
	platform.update();
	player.update();
	
}
void timer(int ms)
{
	update();
	glutTimerFunc(ms,timer,ms);
}
void resize(int w, int h)
{
	glLoadIdentity();
	
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
   
	gluOrtho2D(0, 256, 0, 224);

	glMatrixMode(GL_MODELVIEW);
}
void render()
{
	glClear(GL_COLOR_BUFFER_BIT);
	
	//Draw Platforms
	player.draw();
	platform.draw();
	platform2.draw();
	platform3.draw();
	platform4.draw();
	platform5.draw();
	platform6.draw();
	platform7.draw();
	platform8.draw();
	platform9.draw();
	platform10.draw();
	platform11.draw();
	platform12.draw();
	platform13.draw();
	platform14.draw();
	platform15.draw();
	platform16.draw();
	platform17.draw();

	glutSwapBuffers();
	glutPostRedisplay();
}

int main(int argc, char **argv)
{
sf::Texture tscreen;
sf::Texture ptexture;
sf::Texture htexture;
if(!tscreen.loadFromFile("titlescreen.png"))
   {
			return 0;
	}
if (!ptexture.loadFromFile("tpointer.png"))
		{
			return 0;
		}
if (!htexture.loadFromFile("help.png"))
		{
			return 0;
		}
sf::Sprite tpointer(ptexture);
sf::Sprite titlescreen(tscreen);
sf::Sprite helps(htexture);
sf::RenderWindow window1(sf::VideoMode(900,600), "Title Screen"); // Title Screen Window
while (window1.isOpen())
    {
	
		tpointer.setPosition(moveX1,moveY1);
		sf::Event event;
		while (window1.pollEvent(event))
        {
				
		
			if (event.key.code == sf::Keyboard::Space && (moveY1 == 300))
			{
				window1.close();
				glutInit(&argc, argv);
				glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGBA);
				glutInitWindowSize(800, 600);
				glutInitWindowPosition(100, 50);
				glutCreateWindow("Spectrum");

				setup();
				glutKeyboardFunc(keyDown);
				glutKeyboardUpFunc(keyUp);
				glutSpecialFunc(specialKeyDown);
				glutSpecialUpFunc(specialKeyUp);
				glutTimerFunc(16,timer,16);
				glutReshapeFunc(resize);
				glutDisplayFunc(render);
				glutMainLoop();
			}
			if (event.key.code == sf::Keyboard::Space && (moveY1 == 386))
		    {
				 window1.close();
			}
			if (event.type == sf::Event::KeyPressed) 
			{
				 if (sf::Keyboard::isKeyPressed(sf::Keyboard::W) && (moveY1 > 300))
				{
					moveY1 -= 43;
				}
				  if (sf::Keyboard::isKeyPressed(sf::Keyboard::S) && (moveY1 < 386 ))
				{
					moveY1 += 43;
				}
				  if (event.key.code == sf::Keyboard::Space && (moveY1 == 343))
				 {
				  sf::RenderWindow instruct(sf::VideoMode(400, 400), "Instructions");
				   while (instruct.isOpen())
					 {
						// sf::Event::GainedFocus;
						 while (instruct.pollEvent(event))
						 {
							
							  // "close requested" event: we close the window
							 if (event.key.code == sf::Keyboard::B)
								 instruct.close();

						 }
						instruct.clear(sf::Color::Black);
						instruct.draw(helps);
						instruct.display();
					  }
				
				  }
			}

		}
		window1.clear(sf::Color::Black);
		window1.draw(titlescreen);
		window1.draw(tpointer);
		window1.display();
		}
}
