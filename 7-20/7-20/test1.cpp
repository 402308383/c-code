#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>


//int my_strlen(char* pstr)
//{
//	if (*pstr != '\0')
//	{
//		return 1 + my_strlen(pstr + 1);
//	}
//	else
//		return 0;
//	
//}
//int main()
//{
//	char arr[] = " hello bit";
//	int len = my_strlen(arr);
//	printf("%d\n", len);
//
//	return 0;
//}
//模拟实现一个strlen函数(w1)
//int my_strlen(char* pstr)
//{
//	int count = 0;
//	while (*pstr != '\0')
//	{
//		count += 1;
//		pstr += 1;//数组中两个相邻元素地址相差+-1
//	}
//	return count;
//}
//int main()
//{
//	char arr[] = "bit";
//	int len = my_strlen(arr);
//	printf("%d\n", len);
//
//	return 0;
//}

int main()
{
	int i = 0;
	for (i = 37; i <= 127; i++)
	{
		printf("%c ", i);
		if (i % 16 == 0)
			printf("\n");
	}

	return 0;
}

//函数的递归：自己调用自己。必要条件：1.存在限制条件不要写成死循环而栈溢出2.每次递归调用后递归便不再继续
//void print(int num)
//{
//	if (num > 9)
//	{
//		print(num / 10);
//	}
//	printf("%d ", num % 10);
//}
//int main()
//{
//	int num = 0;
//	scanf("%d", &num);
//	print(num);
//	return 0;
//}

//int main()
//{
//	printf("haha\n");
//	main();
//	return 0;
//}