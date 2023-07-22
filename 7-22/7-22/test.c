#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//197788
//汉诺塔问题,青蛙跳台阶问题
//void move(char x, char y)
//{
//	printf("%c->%c\n",x,y);
//}
//
//void zong(int n, char a, char b, char c)
//{
//	if (n == 1)
//		move(a,c);
//	else
//	{
//		zong(n - 1, a, c, b);
//		move(a, c);
//		zong(n - 1, b, a, c);
//	}
//}
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	zong(n,'A','B','C');
//	return 0;
//}