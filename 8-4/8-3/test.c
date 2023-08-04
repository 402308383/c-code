#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>
//int feb(int n)
//{
//	if (n <= 2)
//		return 1;
//	else
//		return feb(n - 1) + feb(n - 2);
//}
//
//int main()
//{
//	int n = 0,num=0;
//	scanf("%d", &n);
//	num = feb(n);
//	printf("第%d个斐波那契数是%d\n", n, num);
//	return 0;
//}

//非递归斐波那契
//int main()
//{
//	int a = 1, b = 1, c = 0,n=0;
//	int i = 0;
//	scanf("%d", &n);
//	if (n <= 2)
//		printf("第%d个斐波那契数是1\n",n);
//	else
//	{
//		for (i = 2; i < n;i++)
//		{
//			c = a + b;
//			a = b;
//			b = c;
//		}
//		printf("第%d个斐波那契数是%d\n", n, c);
//	}
//	return 0;
//}

//2+22+222...
//int main()
//{
//	int a=0;
//	scanf("%d", &a);
//	int i = 0;
//	int ret = 0;
//	int sum = 0;
//	for (i = 0; i < 5; i++)
//	{
//		ret += a*pow(10, i);
//		sum += ret;
//
//	}
//	printf("Sn=%d\n", sum);
//	return 0;
//}

//水仙花
//int main()
//{
//	int n = 0;
//	//scanf("%d", &n);
//	int arr[10] = { 0 };
//	int i = 0;
//	for (i = 0; i <100000 ; i++)
//	{
//		int j = 0;
//		int sum = 0;
//		if (i < 1000&&i>=100)
//		{
//			for (j = 0; j < 3; j++)
//			{
//				arr[j] = (i / (int)pow(10, j)) % 10;
//			}
//			for (j = 0; j < 3; j++)
//			{
//				sum += pow(arr[j], 3);
//			}
//			if (sum == i)
//				printf("%d是水仙花数\n",i);
//		}
//		else if(i<10000&&i>=1000)
//		{
//			for (j = 0; j < 4; j++)
//			{
//				arr[j] = (i / (int)pow(10, j)) % 10;
//			}
//			for (j = 0; j < 4; j++)
//			{
//				sum += pow(arr[j], 4);
//			}
//			if (sum == i)
//				printf("%d是水仙花数\n", i);
//		}
//		else if (i < 100000 && i >= 10000)
//		{
//			for (j = 0; j < 5; j++)
//			{
//				arr[j] = (i / (int)pow(10, j)) % 10;
//			}
//			for (j = 0; j < 5; j++)
//			{
//				sum += pow(arr[j], 5);
//			}
//			if (sum == i)
//				printf("%d是水仙花数\n", i);
//		}
//		else 
//		{
//			for (j = 0; j < 6; j++)
//			{
//				arr[j] = (i / (int)pow(10, j)) % 10;
//			}
//			for (j = 0; j < 6; j++)
//			{
//				sum += pow(arr[j], 6);
//			}
//			if (sum == i)
//				printf("%d是水仙花数\n", i);
//		}
//	}
//	return 0;
//}




//打印菱形13x13
//int main()
//{
//	int i = 1;
//	for (i = 1; i <= 7; i++)
//	{
//		int j = 1;
//		for (j = 1; j <= 13; j++)
//		{
//			if (j >= 8 - i && j <= i + 6)
//				printf("*");
//			else
//				printf(" ");
//		}
//		printf("\n");
//	}
//	for (i = 1; i <= 6; i++)
//	{
//		int j = 1;
//		for (j = 1; j <= 13; j++)
//		{
//			if (j <=  i  || j >= 14-i)
//			{
//				printf(" ");
//			}
//			else
//			{
//				printf("*");
//			}
//		}
//		printf("\n");
//	}
//}

//
//霍汽水问题
//int sum=0;
//int num(int mon)
//{
//	
//	if (mon % 2 == 0&&mon>=2)
//	{
//		sum = sum+mon / 2;
//		return num(mon / 2);
//
//	}
//	else if (mon % 2 == 1&&mon>=2)
//	{
//		sum = sum + (mon - 1) / 2;
//		return num((mon - 1) / 2 + 1);
//	}
//	if (mon < 2)
//		return sum;
//}
//
//int main()
//{
//	int sum=0;
//	int mon = 0;
//	scanf("%d", &mon);
//	sum = num(mon)+mon;
//	printf("总共喝了%d瓶汽水",sum);
//}