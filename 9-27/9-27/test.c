#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
int my_atoi(const char* ptr)
{
	char* p0 = ptr;
	int ret = 0;
	while (*p0!='\0')
	{
		ret = ret * 10 + (*p0-'0');
		p0++;
	}
	return ret;
}
int main()
{
	char* ptr = "123";
	int ret=0;
	ret=my_atoi(ptr);
	printf("%d", ret);
	return 0;
}
//int main()
//{
//	int i;
//	char buffer[256];
//	printf("Enter a number: ");
//	fgets(buffer, 256, stdin);
//	i = atoi(buffer);
//	printf("The value entered is %d. Its double is %d.\n", i, i * 2);
//	return 0;
//}