#define _CRT_SECURE_NO_WARNINGS
#include"game.h"

void initboard(char board[DIF_ROWS][DIF_COLS], int rows, int cols, char set)
{
	int i = 0;
	for (i = 0; i < rows; i++)
	{
		int j = 0;
		for (j = 0; j < cols; j++)
		{
			board[i][j] = set;
		}
	}
}

void setmines(char board[DIF_ROWS][DIF_COLS], int row, int col,int count)//bug待解决
{
	int i = 0;
	i = count;
	while(i)
	{
		int x = rand() % row +1;//bug?
		int y = rand() % col +1;
		if (board[x][y] == '0')//不重复布置雷
		{
			board[x][y] = '1';
			i--;
		}
	
	}

	
}

void displayboard(char board[DIF_ROWS][DIF_COLS], int row, int col)
{
	int a = 0;
	int i = 0;
	int j = 0;
	printf("————--------扫雷--------————\n");
	for (a = 0; a <= col; a++)
	{
		printf("%2d ", a);
	}
	printf("\n");
	for (i = 1; i <= row; i++)
	{
		int j = 1;
		printf("%2d ", i);
		for (j = 0; j < col; j++)
		{
			printf("%2c ", board[i][j]);
		}
		printf("\n");
	}
	printf("————--------扫雷--------————\n");
}

int getminenum(char mine[DIF_ROWS][DIF_COLS], int x, int y)
{
	int num = 0;
	num = mine[x - 1][y - 1] + mine[x - 1][y] + mine[x - 1][y + 1] + mine[x][y - 1] + mine[x][y + 1] + mine[x + 1][y - 1] + mine[x + 1][y] + mine[x + 1][y + 1]-8*'0';
	return num;
}

void spread(char mine[DIF_ROWS][DIF_COLS], char show[DIF_ROWS][DIF_COLS], int x, int y,int row,int col)
{
	int num = 0;
	num = getminenum(mine,x,y);//雷的个数（整形）
	if (num == '0'&&x>=1&&x<=row&&y>=1&&y<=col)
	{
		show[x][y] = ' ';

	}
	else
	{
		show[x][y] = num+'0';//整成字符型
	}
}

void findmine(char mine[DIF_ROWS][DIF_COLS], char show[DIF_ROWS][DIF_COLS], int row, int col)
{
	while (1)
	{
		int x = 0, y = 0;
		printf("请输入要排查的坐标\n");
		scanf("%d %d", &x, &y);
		if (x >= 1 && x <= row && y >= 1 && y <= col)
		{
			if (show[x][y] != '*')
			{
				printf("该坐标已排查，请重新输入\n");
				continue;
			}
			else if (mine[x][y] == '1')
			{
				printf("很遗憾，您踩到雷，被炸死了\n");
				displayboard(mine, row, col);
				break;
			}
			else 
			{
				spread(mine,show,x,y,row,col);
				//
			}
		}
		else
		{
			printf("输入坐标非法，请重新输入\n");
		}
	}
}