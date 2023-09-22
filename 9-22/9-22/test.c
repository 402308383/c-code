#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<windows.h>
#include<string.h>
void my_memcpy(void* str2, void* str1,size_t num)//以后尽量少用模糊的数字表示不同元素,容易出错,最好使用英文缩写
{
	int i = 0;
	for (i = 0; i < num; i++)
	{
		*(char*)str2 = *(char*)str1;
		str1 = (char*)str1 + 1;
		str2 = (char*)str2 + 1;
	}
}
void memcpy1(void* dst, void* src, size_t count)
{
	void* ret = dst;
	//assert(dst);
	//assert(src);
	/*
	* copy from lower addresses to higher addresses
	*/
	while (count--) {
		*(char*)dst = *(char*)src;
		dst = (char*)dst + 1;
		src = (char*)src + 1;
	}
	
}
int main()
{
	int arr1[] = { 1,2,3,4,5,6,7,8,9,10 };
	int arr2[10] = { 0 };
	int i = 0;
	my_memcpy(arr2, arr1,12);
	for (i = 0; i < 10; i++)
	{
		printf("%d ",arr2[i]);
	}
	return 0;
}
//void my_strncat(char* str1, char* str2,int num)
//{
//	int i = 0;
//	while (*str1 != '\0')
//	{
//		str1++;
//	}
//	for (i=0;i<num;i++)
//	{
//		*str1 = *str2;
//		str1++;
//		str2++;
//	}
//	*str1 = '\0';
//
//}
//int main()
//{
//	char str1[20];
//	char str2[20];
//	strcpy(str1, "To be ");
//	strcpy(str2, "or not to be");
//	//strncat(str1, str2, 6);
//	my_strncat(str1,str2,6);
//	printf("%s\n", str1);
//	return 0;
//}
//void my_strncpy(char* p1, char* p2, size_t n)
//{
//	int i = 0;
//	for (i = 0; i < n; i++)
//	{
//		*p1 = *p2;
//		p1++;
//		p2++;
//	}
//}
//int main()
//{
//	char arr1[] = "abcdef";
//	char arr2[] = "   ";
//	//strncpy(arr1, arr2, 3);
//	my_strncpy(arr1, arr2, 3);
//	printf("%s", arr1);
//	return 0;
//}
//int main()
//{
//	char arr1[] = "#########";
//	char arr2[] = "hello bit";
//	int sz = sizeof(arr1) / sizeof(arr1[0]);
//	int le = 0;
//	int ri = sz -2;
//	while ((le <= ri))
//	{
//		printf("%s", arr1);
//		Sleep(1000);
//		system("cls");
//		arr1[le] = arr2[le];
//		arr1[ri] = arr2[ri];
//		le++;
//		ri--;
//	} 
//	printf("%s",arr1);
//	return 0;
//}