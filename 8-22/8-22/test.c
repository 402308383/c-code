#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int Add(int x, int y)
{
	return x + y;
}

int main()
{
	//[]相当于+再*（）
	//表达式都有两个属性：值属性和类型属性。
	//字符串(常量字符串不能被修改)可以理解为字符数组，但数组可修改，字符串不能修改。
	//用常量字符串初始化不同数组时，会开辟不同空间
	//&arr-数组地址，arr-数组首元素地址
	//对于函数，函数名和&函数名都是函数的地址
	int (*pf)(int, int)=&Add;//初始化函数指针
	int r = (*pf)(3, 5);
	char* ch[8];//指针数组
	char* (*p2)[8] = &ch;//数组指针
	char* pc = ch;
	int arr [10] = {0,1,2,3,4,5,6,7,8,9};
	int* p = arr;
	printf("%p ", p);
	printf("%p ", &arr[0]);
	return 0;
}