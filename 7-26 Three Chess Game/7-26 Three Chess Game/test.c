#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include"game.h"

void game()
{
	char board[ROW][COL] = {0};
	char ret = 0;
	initboard(board, ROW, COL);//��ʼ������-ȫ���ſո�
	displayboard(board, ROW, COL);//��ӡ����
	//����
	while (1)
	{
		//������壬��������
		playermove(board,ROW,COL);
		displayboard(board, ROW, COL);//��ӡ����
		 ret=iswin(board, ROW, COL);									//�ж�����Ƿ�Ӯ
		 if (ret != 'C')
		 {
			 break;
		 }
		cpmove(board, ROW, COL);
		displayboard(board, ROW, COL);//��ӡ����
		ret=iswin(board, ROW, COL);								//�жϵ����Ƿ�Ӯ
		 if (ret != 'C')
		 {
			 break;
		 }
	}
	if(ret=='*')
		{
		printf("���Ӯ\n");
		}
	else if (ret == 'O')
	{
		printf("����Ӯ\n");
	}
	else
	{
		printf("ƽ��\n");
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
	srand((unsigned int) time(NULL));
	test();
	return 0;
}