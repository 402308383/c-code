#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

//有序数组中查找一个数try1有bug：int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int left = 0;
//	int right = 9;
//	int mid = (left + right) / 2;
//	int k = 9;
//	
//		for (;left<=right;)
//		{
//			if (mid < k)
//				left = mid + 1;
//			else if (mid > k)
//				right = mid - 1;
//			 mid = (right + left) / 2;
//		}
//		printf("找到了，下标为%d\n", mid );
//	
//
//	return 0;
//}

//计算1到10的阶乘和
// 优化：
//int main()
//{
//	int sum = 0, acc = 0, n = 0;
//
//	for (acc=1,n = 1; n < 11; n++)
//	{
//		acc *= n;
//		sum += acc;
//	}
//	printf("sum=%d\n",sum);
//
//	return 0;
//}

//1.int main()
//{
//	int n = 10,i=10, e = 1, s = 0;
//	for (i=10;i>=1;i--)
//	{
//		n = i;
//		for (e = 1; i >= 1; n--)
//		{
//			e = n * e;
//		}
//		s = s + e;
//	}
//	printf("sum=%d\n", s);
//	return 0;
//}