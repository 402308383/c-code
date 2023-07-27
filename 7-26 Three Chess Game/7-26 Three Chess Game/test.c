#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include"game.h"

void game()
{
	char board[ROW][COL] = {0};
	char ret = 0;
	initboard(board, ROW, COL);//初始化棋盘-全部放空格
	displayboard(board, ROW, COL);//打印棋盘
	//下棋
	while (1)
	{
		//玩家下棋，电脑下棋
		playermove(board,ROW,COL);
		displayboard(board, ROW, COL);//打印棋盘
		 ret=iswin(board, ROW, COL);									//判断玩家是否赢
		 if (ret != 'C')
		 {
			 break;
		 }
		cpmove(board, ROW, COL);
		displayboard(board, ROW, COL);//打印棋盘
		ret=iswin(board, ROW, COL);								//判断电脑是否赢
		 if (ret != 'C')
		 {
			 break;
		 }
	}
	if(ret=='*')
		{
		printf("玩家赢\n");
		}
	else if (ret == 'O')
	{
		printf("电脑赢\n");
	}
	else
	{
		printf("平局\n");
	}
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
	srand((unsigned int) time(NULL));
	test();
	return 0;
}