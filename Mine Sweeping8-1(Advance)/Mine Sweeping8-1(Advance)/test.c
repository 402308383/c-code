#define _CRT_SECURE_NO_WARNINGS
#include"game.h"

int COLS = 0;//ȫ�ֱ�����ò�����.h�ļ��У�����Ҫʹ��extern�����ض��壬�Ե�ӷ�ס�
int ROWS = 0;
int COL = 0;
int ROW = 0;
int count = 0;
void menu()
{
	printf("**************************\n");
	printf("*******1.play 0.exit******\n");
	printf("**************************\n");
}

void game()
{


	char mine[DIF_ROWS][DIF_COLS] = { 0 };
	char show[DIF_ROWS][DIF_COLS] = { 0 };
	initboard(mine, ROWS, COLS, '0');
	initboard(show, ROWS, COLS, '*');
	setmines(mine, ROW, COL, count);
	//displayboard(mine, ROW, COL);//���ܽ�����ʾ
	displayboard(show, ROW, COL);
	findmine(mine,show,ROW,COL,count);


}
void LEVEL()
{
	int level=0;
	int input = 0;
	printf("��ѡ���Ѷȣ�1/2/3��:\n");
	printf("1.���Ѷ�");
	printf("2.��ͨ�Ѷ�");
	printf("3.����Ժ�Ѷ�");
	printf("0.EXIT\n");
	do
	{
		scanf("%d", &level);
		switch (level)
		{
		case 1:
		{
			ROW = EASY_ROW;
			COL = EASY_COL;
			ROWS = EASY_ROWS;
			COLS = EASY_COLS;
			count = EASY_COUNT;
			game();
			input = 0;
			system("cls");
			break;
		}
		case 2:
		{
			ROW = MID_ROW;
			COL = MID_COL;
			ROWS = MID_ROWS;
			COLS = MID_COLS;
			count = MID_COUNT;
			game();
			input = 0;
			system("cls");
			break;
		}
		case 3:
		{
			ROW = DIF_ROW;
			COL = DIF_COL;
			ROWS = DIF_ROWS;
			COLS = DIF_COLS;
			count = DIF_COUNT;
			game();
			input = 0;
			system("cls");
			break;
		}
		case 0:
		{
			printf("�˳�\n");
			break;
			input = 0;
		}
		default:
		{
			printf("ѡ��Ƿ���������ѡ��\n");
			break;
			input = 1;
		}
		}
	} while (input);
}


int main()
{
	srand((unsigned int)time(NULL));
	int input = 0;
	do 
	{
		menu();
		printf("�����루0/1��\n");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
		{
			LEVEL();
			break;
		}
		case 0:
		{
			printf("�˳���Ϸ\n");
			break;
		}
		default:
		{
			printf("����Ƿ�������������\n");
			break;
		}
		}
	} while (input);
}