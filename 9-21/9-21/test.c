#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
//strstr
char* my_strstr(const char* str1, const char* str2)
{
	char* p1 = str1;
	char* p2 = str2;
	char* cp = str1;
	if (!*str2)
	{
		return str1;
	}
	while (*cp)
	{
		p1 = cp;
		p2 = str2;
		while (*p1 && *p2 && p1 != *p2)
		{
			p1++;
			p2++;
		}
		if (*p2)
		{
			return (cp);
		}
			cp++;


	}
		return NULL;

	//while (*p1 != *p2)
	//{
	//	p1++;
	//}
	//while (*p1 == *p2)
	//{
	//	p1++;
	//	p2++;
	//}
	//if (p2 == '\0')
	//	return p1;
	//else
	//	return NULL;
	
	
}
int main()
{
	char arr1[] = "abbcde";
	char arr2[] = "bbc";
	char arr3[] = "cda";
	char* ret = NULL;
	ret = my_strstr(arr1,arr2);
	printf("%s\n", ret);
	return 0;
}
//strcpy
//void my_strcpy(char* p1,char* p2)
//{
//	while (*p2)
//	{
//		*p1 = *p2;
//		p1++;
//		p2++;
//	}
//	*p1 = '\0';
//
//}可实现,但不够高效
//char* my_strcpy(char* p1, char* p2)
//{
//	char* ret = p1;
//	while((*p1++=*p2++))
//	{
//		;
//	}
//	return ret;
//}
//int main()
//{
//	char arr1[] = "hello bit";
//	char arr2[] = "sand";
//	char* ret = NULL;
//	ret=my_strcpy(arr1, arr2);
//	//strcpy(arr1,arr2);
//	printf("%s", arr1);
//	return 0;
//}