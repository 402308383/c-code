#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include"game.h"

void game()
{
	char board[ROW][COL] = {0};
	initboard(board, ROW, COL);//��ʼ������-ȫ���ſո�
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
		printf("��ѡ��:>(0/1)");
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
			printf("�˳���Ϸ\n");
			break;
		}
		default:
		{
			printf("�����������������\n");
		}
		}
	} while (i);
}

int main()
{
	test();
	return 0;
}