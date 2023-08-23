#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
void bob(int* ptr, int k)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < k - 1; i++)
	{
		int tep = 0;
		int flag = 0;
		for (j = 0; j < k - i - 1; j++)
		{
			if (*(ptr+j) > *(ptr + 1+j))
			{
				tep = *(ptr+j);
				*(ptr+j) = *(ptr + 1+j);
				*(ptr + 1+j) = tep;
				flag = 1;
			}
			
		}
		if (0 == flag)
			{
				break;
			}

	}
}

int main()
{
	int arr[9] = { 4,1,2,7,5,4,9,8,0 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	int i = 0;
	bob(arr, sz);
	for (i = 0; i < sz - 1; i++)
	{
		printf("%d ", arr[i]);
	}
	return 0;
}

//int main()
//{
//	int arr[6] = { 0,1,2,3,4,5 };
//	int* ptr = arr;
//	int i = 0;
//	for (i = 0; i < 6; i++)
//	{
//		printf("%d ",*ptr);
//		ptr++;
//	}
//	return 0;
//}