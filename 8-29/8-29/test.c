#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//杨氏矩阵
int binary_search(int arr[3][4],int i,int k)
{
	//int j = 0;
	int left = 0;
	int right = 3;
	int mid = 0;
	while (left<=right)
	{
		mid = (left + right) / 2;
		if (arr[i][mid] > k)
		{
			right = mid-1;
		}
		else if (arr[i][mid] < k)
		{
			left = mid+1;
		}
		else if (arr[i][mid] == k)
		{
			return mid;
		}
	}
	return -1;

}

int find(int arr[3][4], int k,int* px,int* py)
{
	int i = 0;
	//int j = 0;
	int ret = 0;
	for (i = 0; i < 3; i++)
	{
		if (k<arr[i][3] && k>arr[i][0])
		{
			ret=binary_search(arr,i,k);
			if (ret != -1)
			{
				*px = i;
				*py = ret;
				return 1;
			}
		}
		else if (k == arr[i][0])
		{
			*px = i;
			*py = 0;
			return 1;
		}
		else if (k == arr[i][3])
		{
			*px = i;
			*py = 3;
			return 1;
		}
	}
	return 0;
}

int main()
{
	int arr[3][4] = { 1,2,6,8,5,7,9,10,11,17,27,29 };
	int k = 0;
	int ret=0;
	int x = 0;
	int y = 0;
	printf("请输入要查找的数:>");
	while (scanf("%d", &k) != EOF)
	{
		ret = find(arr, k, &x, &y);
		if (ret == 1)
		{
			printf("找到了，下标为[%d][%d]\n", x, y);
		}
		else
		{
			printf("没找到\n");
		}
	}
	return 0;
}

//int main()
//{
//	int a = 0;
//	while (scanf("%d", &a) == 1)
//	{
//		if (a >= 140)
//		{
//			printf("Genius\n");
//		}
//	}
//	return 0;
//}