#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//杨辉三角
//void printtriangle(int arr[10][10],int n)
//{
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < n; i++)
//	{
//		arr[i][0] = 1;
//		arr[i][i] = 1;
//		if (i >= 2)
//		{
//			for (j = 1; j <= i - 1; j++)
//			{
//				arr[i][j] = arr[i - 1][j - 1] + arr[i - 1][j];
//			}
//		}
//	}
//	for (i = 0; i < n; i++)
//	{
//		for (j = 0; j <= i;j++)
//		{
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//	
//
//}
//
//int main()
//{
//	int n = 0;
//	int arr[10][10] = { 0 };
//	printf("请输入要打印的行数：\n");
//	scanf("%d", &n);
//	printtriangle(arr,n);
//	return 0;
//}


//单身狗
//int main()
//{
//	int arr[] = {1,2,3,4,5,2,3,1,5};
//	int i = 0;
//	for (i = 0; i < 8; i++)
//	{
//		int j = 0;
//		for (j=i+1; j < 9; j++)
//		{
//			if (arr[i] == arr[j]) 亦可arr[i]^arr[j]==0作为判断条件。
//			{
//				arr[i] = 0;
//				arr[j] = 0;
//				break;
//			}
//		}
//		if (j == 9 && arr[8] != arr[i]&&arr[i]!=0)
//		{
//			printf("找到了这个单身狗，这个数是%d，它的下标是%d\n", arr[i], i);
//		}
//	}
//	return 0;
//}