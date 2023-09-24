#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
//字符型数据以%d(有符号数)形式打印会发生整形提升
//char类型和short类型在赋以整数值时会发生截断,x86环境下整数默认是32位,char和short类型在使用(打印,运算......)时会发生整型提升(x86环境下都会转化为32位来使用),有符号位补上符号位,无符号位置则补0
//-128-1000000000000000001000000
//11111111111111110111111
int main()
{
	char a = -128;

}

//void my_memmove(char* des, char* sor,int num)
//{
//	//int i = 0;
//	if (des > sor)
//	{
//		for (num=num-1; num >= 0; num--)
//		{
//			*(des + num) = *(sor + num);
//		}
//	}
//	else if (des < sor)
//	{
//		for (int i = 0; i < num; i++)
//		{
//			*(sor + i) = *(des + i);
//		}
//	}
//}
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int i =0;
//	my_memmove(arr + 2, arr, 20);
//	//memmove(arr + 2, arr, 20);
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ",arr[i]);
//	}
//	return 0;
//}