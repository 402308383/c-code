#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include <stdlib.h>
#include"SeqList.h"
void SLtest()
{
	SL sl;
	SLInit(&sl);//传结构体相当于传的是数值而不是地址，与数组名有差异

}
int main()
{
	SLtest();
	return 0;
}

//int main()
//{
//	int i, a, b, n, z=0;
//	scanf_s("%d%d", &a, &b);
//	while (a <= 10 || a >= b || b >= 1000)
//	{
//		scanf(" % d % d", &a, &b);
//	}
//	for (i = a; i <= b; i++)
//		{
//			for (n = 2; n < i; n++)
//			{
//				???if(i % n == 0)
//					break;
//			}
//			if (i == n)
//			{
//				printf("%d ", i);
//				???z++;
//				if (z % 5 == 0)
//					????printf("\n");
//				??
//			}
//		}
//	system("pause");
//	return 0;
//}
//int main()
//{
//	int i, a, b, n, z = 0;
//	scanf_s("%d%d", &a, &b);
//	while (a <= 10 || a >= b || b >= 1000)
//			{
//				scanf(" % d % d", &a, &b);
//			}
//	for (i = a; i <= b; i++)
//	{
//		for (n = 2; n < i; n++)
//		{
//			if (i % n == 0)
//			{
//				break;
//			}
//			if (i == n)
//			{
//				printf("%d  ", i);
//				z++;
//				if (z % 5 == 0)
//				{
//					printf("\n");
//				}
//			}
//		}
//	}
//	//system("pause");
//	return 0;
//}