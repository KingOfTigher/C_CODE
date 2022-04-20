#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include"game.h"
#include<stdlib.h>
#include<time.h>
void  BoardInit(char  board[ROWS][COLS], int  rows, int  cols, char  set)
{
	int  i = 0;
	int  j = 0;
	for (i = 0; i < rows; i++)
	{
		for (j = 0; j < cols; j++)
		{
			board[i][j] = set;
		}
	}
}

void  Display(char  board[ROWS][COLS], int  rows, int  cols)
{
	int  i = 1;
	int  j = 1;
	for (j = 0;j <= cols;j++)
	{
		printf(" %d", j);
	}
	printf("\n");
	for (i = 1;i <= rows;i++)
	{
		printf(" %d", i);
		for (j = 1;j <= cols;j++)
		{
			printf(" %c",board[i][j]);
		}
		printf("\n");
	}
}

void  Setmine(char  board[ROWS][COLS], int  row, int  col)
{
	int  count = EASY;
	//while (count)
	//{
	//	int  x = rand() % row + 1;
	//	int  y = rand() % col + 1;
	//	if (board[x][y] == '0')
	//	{
	//		board[x][y] = '1';
	//		count--;
	//	}
	//}
}