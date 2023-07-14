#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//猜数字游戏
//1.电脑生成一个随机数2.猜数字
void menu()
{
	printf("*****************************\n");
	printf("******* 1.play 0.exit *******\n");
	printf("*****************************\n");
}

//时间戳
int main()
{
	int input = 0;


	do
	{
		menu();
		printf("请选择>:");
	}while ();
	
	return 0;
}













//99乘法口诀表
//int main()
//{
//	int i = 0, j = 0, c = 0;
//	for (i = 1; i <= 9; i++)
//	{
//		for (j = 1; j <= i; j++)
//		{
//			c = i * j;
//			printf("%d*%d=%-2d ", i, j, c);//-2d-对齐方式
//		}
//		printf("\n");
//	}
//	//1*1=1
//	//2*1=2 2*2=4
//	//3*1=3 3*2=6 3*3=9
//	//
//	return 0;
//}