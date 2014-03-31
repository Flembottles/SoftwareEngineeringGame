#include <GL\glut.h>
#include "Player.h"
#include "Platform.h"

Player player;
Platform platform(Platform::RED);
bool colorKeyPressed = false;

void setup()
{
	glClearColor(0.0, 0.0, 0.0, 0.0);
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
	case 49:
		if (!colorKeyPressed)
		{
			colorKeyPressed = true;
			player.colorR = 1.0;
			player.colorG = 1.0;
			player.colorB = 1.0;
			player.colorChange = true;
			player.color = player.RED;
		}
		break;
	case 50:
		if (!colorKeyPressed)
		{
			colorKeyPressed = true;
			player.colorR = 1.0;
			player.colorG = 1.0;
			player.colorB = 1.0;
			player.colorChange = true;
			player.color = player.BLUE;
		}
		break;
	case 51:
		if (!colorKeyPressed)
		{
			colorKeyPressed = true;
			player.colorR = 1.0;
			player.colorG = 1.0;
			player.colorB = 1.0;
			player.colorChange = true;
			player.color = player.GREEN;
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
	case 49:
		colorKeyPressed = false;
		break;
	case 50:
		colorKeyPressed = false;
		break;
	case 51:
		colorKeyPressed = false;
		break;
	}
}
void specialKeyDown(int key, int x, int y)
{

}
void specialKeyUp(int key, int x, int y)
{

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
	
	player.draw();
	platform.draw();

	glutSwapBuffers();
	glutPostRedisplay();
}

int main(int argc, char **argv)
{
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