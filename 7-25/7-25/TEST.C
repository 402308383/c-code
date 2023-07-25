#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>
//ÓÐbug
//void flower(int n)
//{
//	int arr[8] = {0};
//	int i = 0;
//	int sum = 0;
//	int b = 0;
//	for (; i <= 1000; i++)
//	{
//		for (; n >=0; n--)
//		{
//			arr[n] = i / (int)pow(10, n) % 10;
//		}
//		for (b=1;b<=n;b++)
//		{
//			sum += pow((arr[b]), 3);
//		}
//		if (sum == i)
//		{
//			printf("%d\n", i);
//		}
//	}
//}
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	flower(n);
//	return 0;
//}

//int main()
//{
//	int i = 1;
//	for (i = 1;i<=10000; i++)
//	{
//		if (i == (pow((i / 100),3)+ pow(((i / 10)%10),3)  + pow((i % 10) ,3)))
//		{
//			printf("%d\n", i);
//		}
//	}
//
//	return 0;
//}
//ÓÐbug
// 
//void bubble_sort(int* arr0)
//{
//	int i=0,j=0,k=0;
//	for (k=0;k<9;k++)
//	{
//		for (j = 0; j < 9-k; j++)
//		{
//			if (*(arr0 + j) > *(arr0 + j + 1))
//			{
//				i = *(arr0 + j + 1);
//				*(arr0 + j + 1) = *arr0;
//				*(arr0 + j) = i;
//			}
//		}
//	}
//}
//int main()
//{
//	int arr[] = { 9,8,7,6,5,4,3,2,1,0 };
//	int i = 0;
//	bubble_sort(arr);
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ",arr[i]);
//	}
//	printf("%d\n", arr);
//	return 0;
//}