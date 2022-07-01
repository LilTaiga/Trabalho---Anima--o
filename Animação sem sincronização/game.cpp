#include <GL/glut.h>
#include <GL/gl.h>
#include <ctime>
#include "game.h"

int gridX, gridY;
int index = 0;

int columnColorOneInit12_27;
int columnColorOne12_27;
int columnColorOneInit13_26;
int columnColorOne13_26;
int columnColorOneInit14_25;
int columnColorOne14_25;
int columnColorOneInit15_24;
int columnColorOne15_24;
int columnColorOneInit16_23;
int columnColorOne16_23;
int columnColorOneInit17__22;
int columnColorOne17__22;

int columnColorTwoInit14_25;
int columnColorTwo14_25;
int columnColorTwoInit15_24;
int columnColorTwo15_24;
int columnColorTwoInit16_23;
int columnColorTwo16_23;
int columnColorTwoInit17__22;
int columnColorTwo17__22;

int columnColorThreeInit18_21;
int columnColorThree18_21;
int columnColorThreeInit19_20;
int columnColorThree19_20;

int columnColorFourInit16_17_22_23;
int columnColorFour16_17_22_23;

int columnColorFiveInit16_17_22_23;
int columnColorFive16_17_22_23;

void unit(int, int);

void initGrid(int x, int y)
{
	gridX = x;
	gridY = y;
}

void drawGrid()
{
	for (size_t i = 0; i <= gridX; i++)
	{
		for (size_t j = 0; j <= gridY; j++)
		{
			unit(i, j);
		}
	}
}

void unit(int x, int y)
{
	glLineWidth(1.0);
	glColor3f(0.7, 0.7, 0.7);

	glBegin(GL_LINE_LOOP);
	glVertex2f(x, y);
	glVertex2f(x + 1, y);
	glVertex2f(x + 1, y + 1);
	glVertex2f(x, y + 1);
	glEnd();
}

void drawBotamon()
{
	switch (index)
	{
	case 0:
		columnColorOneInit12_27 = 3;
		columnColorOne12_27 = 6;
		columnColorOneInit13_26 = 2;
		columnColorOne13_26 = 11;
		columnColorOneInit14_25 = 2;
		columnColorOne14_25 = 12;
		columnColorOneInit15_24 = 1;
		columnColorOne15_24 = 13;
		columnColorOneInit16_23 = 1;
		columnColorOne16_23 = 12;
		columnColorOneInit17__22 = 1;
		columnColorOne17__22 = 10;

		columnColorTwoInit14_25 = 5;
		columnColorTwo14_25 = 3;
		columnColorTwoInit15_24 = 4;
		columnColorTwo15_24 = 5;
		columnColorTwoInit16_23 = 3;
		columnColorTwo16_23 = 7;
		columnColorTwoInit17__22 = 2;
		columnColorTwo17__22 = 8;

		columnColorThreeInit18_21 = 4;
		columnColorThree18_21 = 4;
		columnColorThreeInit19_20 = 3;
		columnColorThree19_20 = 6;

		columnColorFourInit16_17_22_23 = 6;
		columnColorFour16_17_22_23 = 2;

		columnColorFiveInit16_17_22_23 = 5;
		columnColorFive16_17_22_23 = 1;
		index++;
		break;

	case 1:
		columnColorOneInit12_27 = 3;
		columnColorOne12_27 = 6;
		columnColorOneInit13_26 = 2;
		columnColorOne13_26 = 11;
		columnColorOneInit14_25 = 2;
		columnColorOne14_25 = 12;
		columnColorOneInit15_24 = 1;
		columnColorOne15_24 = 13;
		columnColorOneInit16_23 = 1;
		columnColorOne16_23 = 12;
		columnColorOneInit17__22 = 1;
		columnColorOne17__22 = 10;

		columnColorTwoInit14_25 = 5;
		columnColorTwo14_25 = 3;
		columnColorTwoInit15_24 = 4;
		columnColorTwo15_24 = 5;
		columnColorTwoInit16_23 = 3;
		columnColorTwo16_23 = 7;
		columnColorTwoInit17__22 = 2;
		columnColorTwo17__22 = 8;

		columnColorThreeInit18_21 = 4;
		columnColorThree18_21 = 4;
		columnColorThreeInit19_20 = 3;
		columnColorThree19_20 = 6;

		columnColorFourInit16_17_22_23 = 6;
		columnColorFour16_17_22_23 = 1;

		columnColorFiveInit16_17_22_23 = 5;
		columnColorFive16_17_22_23 = 1;
		index++;
		break;

	case 2:
		columnColorOneInit12_27 = 3;
		columnColorOne12_27 = 6;
		columnColorOneInit13_26 = 2;
		columnColorOne13_26 = 11;
		columnColorOneInit14_25 = 2;
		columnColorOne14_25 = 12;
		columnColorOneInit15_24 = 1;
		columnColorOne15_24 = 13;
		columnColorOneInit16_23 = 1;
		columnColorOne16_23 = 12;
		columnColorOneInit17__22 = 1;
		columnColorOne17__22 = 10;

		columnColorTwoInit14_25 = 5;
		columnColorTwo14_25 = 3;
		columnColorTwoInit15_24 = 4;
		columnColorTwo15_24 = 5;
		columnColorTwoInit16_23 = 3;
		columnColorTwo16_23 = 7;
		columnColorTwoInit17__22 = 2;
		columnColorTwo17__22 = 8;

		columnColorThreeInit18_21 = 4;
		columnColorThree18_21 = 4;
		columnColorThreeInit19_20 = 3;
		columnColorThree19_20 = 6;

		columnColorFourInit16_17_22_23 = 6;
		columnColorFour16_17_22_23 = 0;

		columnColorFiveInit16_17_22_23 = 5;
		columnColorFive16_17_22_23 = 1;
		index++;
		break;

	case 3:
		columnColorOneInit12_27 = 3;
		columnColorOne12_27 = 6;
		columnColorOneInit13_26 = 2;
		columnColorOne13_26 = 11;
		columnColorOneInit14_25 = 2;
		columnColorOne14_25 = 12;
		columnColorOneInit15_24 = 1;
		columnColorOne15_24 = 13;
		columnColorOneInit16_23 = 1;
		columnColorOne16_23 = 12;
		columnColorOneInit17__22 = 1;
		columnColorOne17__22 = 10;

		columnColorTwoInit14_25 = 5;
		columnColorTwo14_25 = 3;
		columnColorTwoInit15_24 = 4;
		columnColorTwo15_24 = 5;
		columnColorTwoInit16_23 = 3;
		columnColorTwo16_23 = 7;
		columnColorTwoInit17__22 = 2;
		columnColorTwo17__22 = 8;

		columnColorThreeInit18_21 = 4;
		columnColorThree18_21 = 4;
		columnColorThreeInit19_20 = 3;
		columnColorThree19_20 = 6;

		columnColorFourInit16_17_22_23 = 6;
		columnColorFour16_17_22_23 = 0;

		columnColorFiveInit16_17_22_23 = 5;
		columnColorFive16_17_22_23 = 0;
		index++;
		break;

	case 4:
		columnColorOneInit12_27 = 3;
		columnColorOne12_27 = 6;
		columnColorOneInit13_26 = 2;
		columnColorOne13_26 = 11;
		columnColorOneInit14_25 = 2;
		columnColorOne14_25 = 12;
		columnColorOneInit15_24 = 1;
		columnColorOne15_24 = 13;
		columnColorOneInit16_23 = 1;
		columnColorOne16_23 = 12;
		columnColorOneInit17__22 = 1;
		columnColorOne17__22 = 10;

		columnColorTwoInit14_25 = 5;
		columnColorTwo14_25 = 3;
		columnColorTwoInit15_24 = 4;
		columnColorTwo15_24 = 5;
		columnColorTwoInit16_23 = 3;
		columnColorTwo16_23 = 7;
		columnColorTwoInit17__22 = 2;
		columnColorTwo17__22 = 8;

		columnColorThreeInit18_21 = 4;
		columnColorThree18_21 = 4;
		columnColorThreeInit19_20 = 3;
		columnColorThree19_20 = 6;

		columnColorFourInit16_17_22_23 = 6;
		columnColorFour16_17_22_23 = 0;

		columnColorFiveInit16_17_22_23 = 5;
		columnColorFive16_17_22_23 = 1;
		index++;
		break;

	case 5:
		columnColorOneInit12_27 = 3;
		columnColorOne12_27 = 6;
		columnColorOneInit13_26 = 2;
		columnColorOne13_26 = 11;
		columnColorOneInit14_25 = 2;
		columnColorOne14_25 = 12;
		columnColorOneInit15_24 = 1;
		columnColorOne15_24 = 13;
		columnColorOneInit16_23 = 1;
		columnColorOne16_23 = 12;
		columnColorOneInit17__22 = 1;
		columnColorOne17__22 = 10;

		columnColorTwoInit14_25 = 5;
		columnColorTwo14_25 = 3;
		columnColorTwoInit15_24 = 4;
		columnColorTwo15_24 = 5;
		columnColorTwoInit16_23 = 3;
		columnColorTwo16_23 = 7;
		columnColorTwoInit17__22 = 2;
		columnColorTwo17__22 = 8;

		columnColorThreeInit18_21 = 4;
		columnColorThree18_21 = 4;
		columnColorThreeInit19_20 = 3;
		columnColorThree19_20 = 6;

		columnColorFourInit16_17_22_23 = 6;
		columnColorFour16_17_22_23 = 1;

		columnColorFiveInit16_17_22_23 = 5;
		columnColorFive16_17_22_23 = 1;
		index++;
		break;

	case 6:
		columnColorOneInit12_27 = 3;
		columnColorOne12_27 = 6;
		columnColorOneInit13_26 = 2;
		columnColorOne13_26 = 11;
		columnColorOneInit14_25 = 2;
		columnColorOne14_25 = 12;
		columnColorOneInit15_24 = 1;
		columnColorOne15_24 = 13;
		columnColorOneInit16_23 = 1;
		columnColorOne16_23 = 12;
		columnColorOneInit17__22 = 1;
		columnColorOne17__22 = 10;

		columnColorTwoInit14_25 = 5;
		columnColorTwo14_25 = 3;
		columnColorTwoInit15_24 = 4;
		columnColorTwo15_24 = 5;
		columnColorTwoInit16_23 = 3;
		columnColorTwo16_23 = 7;
		columnColorTwoInit17__22 = 2;
		columnColorTwo17__22 = 8;

		columnColorThreeInit18_21 = 4;
		columnColorThree18_21 = 4;
		columnColorThreeInit19_20 = 3;
		columnColorThree19_20 = 6;

		columnColorFourInit16_17_22_23 = 6;
		columnColorFour16_17_22_23 = 2;

		columnColorFiveInit16_17_22_23 = 5;
		columnColorFive16_17_22_23 = 1;
		index++;
		break;

	case 7:
		columnColorOneInit12_27 = 3;
		columnColorOne12_27 = 4;
		columnColorOneInit13_26 = 2;
		columnColorOne13_26 = 9;
		columnColorOneInit14_25 = 2;
		columnColorOne14_25 = 10;
		columnColorOneInit15_24 = 1;
		columnColorOne15_24 = 11;
		columnColorOneInit16_23 = 1;
		columnColorOne16_23 = 10;
		columnColorOneInit17__22 = 1;
		columnColorOne17__22 = 9;

		columnColorTwoInit14_25 = 4;
		columnColorTwo14_25 = 3;
		columnColorTwoInit15_24 = 3;
		columnColorTwo15_24 = 5;
		columnColorTwoInit16_23 = 2;
		columnColorTwo16_23 = 7;
		columnColorTwoInit17__22 = 2;
		columnColorTwo17__22 = 7;

		columnColorThreeInit18_21 = 4;
		columnColorThree18_21 = 3;
		columnColorThreeInit19_20 = 3;
		columnColorThree19_20 = 5;

		columnColorFourInit16_17_22_23 = 6;
		columnColorFour16_17_22_23 = 1;

		columnColorFiveInit16_17_22_23 = 5;
		columnColorFive16_17_22_23 = 1;
		index++;
		break;

	case 8:
		columnColorOneInit12_27 = 3;
		columnColorOne12_27 = 3;
		columnColorOneInit13_26 = 2;
		columnColorOne13_26 = 7;
		columnColorOneInit14_25 = 1;
		columnColorOne14_25 = 9;
		columnColorOneInit15_24 = 1;
		columnColorOne15_24 = 9;
		columnColorOneInit16_23 = 1;
		columnColorOne16_23 = 8;
		columnColorOneInit17__22 = 1;
		columnColorOne17__22 = 7;

		columnColorTwoInit14_25 = 4;
		columnColorTwo14_25 = 2;
		columnColorTwoInit15_24 = 3;
		columnColorTwo15_24 = 4;
		columnColorTwoInit16_23 = 2;
		columnColorTwo16_23 = 5;
		columnColorTwoInit17__22 = 2;
		columnColorTwo17__22 = 5;

		columnColorThreeInit18_21 = 3;
		columnColorThree18_21 = 3;
		columnColorThreeInit19_20 = 2;
		columnColorThree19_20 = 5;

		columnColorFourInit16_17_22_23 = 5;
		columnColorFour16_17_22_23 = 1;

		columnColorFiveInit16_17_22_23 = 4;
		columnColorFive16_17_22_23 = 1;
		index++;
		break;

	case 9:
		columnColorOneInit12_27 = 2;
		columnColorOne12_27 = 3;
		columnColorOneInit13_26 = 1;
		columnColorOne13_26 = 5;
		columnColorOneInit14_25 = 1;
		columnColorOne14_25 = 6;
		columnColorOneInit15_24 = 1;
		columnColorOne15_24 = 6;
		columnColorOneInit16_23 = 1;
		columnColorOne16_23 = 5;
		columnColorOneInit17__22 = 1;
		columnColorOne17__22 = 5;

		columnColorTwoInit14_25 = 3;
		columnColorTwo14_25 = 1;
		columnColorTwoInit15_24 = 2;
		columnColorTwo15_24 = 3;
		columnColorTwoInit16_23 = 1;
		columnColorTwo16_23 = 4;
		columnColorTwoInit17__22 = 1;
		columnColorTwo17__22 = 4;

		columnColorThreeInit18_21 = 3;
		columnColorThree18_21 = 1;
		columnColorThreeInit19_20 = 2;
		columnColorThree19_20 = 3;

		columnColorFourInit16_17_22_23 = 5;
		columnColorFour16_17_22_23 = 0;

		columnColorFiveInit16_17_22_23 = 3;
		columnColorFive16_17_22_23 = 1;
		index++;
		break;

	case 10:
		columnColorOneInit12_27 = 8;
		columnColorOne12_27 = 7;
		columnColorOneInit13_26 = 7;
		columnColorOne13_26 = 14;
		columnColorOneInit14_25 = 7;
		columnColorOne14_25 = 16;
		columnColorOneInit15_24 = 6;
		columnColorOne15_24 = 17;
		columnColorOneInit16_23 = 6;
		columnColorOne16_23 = 15;
		columnColorOneInit17__22 = 5;
		columnColorOne17__22 = 13;

		columnColorTwoInit14_25 = 10;
		columnColorTwo14_25 = 5;
		columnColorTwoInit15_24 = 9;
		columnColorTwo15_24 = 7;
		columnColorTwoInit16_23 = 8;
		columnColorTwo16_23 = 9;
		columnColorTwoInit17__22 = 7;
		columnColorTwo17__22 = 10;

		columnColorThreeInit18_21 = 9;
		columnColorThree18_21 = 7;
		columnColorThreeInit19_20 = 8;
		columnColorThree19_20 = 8;

		columnColorFourInit16_17_22_23 = 11;
		columnColorFour16_17_22_23 = 2;

		columnColorFiveInit16_17_22_23 = 13;
		columnColorFive16_17_22_23 = 2;
		index++;
		break;

	case 11:
		columnColorOneInit12_27 = 17;
		columnColorOne12_27 = 6;
		columnColorOneInit13_26 = 16;
		columnColorOne13_26 = 12;
		columnColorOneInit14_25 = 16;
		columnColorOne14_25 = 13;
		columnColorOneInit15_24 = 15;
		columnColorOne15_24 = 14;
		columnColorOneInit16_23 = 15;
		columnColorOne16_23 = 13;
		columnColorOneInit17__22 = 15;
		columnColorOne17__22 = 11;

		columnColorTwoInit14_25 = 19;
		columnColorTwo14_25 = 4;
		columnColorTwoInit15_24 = 18;
		columnColorTwo15_24 = 6;
		columnColorTwoInit16_23 = 17;
		columnColorTwo16_23 = 8;
		columnColorTwoInit17__22 = 17;
		columnColorTwo17__22 = 8;

		columnColorThreeInit18_21 = 19;
		columnColorThree18_21 = 5;
		columnColorThreeInit19_20 = 18;
		columnColorThree19_20 = 6;

		columnColorFourInit16_17_22_23 = 21;
		columnColorFour16_17_22_23 = 2;

		columnColorFiveInit16_17_22_23 = 20;
		columnColorFive16_17_22_23 = 1;
		index++;
		break;

	case 12:
		columnColorOneInit12_27 = 19;
		columnColorOne12_27 = 5;
		columnColorOneInit13_26 = 18;
		columnColorOne13_26 = 10;
		columnColorOneInit14_25 = 18;
		columnColorOne14_25 = 11;
		columnColorOneInit15_24 = 17;
		columnColorOne15_24 = 12;
		columnColorOneInit16_23 = 17;
		columnColorOne16_23 = 11;
		columnColorOneInit17__22 = 17;
		columnColorOne17__22 = 10;

		columnColorTwoInit14_25 = 20;
		columnColorTwo14_25 = 4;
		columnColorTwoInit15_24 = 19;
		columnColorTwo15_24 = 6;
		columnColorTwoInit16_23 = 19;
		columnColorTwo16_23 = 7;
		columnColorTwoInit17__22 = 18;
		columnColorTwo17__22 = 8;

		columnColorThreeInit18_21 = 20;
		columnColorThree18_21 = 4;
		columnColorThreeInit19_20 = 19;
		columnColorThree19_20 = 6;

		columnColorFourInit16_17_22_23 = 22;
		columnColorFour16_17_22_23 = 2;

		columnColorFiveInit16_17_22_23 = 21;
		columnColorFive16_17_22_23 = 1;
		index++;
		break;

	case 13:
		columnColorOneInit12_27 = 17;
		columnColorOne12_27 = 6;
		columnColorOneInit13_26 = 16;
		columnColorOne13_26 = 12;
		columnColorOneInit14_25 = 16;
		columnColorOne14_25 = 13;
		columnColorOneInit15_24 = 15;
		columnColorOne15_24 = 14;
		columnColorOneInit16_23 = 15;
		columnColorOne16_23 = 13;
		columnColorOneInit17__22 = 15;
		columnColorOne17__22 = 11;

		columnColorTwoInit14_25 = 19;
		columnColorTwo14_25 = 4;
		columnColorTwoInit15_24 = 18;
		columnColorTwo15_24 = 6;
		columnColorTwoInit16_23 = 17;
		columnColorTwo16_23 = 8;
		columnColorTwoInit17__22 = 17;
		columnColorTwo17__22 = 8;

		columnColorThreeInit18_21 = 19;
		columnColorThree18_21 = 5;
		columnColorThreeInit19_20 = 18;
		columnColorThree19_20 = 6;

		columnColorFourInit16_17_22_23 = 21;
		columnColorFour16_17_22_23 = 2;

		columnColorFiveInit16_17_22_23 = 20;
		columnColorFive16_17_22_23 = 1;
		index++;
		break;

	case 14:
		columnColorOneInit12_27 = 8;
		columnColorOne12_27 = 7;
		columnColorOneInit13_26 = 7;
		columnColorOne13_26 = 14;
		columnColorOneInit14_25 = 7;
		columnColorOne14_25 = 16;
		columnColorOneInit15_24 = 6;
		columnColorOne15_24 = 17;
		columnColorOneInit16_23 = 6;
		columnColorOne16_23 = 15;
		columnColorOneInit17__22 = 5;
		columnColorOne17__22 = 13;

		columnColorTwoInit14_25 = 10;
		columnColorTwo14_25 = 5;
		columnColorTwoInit15_24 = 9;
		columnColorTwo15_24 = 7;
		columnColorTwoInit16_23 = 8;
		columnColorTwo16_23 = 9;
		columnColorTwoInit17__22 = 7;
		columnColorTwo17__22 = 10;

		columnColorThreeInit18_21 = 9;
		columnColorThree18_21 = 7;
		columnColorThreeInit19_20 = 8;
		columnColorThree19_20 = 8;

		columnColorFourInit16_17_22_23 = 11;
		columnColorFour16_17_22_23 = 2;

		columnColorFiveInit16_17_22_23 = 13;
		columnColorFive16_17_22_23 = 2;
		index++;
		break;

	case 15:
		columnColorOneInit12_27 = 3;
		columnColorOne12_27 = 4;
		columnColorOneInit13_26 = 2;
		columnColorOne13_26 = 9;
		columnColorOneInit14_25 = 2;
		columnColorOne14_25 = 10;
		columnColorOneInit15_24 = 1;
		columnColorOne15_24 = 11;
		columnColorOneInit16_23 = 1;
		columnColorOne16_23 = 10;
		columnColorOneInit17__22 = 1;
		columnColorOne17__22 = 9;

		columnColorTwoInit14_25 = 4;
		columnColorTwo14_25 = 3;
		columnColorTwoInit15_24 = 3;
		columnColorTwo15_24 = 5;
		columnColorTwoInit16_23 = 2;
		columnColorTwo16_23 = 7;
		columnColorTwoInit17__22 = 2;
		columnColorTwo17__22 = 7;

		columnColorThreeInit18_21 = 4;
		columnColorThree18_21 = 3;
		columnColorThreeInit19_20 = 3;
		columnColorThree19_20 = 5;

		columnColorFourInit16_17_22_23 = 6;
		columnColorFour16_17_22_23 = 1;

		columnColorFiveInit16_17_22_23 = 5;
		columnColorFive16_17_22_23 = 1;
		index++;
		break;

	case 16:
		columnColorOneInit12_27 = 3;
		columnColorOne12_27 = 3;
		columnColorOneInit13_26 = 2;
		columnColorOne13_26 = 7;
		columnColorOneInit14_25 = 1;
		columnColorOne14_25 = 9;
		columnColorOneInit15_24 = 1;
		columnColorOne15_24 = 9;
		columnColorOneInit16_23 = 1;
		columnColorOne16_23 = 8;
		columnColorOneInit17__22 = 1;
		columnColorOne17__22 = 7;

		columnColorTwoInit14_25 = 4;
		columnColorTwo14_25 = 2;
		columnColorTwoInit15_24 = 3;
		columnColorTwo15_24 = 4;
		columnColorTwoInit16_23 = 2;
		columnColorTwo16_23 = 5;
		columnColorTwoInit17__22 = 2;
		columnColorTwo17__22 = 5;

		columnColorThreeInit18_21 = 3;
		columnColorThree18_21 = 3;
		columnColorThreeInit19_20 = 2;
		columnColorThree19_20 = 5;

		columnColorFourInit16_17_22_23 = 5;
		columnColorFour16_17_22_23 = 1;

		columnColorFiveInit16_17_22_23 = 4;
		columnColorFive16_17_22_23 = 1;
		index++;
		break;

	case 17:
		columnColorOneInit12_27 = 3;
		columnColorOne12_27 = 4;
		columnColorOneInit13_26 = 2;
		columnColorOne13_26 = 9;
		columnColorOneInit14_25 = 2;
		columnColorOne14_25 = 10;
		columnColorOneInit15_24 = 1;
		columnColorOne15_24 = 11;
		columnColorOneInit16_23 = 1;
		columnColorOne16_23 = 10;
		columnColorOneInit17__22 = 1;
		columnColorOne17__22 = 9;

		columnColorTwoInit14_25 = 4;
		columnColorTwo14_25 = 3;
		columnColorTwoInit15_24 = 3;
		columnColorTwo15_24 = 5;
		columnColorTwoInit16_23 = 2;
		columnColorTwo16_23 = 7;
		columnColorTwoInit17__22 = 2;
		columnColorTwo17__22 = 7;

		columnColorThreeInit18_21 = 4;
		columnColorThree18_21 = 3;
		columnColorThreeInit19_20 = 3;
		columnColorThree19_20 = 5;

		columnColorFourInit16_17_22_23 = 6;
		columnColorFour16_17_22_23 = 1;

		columnColorFiveInit16_17_22_23 = 5;
		columnColorFive16_17_22_23 = 1;
		index++;
		break;

	case 18:
		columnColorOneInit12_27 = 3;
		columnColorOne12_27 = 6;
		columnColorOneInit13_26 = 2;
		columnColorOne13_26 = 11;
		columnColorOneInit14_25 = 2;
		columnColorOne14_25 = 12;
		columnColorOneInit15_24 = 1;
		columnColorOne15_24 = 13;
		columnColorOneInit16_23 = 1;
		columnColorOne16_23 = 12;
		columnColorOneInit17__22 = 1;
		columnColorOne17__22 = 10;

		columnColorTwoInit14_25 = 5;
		columnColorTwo14_25 = 3;
		columnColorTwoInit15_24 = 4;
		columnColorTwo15_24 = 5;
		columnColorTwoInit16_23 = 3;
		columnColorTwo16_23 = 7;
		columnColorTwoInit17__22 = 2;
		columnColorTwo17__22 = 8;

		columnColorThreeInit18_21 = 4;
		columnColorThree18_21 = 4;
		columnColorThreeInit19_20 = 3;
		columnColorThree19_20 = 6;

		columnColorFourInit16_17_22_23 = 6;
		columnColorFour16_17_22_23 = 2;

		columnColorFiveInit16_17_22_23 = 5;
		columnColorFive16_17_22_23 = 1;
		index = 0;
		break;

	default:
		index = 0;
		break;
	}

	glBegin(GL_QUADS);
	glColor3f(0, 0, 0);

	glVertex2f(12, columnColorOneInit12_27);
	glVertex2f(13, columnColorOneInit12_27);
	glVertex2f(13, columnColorOneInit12_27 + columnColorOne12_27);
	glVertex2f(12, columnColorOneInit12_27 + columnColorOne12_27);

	glVertex2f(27, columnColorOneInit12_27);
	glVertex2f(28, columnColorOneInit12_27);
	glVertex2f(28, columnColorOneInit12_27 + columnColorOne12_27);
	glVertex2f(27, columnColorOneInit12_27 + columnColorOne12_27);

	glVertex2f(13, columnColorOneInit13_26);
	glVertex2f(14, columnColorOneInit13_26);
	glVertex2f(14, columnColorOneInit13_26 + columnColorOne13_26);
	glVertex2f(13, columnColorOneInit13_26 + columnColorOne13_26);

	glVertex2f(26, columnColorOneInit13_26);
	glVertex2f(27, columnColorOneInit13_26);
	glVertex2f(27, columnColorOneInit13_26 + columnColorOne13_26);
	glVertex2f(26, columnColorOneInit13_26 + columnColorOne13_26);

	glVertex2f(14, columnColorOneInit14_25);
	glVertex2f(15, columnColorOneInit14_25);
	glVertex2f(15, columnColorOneInit14_25 + columnColorOne14_25);
	glVertex2f(14, columnColorOneInit14_25 + columnColorOne14_25);

	glVertex2f(25, columnColorOneInit14_25);
	glVertex2f(26, columnColorOneInit14_25);
	glVertex2f(26, columnColorOneInit14_25 + columnColorOne14_25);
	glVertex2f(25, columnColorOneInit14_25 + columnColorOne14_25);

	glVertex2f(15, columnColorOneInit15_24);
	glVertex2f(16, columnColorOneInit15_24);
	glVertex2f(16, columnColorOneInit15_24 + columnColorOne15_24);
	glVertex2f(15, columnColorOneInit15_24 + columnColorOne15_24);

	glVertex2f(24, columnColorOneInit15_24);
	glVertex2f(25, columnColorOneInit15_24);
	glVertex2f(25, columnColorOneInit15_24 + columnColorOne15_24);
	glVertex2f(24, columnColorOneInit15_24 + columnColorOne15_24);

	glVertex2f(16, columnColorOneInit16_23);
	glVertex2f(17, columnColorOneInit16_23);
	glVertex2f(17, columnColorOneInit16_23 + columnColorOne16_23);
	glVertex2f(16, columnColorOneInit16_23 + columnColorOne16_23);

	glVertex2f(23, columnColorOneInit16_23);
	glVertex2f(24, columnColorOneInit16_23);
	glVertex2f(24, columnColorOneInit16_23 + columnColorOne16_23);
	glVertex2f(23, columnColorOneInit16_23 + columnColorOne16_23);

	glVertex2f(17, columnColorOneInit17__22);
	glVertex2f(23, columnColorOneInit17__22);
	glVertex2f(23, columnColorOneInit17__22 + columnColorOne17__22);
	glVertex2f(17, columnColorOneInit17__22 + columnColorOne17__22);

	glColor3f(0.094, 0.094, 0.094);

	glVertex2f(14, columnColorTwoInit14_25);
	glVertex2f(15, columnColorTwoInit14_25);
	glVertex2f(15, columnColorTwoInit14_25 + columnColorTwo14_25);
	glVertex2f(14, columnColorTwoInit14_25 + columnColorTwo14_25);

	glVertex2f(25, columnColorTwoInit14_25);
	glVertex2f(26, columnColorTwoInit14_25);
	glVertex2f(26, columnColorTwoInit14_25 + columnColorTwo14_25);
	glVertex2f(25, columnColorTwoInit14_25 + columnColorTwo14_25);

	glVertex2f(15, columnColorTwoInit15_24);
	glVertex2f(16, columnColorTwoInit15_24);
	glVertex2f(16, columnColorTwoInit15_24 + columnColorTwo15_24);
	glVertex2f(15, columnColorTwoInit15_24 + columnColorTwo15_24);

	glVertex2f(24, columnColorTwoInit15_24);
	glVertex2f(25, columnColorTwoInit15_24);
	glVertex2f(25, columnColorTwoInit15_24 + columnColorTwo15_24);
	glVertex2f(24, columnColorTwoInit15_24 + columnColorTwo15_24);

	glVertex2f(16, columnColorTwoInit16_23);
	glVertex2f(17, columnColorTwoInit16_23);
	glVertex2f(17, columnColorTwoInit16_23 + columnColorTwo16_23);
	glVertex2f(16, columnColorTwoInit16_23 + columnColorTwo16_23);

	glVertex2f(23, columnColorTwoInit16_23);
	glVertex2f(24, columnColorTwoInit16_23);
	glVertex2f(24, columnColorTwoInit16_23 + columnColorTwo16_23);
	glVertex2f(23, columnColorTwoInit16_23 + columnColorTwo16_23);

	glVertex2f(17, columnColorTwoInit17__22);
	glVertex2f(23, columnColorTwoInit17__22);
	glVertex2f(23, columnColorTwoInit17__22 + columnColorTwo17__22);
	glVertex2f(17, columnColorTwoInit17__22 + columnColorTwo17__22);

	glColor3f(0.145, 0.145, 0.145);

	glVertex2f(18, columnColorThreeInit18_21);
	glVertex2f(19, columnColorThreeInit18_21);
	glVertex2f(19, columnColorThreeInit18_21 + columnColorThree18_21);
	glVertex2f(18, columnColorThreeInit18_21 + columnColorThree18_21);

	glVertex2f(21, columnColorThreeInit18_21);
	glVertex2f(22, columnColorThreeInit18_21);
	glVertex2f(22, columnColorThreeInit18_21 + columnColorThree18_21);
	glVertex2f(21, columnColorThreeInit18_21 + columnColorThree18_21);

	glVertex2f(19, columnColorThreeInit19_20);
	glVertex2f(21, columnColorThreeInit19_20);
	glVertex2f(21, columnColorThreeInit19_20 + columnColorThree19_20);
	glVertex2f(19, columnColorThreeInit19_20 + columnColorThree19_20);

	glColor3f(1, 0.7216, 0.0);

	glVertex2f(16, columnColorFourInit16_17_22_23);
	glVertex2f(18, columnColorFourInit16_17_22_23);
	glVertex2f(18, columnColorFourInit16_17_22_23 + columnColorFour16_17_22_23);
	glVertex2f(16, columnColorFourInit16_17_22_23 + columnColorFour16_17_22_23);

	glVertex2f(22, columnColorFourInit16_17_22_23);
	glVertex2f(24, columnColorFourInit16_17_22_23);
	glVertex2f(24, columnColorFourInit16_17_22_23 + columnColorFour16_17_22_23);
	glVertex2f(22, columnColorFourInit16_17_22_23 + columnColorFour16_17_22_23);

	glColor3f(0.969, 0.824, 0.455);

	glVertex2f(16, columnColorFiveInit16_17_22_23);
	glVertex2f(18, columnColorFiveInit16_17_22_23);
	glVertex2f(18, columnColorFiveInit16_17_22_23 + columnColorFive16_17_22_23);
	glVertex2f(16, columnColorFiveInit16_17_22_23 + columnColorFive16_17_22_23);

	glVertex2f(22, columnColorFiveInit16_17_22_23);
	glVertex2f(24, columnColorFiveInit16_17_22_23);
	glVertex2f(24, columnColorFiveInit16_17_22_23 + columnColorFive16_17_22_23);
	glVertex2f(22, columnColorFiveInit16_17_22_23 + columnColorFive16_17_22_23);

	glEnd();
}