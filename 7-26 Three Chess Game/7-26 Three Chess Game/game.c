#define _CRT_SECURE_NO_WARNINGS
#include"game.h"
#include<stdio.h>
void initboard(char board[ROW][COL], int row, int col)
{
	int i = 0, j = 0;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			board[i][j] = ' ';
		}
	}
}
void displayboard(char board[ROW][COL], int row, int col)
{
	int i = 0;
	for (i = 0; i < row; i++)
	{
		//打印一行数据
		//打印分割行
		int j = 0;
		for (j = 0; j < col; j++)
		{
			printf(" %c ", board[i][j]);
			if (j < col - 1)
			{
				printf("|");
			}
		}
		printf("\n");
			if (i < row - 1)
			{
				for (j = 0; j < col; j++)
				{
					printf("---");
					if (j < col - 1)
					{
						printf("|");
					}
				}
				printf("\n");
			}
		}
}

