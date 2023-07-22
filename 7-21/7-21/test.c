#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include <stdio.h>

//求第n个斐波那契数
//用递归解决效率极低
//汉诺塔问题，青蛙跳台阶
//int fb(int n)
//{
//	if (n <= 2)
//		return 1;
//	else
//		return fb(n-2) + fb(n - 1);
//}
//此时迭代（循环）法更好
//int fb1(int n)
//{
//	int a = 1, b = 1, c = 0,i=1;
//	if (n <= 2)
//		return 1;
//	else
//	{
//		for (; i <= n - 2; i++)
//		{
//			c = a + b;
//			a = b;
//			b = c;
//		}
//	}
//	return c;
//}
//int main()
//{
//	int n = 0, a = 1,b=1;
//	scanf("%d", &n);
//	b=fb1(n);
//	printf("%d", b);
//	return 0;
//}

//用递归实现求n的阶乘
//int fac(int n)
//{
//	if (n <= 1)
//		return 1;
//	else
//		return n * fac(n - 1);
//}
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int ret = fac(n);
//	printf("%d",ret);
//	return 0;
//}