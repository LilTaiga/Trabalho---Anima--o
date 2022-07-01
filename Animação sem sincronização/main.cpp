#include <GL/glut.h>
#include <GL/gl.h>
#include <iostream>
#include <stdio.h>
#include "game.h"

using namespace std;

#define COLUMNS 40
#define ROWS 40
#define FPS 10
#define WIDTH 750
#define HEIGHT 750

bool render = false;

void init();
void displayCallback();
void reshapeCallback(int, int);
void timerCallback(int);
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
	glutTimerFunc(0, timerCallback, 0);
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
	if (render)
	{
		glutSwapBuffers();
		render = !render;
	}
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

void timerCallback(int)
{
	glutPostRedisplay();
	glutTimerFunc(1000 / FPS, timerCallback, 0);
}

void keybordCallback(unsigned char key, int, int)
{
	switch (key)
	{
	case 27:
		exit(0);
		break;

	case 32:
		render = !render;
		break;

	default:
		break;
	}
}