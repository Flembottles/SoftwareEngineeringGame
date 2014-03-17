#include <GL\glut.h>
#include "Player.h"

Player player;

void setup()
{
	glClearColor(0.0, 0.0, 0.0, 0.0);
}
void keyDown(unsigned char key, int x, int y)
{

}
void keyUp(unsigned char key, int x, int y)
{

}
void specialKeyDown(int key, int x, int y)
{

}
void specialKeyUp(int key, int x, int y)
{

}
void update()
{

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
   
	gluOrtho2D(0, 1280, 0, 720);

	glMatrixMode(GL_MODELVIEW);
}
void render()
{
	glClear(GL_COLOR_BUFFER_BIT);
	
	player.draw();

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