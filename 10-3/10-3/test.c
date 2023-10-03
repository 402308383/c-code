#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>

int main()
{
	int arr[50] = { 0 };
	int i = 0;
	int k = 0;
	int d = 0;
	scanf("%d", &k);
	for (i = 0; i < k; i++)
	{
		scanf("%d", &arr[i]);
	}
	scanf("%d", &d);//
	for (i = 0; i < k-1; i++)
	{
		if (arr[i] == d)
		{
			arr[i] = arr[i + 1];
		}
	}
	for (i = 0; i < k - 1;i++)
	{
		printf("%d ", arr[i]);
	}
;	return 0;
}
//int main()
//{
//	int i = 0;
//	int fo = 0;
//	int la = 0;
//	
//	for (i = 10000; i <=99999; i++)
//	{
//		int sum = 0;
//		int j = 4;
//		for (j = 4; j >0; j--)
//		{
//			fo = i / (int)pow(10, j);
//			la = i % (int)pow(10,j);
//			sum += fo * la;
//		}
//		if (i == sum)
//		{
//			printf("%d ", i);
//		}
//	}
//	return 0;
//}
//int main()
//{
//	int a=0, * p=&a;
//	printf("%p", p);
//	return 0;
//}