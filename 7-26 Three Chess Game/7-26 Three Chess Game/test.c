#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include"game.h"

void game()
{
	char board[ROW][COL] = {0};
	initboard(board, ROW, COL);//初始化棋盘-全部放空格
	displayboard(board,ROW,COL);	

}

void menu()
{
	printf("***************************\n");
	printf("*******1.play 0. exit *****\n");
	printf("***************************\n");
}

void test()
{
	int i = 0;
	do 
	{
		menu();
		printf("请选择:>(0/1)");
		scanf("%d", &i);
		switch (i)
		{
		case 1:
		{
			game();
			break;
		}
		case 0:
		{
			printf("退出游戏\n");
			break;
		}
		default:
		{
			printf("输入错误，请重新输入\n");
		}
		}
	} while (i);
}

int main()
{
	test();
	return 0;
}