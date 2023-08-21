#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//1.sizeof(数组名)计算的是整个数组大小，单位是字节。
//2.&数组名，这里的数组名表示整个数组,取出的是整个数组的地址。数组名完全等效于首元素地址。


//int main()
//{
//	int input = 0;
//	printf("jj is dinner.\n");
//	printf("1.yes 0.no\n");
//	while (scanf("%d", &input) != EOF)
//	{
//		if (input == 0)
//			printf("整错了，重来\n");
//		else
//		{
//			printf("整对了的！\n");
//			break;
//		}
//	}
//	
//	return 0;
//}