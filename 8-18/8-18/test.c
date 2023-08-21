#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
int main()
{
	char arr[] = "helllo world";
	int str = strlen(arr);
	int i = str-1;
	for (; i >= 0; i--)
	{
		printf("%c ", arr[i]);
	}
	return 0;
}

//注意，进行操作时此时不要改变原指针，应创建另一指针变量，用二阶指针解决问题

//void rotate(char* ptr0, int k)
//{
//	char tep = 0;
//	
//	for (; k > 0; k--)
//	{
//		char* ptr = ptr0;
//		tep = *ptr;
//		while (*(ptr + 1) != '\0')
//		{
//			*ptr = *(ptr + 1);
//			ptr++;
//		}
//		*ptr = tep;
//	}S
//}
//
//int main()
//{
//	char arr[] = "ABCD";
//	int k = 0;
//	printf("请输入左旋字符数：\n");
//	scanf("%d", &k);
//	rotate(arr,k);
//	printf("%s", arr);
//
//	return 0;
//}


//int my_strlen(char* ptarr)
//{
//	int count=0;
//	while (*ptarr != '\0')
//	{
//		ptarr++;
//		count++;
//	}
//	return count;
//}
//
//#include<stdio.h>
//int main()
//{
//	char arr[] = "abcdefg";
//	int ret = 0;
//	ret = my_strlen(arr);
//	printf("字符串长度为%d\n", ret);
//	return 0;
//}

//指针类型转换会影响可操作字节数（内存）
//#include <stdio.h>
//int main()
//{
//    int a = 0x11223344;
//    char* pc = (char*)&a;
//    *pc = 0;
//    printf("%x\n", a);
//    return 0;
//}
