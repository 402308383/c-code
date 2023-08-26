#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//int Add(int x, int y)
//{
//	return x + y;
//}
//int Sub(int x, int y)
//{
//	return x - y;
//}
//int Mul(int x, int y)
//{
//	return x * y;
//}
//int Div(int x, int y)
//{
//	return x / y;
//}
//
//void menu()
//{
//	printf("*************************\n");
//	printf("****** 1,add  2.sub *****\n");
//	printf("****** 3.mul  4.div *****\n");
//	printf("******    0.exit    *****\n");
//
//}
//
//int main()
//{
//	int input = 0;
//	int x = 0;
//	int y = 0;
//	int ret = 0;
//	do
//	{
//		menu();
//		printf("请选择>;\n");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//		{
//			printf("请输入两个操作数：>");
//			scanf("%d %d ", &x, &y);
//			ret = Add(x, y);
//			printf("结果是%d \n", ret);
//			break;
//		}
//		case 2:
//		{
//			printf("请输入两个操作数：>");
//			scanf("%d %d ", &x, &y);
//			ret = Sub(x, y);
//			printf("结果是%d \n", ret);
//			break;
//		}
//		case 3:
//		{
//			printf("请输入两个操作数：>");
//			scanf("%d %d ", &x, &y);
//			ret = Mul(x, y);
//			printf("结果是%d \n", ret);
//			break;
//		}
//		case 4:
//		{
//			printf("请输入两个操作数：>");
//			scanf("%d %d ", &x, &y);
//			ret = Div(x, y);
//			printf("结果是%d \n", ret);
//			break;
//		}
//		case 0:
//		{
//			printf("退出程序\n");
//			break;
//		}
//		default:
//		{
//			printf("输入非法，请重新输入\n");
//			break;
//		}
//		}
//		
//	} 
//	while (input);
//	
//	return 0;
//
//}
//double Ave(double x, double y);
//
//int main()
//{
//	double a = 0, b = 0, ave = 0;
//	scanf("%lf %lf", &a, &b);
//	ave = Ave(a, b);
//	return 0;
//}
//
//double Ave(double x, double y)
//{
//	//
//}