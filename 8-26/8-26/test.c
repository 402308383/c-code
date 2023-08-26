#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
	//单独放为数组地址（行地址），有其他数参与运算即为某个元素地址
}

//int main()
//{
//	int sum = 0;
//	for (int i = 1; i < 5; i++)
//	{
//		for (int a = 1; a < 5; a++)
//		{
//			for (int b = 1; b < 5; b++)
//			{
//				if (i != a && i != b&&a!=b)
//				{
//					printf("%d%d%d", i, a, b);
//					putchar('\n');
//					sum += 1;
//				}
//			}
//		}
//	}
//	printf("%d\n", sum);
//	return 0;
//
//}
//int main()
//{
//	int a[2] = { 1,2 };
//	int(*p)[2] = &a;
//	printf("%p ", &a);
//	printf("%p ", (&a+1));
//	printf("首元素%p", a);
//	printf("首元素%p", a+1);
//	return 0;
//
//}