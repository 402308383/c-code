#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//��������Ϸ
//1.��������һ�������2.������
void menu()
{
	printf("*****************************\n");
	printf("******* 1.play 0.exit *******\n");
	printf("*****************************\n");
}

//ʱ���
int main()
{
	int input = 0;


	do
	{
		menu();
		printf("��ѡ��>:");
	}while ();
	
	return 0;
}













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