// Aqui é onde exibimos o contexto para visualização.

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

// Inicialização do openGL
// Criação da janela
// Definição das funções de callback
int main(int argc, char** argv)
{
	// Inicialização do glut
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_RGB | GLUT_DOUBLE);
	glutInitWindowPosition((glutGet(GLUT_SCREEN_WIDTH) - WIDTH) / 2, 
		(glutGet(GLUT_SCREEN_HEIGHT) - HEIGHT) / 2);
	glutInitWindowSize(WIDTH, HEIGHT);
	glutCreateWindow("ANIMATION");
	init();
	glutReshapeFunc(reshapeCallback);

	// A função de renderização e desenho do render na tela.
	glutDisplayFunc(displayCallback);
	glutKeyboardFunc(keybordCallback);
	glutMainLoop();
	return 0;
}

// Aqui é realizado os preparativos para renderizar o mundo.
void init()
{
	glClearColor(0.792, 0.792, 0.792, 1.0);
	initGrid(COLUMNS, ROWS);
}

// Aqui é onde a camera faz o render do mundo.
// O render também é exibido na tela aqui
void displayCallback()
{
	glClear(GL_COLOR_BUFFER_BIT);

	// Aqui a camera faz o render do mundo.
	drawGrid();
	drawBotamon();

	// Aqui o render é exibido na tela
	glutSwapBuffers();
}

// Remodela o viewPort para manter as proporções
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

// Intercepta comandos do teclado.
void keybordCallback(unsigned char key, int, int)
{
	switch (key)
	{
	// Fecha a janela caso ESC tenha sido pressionado.
	case 27:
		exit(0);
		break;

	// Renderiza o desenho caso SPACE tenha sido pressionado.
	case 32:
		displayCallback();
		break;

	default:
		break;
	}
}