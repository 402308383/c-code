#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

int main()
{
	int a = 0;
	char c = 0;
	char d = '0';
	a = getchar();
	getchar();
	c = getchar();



	return 0;

}







//eg.输出自然数字符
//int main()
//{
//	int ch = 0;
//	while ((ch = getchar()) != EOF)
//	{
//		if (ch < '0' || ch>'9')
//			continue;
//		putchar(ch);
//	}
//	
//	return 0 ;
//}

//int main()
//{
//	//if不能循环，判断为真则只执行一次，而while可
//	//getchar()和putchar（)接收的是一个字符而不是字符串，getchar（）的返回值是ASCII码，属于整型。
//	int ch = 0;
//	int ret = 0;
//	char password[20] = { 0 };
//	printf("输入密码\n");
//	scanf("%s", password);
//	while ((ch = getchar() )!= '\n')
//	{
//		;
//	}
//	printf("请确认输入（Y/N）");
//	ret = getchar();
//	if (ret == 'Y')
//		printf("yes\n");
//	else
//		printf("no\n");
//	return 0;
//}

//int main()
//{
//	if (0 =='\0')
//		printf("yes");
//	return 0;
//}
