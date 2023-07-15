#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<string.h>

//goto可跳出多层嵌套
//shutdown -s -t 60关机指令 shutdown -a 取消关机
//system()-执行系统命令
int main()
{
	char input[20] = {};
	system("shutdown -s -t 60");
	while (1)
	{
		printf("请注意，您的电脑将在60s内关机，您可以输入：“我是猪”来取消关机\n");
		scanf("%s", input);
		if (strcmp(input, "我是猪") == 0)
		{
			system("shutdown -a");
			printf("真听话，已取消关机\n");
			break;
		}
	}
		return 0;
}








//猜数字游戏
//1.电脑生成一个随机数2.猜数字
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
//		printf("请猜数字:\n");
//		scanf("%d", &a);
//		if (i > a)
//			printf("猜小了\n");
//		else if (i < a)
//			printf("猜大了\n");
//		else
//		{
//			printf("猜对了");
//			break;
//		}
//	}
//
//}
////时间戳
//int main()
//{
//	int input = 0;
//	srand((unsigned int) time(NULL));//生成随机数起点,最好不要放在循环体内部，一个主函数放一个就好
//	do
//	{
//		menu();
//		printf("请选择>:");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			game();		
//			break; 
//		case 0:
//			printf("退出游戏");
//			break;
//		default:
//			printf("输入错误，请重新输入\n");
//			break;
//		}
//	}while (input);
//	
//	return 0;
//}

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