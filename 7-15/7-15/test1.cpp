#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
//int main()
//{
//	char arr1[] = "bit";
//	char arr2[] = "#3#3#3333";
//	strcpy(arr2, arr1);//�ַ�����λ���ǣ�ǰΪdestination����Ϊsource
//	printf("%s\n", arr2);//��ӡ��\0Ϊ������־
//	return 0;
//}
int main()
{
	char arr[] = "hello world";
	memset(arr, '*', 5);
	printf("%s\n", arr);
	return 0;
}