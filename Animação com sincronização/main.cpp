#include <GL/glut.h>
#include <iostream>
#include <stdio.h>
#include "game.h"

using namespace std;

#define COLUMNS 40
#define ROWS 40
#define WIDTH 600
#define HEIGHT 600

extern int index;

void init();
void displayCallback();
void reshapeCallback(int, int);
void keybordCallback(unsigned char, int, int);

int main(int argc, char** argv)
{
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_RGB | GLUT_DOUBLE);
	glutInitWindowPosition((glutGet(GLUT_SCREEN_WIDTH) - WIDTH) / 2, 
		(glutGet(GLUT_SCREEN_HEIGHT) - HEIGHT) / 2);
	glutInitWindowSize(WIDTH, HEIGHT);
	glutCreateWindow("ANIMATION");
	init();
	glutReshapeFunc(reshapeCallback);
	glutDisplayFunc(displayCallback);
	glutKeyboardFunc(keybordCallback);
	glutMainLoop();
	return 0;
}

void init()
{
	glClearColor(0.792, 0.792, 0.792, 1.0);
	initGrid(COLUMNS, ROWS);
}

void displayCallback()
{
	glClear(GL_COLOR_BUFFER_BIT);
	drawGrid();
	drawBotamon();
	glutSwapBuffers();
}

void reshapeCallback(int w, int h)
{
	if (w >= h)
	{
		glViewport(((GLsizei)w - (GLsizei)h) / 2, 0, (GLsizei)h, (GLsizei)h);
	}
	else if (w < h)
	{
		glViewport(0, ((GLsizei)h - (GLsizei)w) / 2, (GLsizei)w, (GLsizei)w);
	}
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	glOrtho(0.0, COLUMNS, 0.0, ROWS, -1.0, 1.0);
	glMatrixMode(GL_MODELVIEW);
}

void keybordCallback(unsigned char key, int, int)
{
	switch (key)
	{
	case 27:
		exit(0);
		break;

	case 32:
		displayCallback();
		break;

	default:
		break;
	}
}