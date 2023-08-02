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

void setmines(char board[DIF_ROWS][DIF_COLS], int row, int col,int count)//bug�����
{
	int i = 0;
	i = count;
	while(i)
	{
		int x = rand() % row +1;//bug?
		int y = rand() % col +1;
		if (board[x][y] == '0')//���ظ�������
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
	printf("��������--------ɨ��--------��������\n");
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
	printf("��������--------ɨ��--------��������\n");
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
	num = getminenum(mine,x,y);//�׵ĸ��������Σ�
	if (num == '0'&&x>=1&&x<=row&&y>=1&&y<=col)
	{
		show[x][y] = ' ';

	}
	else
	{
		show[x][y] = num+'0';//�����ַ���
	}
}

void findmine(char mine[DIF_ROWS][DIF_COLS], char show[DIF_ROWS][DIF_COLS], int row, int col)
{
	while (1)
	{
		int x = 0, y = 0;
		printf("������Ҫ�Ų������\n");
		scanf("%d %d", &x, &y);
		if (x >= 1 && x <= row && y >= 1 && y <= col)
		{
			if (show[x][y] != '*')
			{
				printf("���������Ų飬����������\n");
				continue;
			}
			else if (mine[x][y] == '1')
			{
				printf("���ź������ȵ��ף���ը����\n");
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
			printf("��������Ƿ�������������\n");
		}
	}
}