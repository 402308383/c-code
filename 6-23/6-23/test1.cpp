#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>


int main()
{
	//if不能循环，判断为真则只执行一次，而while可
	//getchar()和putchar（)接收的是一个字符而不是字符串，getchar（）的返回值是ASCII码，属于整型。
	int ret = 0;
	char password[20] = { 0 };
	printf("INPUTHA:\n");
	scanf("%s", password);
	printf("please（Y/N）");
	ret = getchar();
	if (ret == 'Y')
		printf("yes\n");
	else
		printf("no\n");
	return 0;
}
