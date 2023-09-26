#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int arr[] = { 1,2,3,4,5,6,7,8 };
	my_memmove(arr, arr + 2, 20);
	return 0;
}

//int main()
//{
//	int i = 0x1234;
//	return 0;
//}
//写一个函数判断当前机器是大端还是小端，如果是小端返回1，如果是大端返回0.
//int bos()
//{
//	int i = 1;
//	return (*(char*)(&i));
//}
//int main()
//{
//	int ret;
//	ret=bos();
//	if (1 == ret)
//	{
//		printf("是小端\n");
//	}
//	else if (0 == ret)
//	{
//		printf("是大端\n");
//	}
//	return 0;
//}
//int main()
	//{
	//	unsigned char a = 200;//11001000
	//	unsigned char b = 100;//01100100
	//	unsigned char c = 0;//0
	//	c = a + b; //000100101100
	//	printf(“ % d % d”, a + b, c);//300 44
	//	return 0;
	//}
	//return 0;
