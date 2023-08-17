#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

//int calculate(int num1, int num2)
//{
//	int num3 = 0;
//	int count = 0;
//	int i = 0;
//	num3 = num1 ^ num2;
//	for (i = 0; i <= 31; i++)
//	{
//		if ((num3 & 1) == 1)
//		{
//			count++;
//		}
//		num3=num3 >> 1;
//	}
//	return count;
//}
//
//int main()
//{
//	int num1 = 0, num2 = 0;
//	int ret = 0;
//	printf("请输入两个数，中间用空格隔开\n");
//	scanf("%d %d", &num1, &num2);
//	ret=calculate(num1,num2);
//	printf("不同的二进制数位有%d位\n",ret);
//	return 0;
//}

//打印整数二进制的奇数位和偶数位
//void print(int num)
//{
//	int i = 0;
//	for (i = 31; i >= 1; i-=2)
//	{
//		printf("%d ", (num >> i) & 1);
//	}
//	printf("\n");
//	for (i = 30; i >= 0; i -= 2)
//	{
//		printf("%d ", (num >> i) & 1);
//	}
//}
//
//int main()
//{
//	int num = 0;
//	printf("请输入一个数：\n");
//	scanf("%d", &num);
//	print(num);
//	return 0;
//}

//int my1(char* str)
//{
//	int count=0;
//	while (*str != '\0')
//	{
//		count++;
//		str++;
//	}
//	return count;
//}
//int my2(char arr[])
//{
//	int i = 0;
//	while (arr[i]!='\0')
//	{
//		i++;
//	}
//	return i;
//}
//
//int main()
//{
//	//指针减去指针的前提是两个指针指向同一块空间（同一个数组），得到的是指针间元素的个数，指针看作指向每块存储空间前。
//	//数组名就是首元素的地址（&arr[0]与arr等效）
//	char arr[] = "abcdef";
//	int ret1 = 0;
//	int ret2 = 0;
//	ret1=my1(arr);
//	ret2 = my2(arr);
//	printf("%d\n", ret1);
//	printf("%d\n", ret2);
//	return 0;
//}