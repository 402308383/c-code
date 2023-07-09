#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>























//求素数，1。试除法
//int main()
//{
//	int i = 0, count = 0;
//	for (i = 100; i <= 200; i++)
//	{
//		int j = 0;
//		for (j = 2; j < i; j++)//试除法，需要打印100-200之间的素数
//		{
//			if (0 == i % j)
//			{ 
//				break;
//			}
//		}
//		if (j == i)
//		{
//			count++;
//			printf("%d ", i);	
//		}	
//	}
//	printf("count=%d\n", count);
//	return 0;
//}

//辗转相除法
//int main()
//{
//	int m = 0, n = 0,r=0;
//	scanf("%d%d", &m, &n);
//	for(;;)
//	{
//
//	r = m % n;
//	if (r == 0)
//	{
//		break;
//	}
//	n = r;
//	}
//	printf("两个数的最大公约数为%d\n", n);
//	return 0;
//}