#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//�������
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
//	printf("������Ҫ��ӡ��������\n");
//	scanf("%d", &n);
//	printtriangle(arr,n);
//	return 0;
//}


//����
//int main()
//{
//	int arr[] = {1,2,3,4,5,2,3,1,5};
//	int i = 0;
//	for (i = 0; i < 8; i++)
//	{
//		int j = 0;
//		for (j=i+1; j < 9; j++)
//		{
//			if (arr[i] == arr[j]) ���arr[i]^arr[j]==0��Ϊ�ж�������
//			{
//				arr[i] = 0;
//				arr[j] = 0;
//				break;
//			}
//		}
//		if (j == 9 && arr[8] != arr[i]&&arr[i]!=0)
//		{
//			printf("�ҵ�������������������%d�������±���%d\n", arr[i], i);
//		}
//	}
//	return 0;
//}