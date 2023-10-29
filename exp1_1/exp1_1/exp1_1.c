#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>
//int is_prime(int i)
//{
//	int j = 2;
//	for (; j <= sqrt(i); j++)
//	{
//		if (i % j == 0)
//			return 0;
//	}return 1;
//}
//
//int main()
//{
//	int a = 0, b = 0;
//	int i = 0;
//	int count = 0;
//	scanf("%d %d", &a, &b);
//	for (i = a; i <= b; i++)
//	{
//		if (is_prime(i))
//		{
//			printf("%d ", i);
//			count++;
//			if (count % 5 == 0 && count != 0)
//			{
//				printf("\n");
//			}
//		}
//		
//		
//	}
//	return 0;
//}

//利用循环语句（while、或for或do…while）计算求和问题：
//int main() {
//    int i;
//    double a = 2, b = 1, sign = 1, item, s = 0;
//    for (i = 1; i <= 1000; i++) {
//        item = sign * a / b;
//        s += item;
//        sign = -sign;
//        a = a + b;
//        b = a - b;
//    }
//    printf("S=%f\n", s);
//    return 0;
//}
//编程序exp2_6.c，读入3个double型变量a, b, c的值，用if语句判断它们能否构成三角形，
//如果能构成三角形又是构成的何种三角形（等边三角形、等腰三角形、直角三角形、等腰直角三角形、一般三角形）？
//输出各种情况下判断的结果。（建议参考实验指导教材的流程图4.20，先对a, b, c进行由小到大的排序可以简化代码
//int main()
//{
//	double a = 0, b = 0, c = 0,edge1,edge2,edge3;
//	scanf("%lf %lf %lf", &a, &b, &c);
//	edge1 = a > b ? (a > c ? a : c) : (b > c ? b:c);
//	edge3 = a < b ? (a<c?a:c) : (b<c?b:c);
//	edge2 = a + b + c - edge1 - edge3;
//	//double test = fabs(edge1 * edge1 + edge2 * edge2 - edge3 * edge3);
//	if (edge3 <= 0 || edge2 + edge3<=edge1 || edge1 - edge3>=edge2 || edge1 - edge2 >= edge3)
//	{
//		printf("不能构成三角形\n");
//	}
//	else 
//	{
//		if (fabs(edge1 - edge3) < 1e-1)
//			printf("正三角形\n");
//		else if (fabs(edge1 - edge2) < 1e-1 || fabs(edge2 - edge3) < 1e-1)
//		{
//			if (fabs(edge3 * edge3 + edge2 * edge2 - edge1 * edge1) < 1e-1)
//			{
//				printf("等腰直角三角形\n");
//			}
//			else
//				printf("等腰三角形\n");
//
//		}
//		else if (fabs(edge3 * edge3 + edge2 * edge2 - edge1 * edge1) < 1e-1)
//		{
//			printf("直角三角形\n");
//		}
//		else
//			printf("一般三角形\n");
//	}
//
//	return 0;
//}
//从键盘输入两个整数a和b，计算并输出他们的和sum、差diference、积product、商quotient和平均值ave（注意ave和商的定义类型）。
//具体要求：
//① 编辑、编译、连接并运行程序，观察运行结果。
//② 观察exp1_1.obj、exp1_1.exe、exp1_1.c所在的文件夹。
//③ 对变量quotient分别定义为int和double型，在printf函数中正确使用格式串，当读入的两个整数为4和5时，观察运行结果并分析原因，思考怎么使变量quotient更准确。
//④ 对变量ave分别定义为int和double型，在printf函数中正确使用格式串，当读入的两个整数为4和5时，观察不同的运行结果并分析原因。
//⑤ 单步跟踪程序（用F10键），观察每一步程序运行时各个变量的变化情况。
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//	printf("sum=%d, dif=%d, pro=%d, quo=%lf, ave=%lf\n", a + b, a - b, a * b, (double)a / b, (a + b) / 2.0);
//	return 0;
//}