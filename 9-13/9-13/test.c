#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
void my_strcat(char* des, char* sor)
{
	while (*des != '\0')
	{
		des++;
	}
	while (*des++ = *sor++)
	{
		;
	}

}
int main()
{
	char arr1[5] = "bit.";
	char arr2[16] = "xxxxxxxxx";
	my_strcat(arr2, arr1);
	printf("%s", arr2);
	return 0;
}
//strcpy��ģ��ʵ��
//void my_strcpy(char *des,char*sor)
//{
//	while (*des++ = *sor++)
//	{
//		;
//	}
//}
//
//int main()
//{
//	char arr1[5] = "bit.";
//	char arr2[10] = "xxxxxxxxx";
//	my_strcpy(arr2, arr1);
//	//strcpy(arr2, arr1);
//	printf("%s", arr2);
//	return 0;
//}
//strlen��ģ��ʵ��
//int my_strlen(char* p)
//{
//	int count = 0;
//	while (*p != '\0')
//	{
//		count++;
//		p++;
//	}
//	return count;
//}
//
//int main()
//{
//	char arr[] = "hello bit.";//10
//	int num = my_strlen(arr);
//	printf("%d\n", num);
//	return 0;
//}
//int main()
//{
	/*int a;
	float b = 1.2;
	if ((a = b) == 1)
		{
			printf("ssssss\n");//��ֵ���ʽ����ֵΪ��ֵ�����ֵ,һ���Ǹ�ֵ��
		}

	return 0;*/
	
	/*int a = 1;
	float b = 2.0;
	printf("%lf", (a = b));*/
	/*if ((a = b) ==1)
	{
		printf("����ֵΪ��ֵ");
	}
	else if ((a = b) == 2)
	{
		printf("����ֵΪ��ֵ");
	}*/
	//char arr1[3] = "xxx";//��Ч��{'x','x','x'};��С�Ĵ�С�ǳ�\0������ַ�������,��ʱ\0�����
	//char arr2[4] = "xxx";//��Ч��{'x','x','x','\0'};
	//char arr3[5] = { 0 };
	//return 0;
//}

//int cp(const void* e1, const void* e2)
//{
//	return (*((int*)e1)) - (*((int*)e2));
//}
//
//void my_qsort(void* base, size_t num, size_t width, int (*cp)(const void*, const void*))
//{
//	int i = 0;
//	int j = 0;
//	for (i = 1; i <= num - 1; i++)
//	{
//		for (j = 0; j <=num - i-1; j++)
//		{
//			int ret = cp(((int*)base + j), ((int*)base + j + 1));
//			if (ret > 0)
//			{
//				int tep = 0;
//				tep = *((int*)base + j);
//				*((int*)base + j) = *((int*)base + j + 1);
//				*((int*)base + j + 1) = tep;
//
//			}
//		}
//	}
//}
//
//int main()
//{
//	int arr[] = { 1,3,4,2,9,5,6 };
//	int num = sizeof(arr) / sizeof(arr[0]);
//	int width = sizeof(arr[0]);
//	int i = 0;
//	my_qsort(arr, num, width, cp);
//	for (i = 0; i < num; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}