#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include <stdio.h>

int main()
{
	char password[25] = { 0 };//理解：数组定义一个密码的大小，能装下就行，不然会出现乱码
	char input = 0;
	printf("请输入密码：");
	scanf("%s", password);
	//getchar();//此getchar能够接受缓冲区的回车键，让缓冲区为空，便于下一个输入打印
	printf("%s", "请确认密码(Y / N)：");
	while (getchar() != "\n")
	{
		;
	}
	input = getchar();
	if ('Y' == input)
	{
		printf("确认成功\n");
	}
	else
	{
		printf("确认失败\n");
	}
	return 0;
}
//int main() 
//{
//char password[25];//理解: 数组定义一个密码的大小，能装下就行，不然会出现乱码printf("%s""请输入密码::scanf("%s"， &password).//getchar0;//此getchar能够接受缓冲区的回车键，让缓冲区为空，便于下一个输入打印while (getchar) != n')
//char input = 0:printf("%s\n", "请确认密码(Y/N):");
//input = getchar() .
//if ('y' == input)
//	"确认成功\n"); printf("%s",
//else
//	printf("%s""确认失败 n");
//	return 0;
//
//}
	
//int main()
//{
//	char pswd[25] = { 0 };
//	printf("输入\n");
//	char input = 0;
//	scanf("%s", pswd);
//	while (getchar !n")
//		input = getchar(:
//	if ('y' == input)
//		printf("确认成功\n");
//	else
//		printf("确认失败 n");
//		return 0;
//}
//int main()
//{
//    char str1[] = "hello bit.";
//    char str2[] = "hello bit.";
//    const char* str3 = "hello bit.";
//    const char* str4 = "hello bit.";
//    if (str1 == str2)
//        printf("str1 and str2 are same\n");
//    else
//        printf("str1 and str2 are not same\n");
//
//    if (str3 == str4)
//        printf("str3 and str4 are same\n");
//    else
//        printf("str3 and str4 are not same\n");
//    return 0;
//}

//int main()
//{
//	int arr1[] = { 1,2,3,4,5 };
//	int arr2[] = { 2,3,4,5,6 };
//	int arr3[] = { 3,4,5,6,7 };
//	//数组名是数组⾸元素的地址，类型是int*的，就可以存放在parr数组中
//	int* parr[3] = { arr1, arr2, arr3 };
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < 3; i++)
//	{
//		for (j = 0; j < 5; j++)
//		{
//			printf("%d ", parr[i][j]);
//		}
//		printf("\n");
//	}
//}
//int main()
//{
//	int a = 10;
//	int* pa = &a;//pa是一级指针
//	int*** ppa = &pa;//ppa是二级指针
//	return 0;
//}