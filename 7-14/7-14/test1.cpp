#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<string.h>

//goto���������Ƕ��
//shutdown -s -t 60�ػ�ָ�� shutdown -a ȡ���ػ�
//system()-ִ��ϵͳ����
int main()
{
	char input[20] = {};
	system("shutdown -s -t 60");
	while (1)
	{
		printf("��ע�⣬���ĵ��Խ���60s�ڹػ������������룺����������ȡ���ػ�\n");
		scanf("%s", input);
		if (strcmp(input, "������") == 0)
		{
			system("shutdown -a");
			printf("����������ȡ���ػ�\n");
			break;
		}
	}
		return 0;
}








//��������Ϸ
//1.��������һ�������2.������
//void menu()
//{
//	printf("***************************\n");
//	printf("****** 1.play 0.exit ******\n");
//	printf("***************************\n");
//}
//void game()
//{
//	int i = rand() % 100+1, a = 0;
//	while (1)
//	{
//		printf("�������:\n");
//		scanf("%d", &a);
//		if (i > a)
//			printf("��С��\n");
//		else if (i < a)
//			printf("�´���\n");
//		else
//		{
//			printf("�¶���");
//			break;
//		}
//	}
//
//}
////ʱ���
//int main()
//{
//	int input = 0;
//	srand((unsigned int) time(NULL));//������������,��ò�Ҫ����ѭ�����ڲ���һ����������һ���ͺ�
//	do
//	{
//		menu();
//		printf("��ѡ��>:");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			game();		
//			break; 
//		case 0:
//			printf("�˳���Ϸ");
//			break;
//		default:
//			printf("�����������������\n");
//			break;
//		}
//	}while (input);
//	
//	return 0;
//}

//99�˷��ھ���
//int main()
//{
//	int i = 0, j = 0, c = 0;
//	for (i = 1; i <= 9; i++)
//	{
//		for (j = 1; j <= i; j++)
//		{
//			c = i * j;
//			printf("%d*%d=%-2d ", i, j, c);//-2d-���뷽ʽ
//		}
//		printf("\n");
//	}
//	//1*1=1
//	//2*1=2 2*2=4
//	//3*1=3 3*2=6 3*3=9
//	//
//	return 0;
//}