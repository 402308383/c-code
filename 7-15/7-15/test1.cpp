#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
//int main()
//{
//	char arr1[] = "bit";
//	char arr2[] = "#3#3#3333";
//	strcpy(arr2, arr1);//字符串逐位覆盖，前为destination，后为source
//	printf("%s\n", arr2);//打印以\0为结束标志
//	return 0;
//}
int main()
{
	char arr[] = "hello world";
	memset(arr, '*', 5);
	printf("%s\n", arr);
	return 0;
}