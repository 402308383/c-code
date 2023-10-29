#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>
//用调试器观察程序exp4_8.c的运行过程，并记录各种变量在每一步执行时的变化情况，在表格中填写每一个跟踪步每个变量对应的值。程序代码如下。
//int a = 1;
//int f(int a)
//{
//    auto int b = 2;
//    static int c = 3;
//    a = a + 1;
//    b = b + 1;
//    c = c + 1;
//    return (a + b + c);
//}
//
//int main()
//{
//    int i;
//    for (i = 0; i < 3; i++)
//    {
//        a = a + 2;
//        printf("%d \n", f(a));
//    }
//    return 0;
//}
//编程序exp4_5.c，验证歌德巴赫猜想：2000以内的正偶数（不包括2）都能够分解为两个质数之和。
//（算法提示：将整数分解为两个整数，然后判断它们是否均为质数。若是，则满足题意并输出；否则重新进行分解和判断。
//其中，判断一个整数是否为质数采用函数实现
//。每个偶数只要得到一种分解就停止，不必要求出该偶数的所有质数和组合）。
//int is_prime(int i)
//{
//	int j = 2;
//	if (i == 1)
//		return 0;
//	else
//	{
//		for (j = 2; j <= sqrt(i); j++)
//		{
//			if (i % j == 0)
//				return 0;
//		}
//		return 1;
//	}
//}
//
//int main()
//{
//	int i = 3;
//	int count = 0;
//	for (i = 3; i <= 2000; i++)
//	{
//		if (i % 2 == 1)
//		{
//			i++;
//		}
//		int a = 2;
//		int b = 0;
//		for (a=2; a < i; a++)
//		{
//			b = i - a;
//			if (is_prime(a) && is_prime(b))
//			{
//				printf("%4d =%4d +%4d ",i,a,b);
//				count++;
//				if (count % 4 == 0 && count!= 0)
//				{
//					printf("\n");
//				}
//				break;
//			}
//		}
//		
//	}
//	return 0;
//}
//void DrawTriangle(int n, char c) {
//    int i, j;
//    for (i = 1; i <= n; i++) {
//        for (j = 1; j <= n - i; j++)
//            printf(" ");
//        for (j = 1; j <= 2 * i - 1; j++)
//            printf("%c", c);
//        printf("\n");
//    }
//}
//
//int main() {
//    //DrawTriangle(5, '*');
//    //DrawTriangle(10, '#');
//    DrawTriangle(100, '#');//控制输出数量？
//    return 0;
//}
