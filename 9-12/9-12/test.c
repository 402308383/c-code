#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
	//(*(void (*)())0)();
	//int a[3][4] = { 0 };
	//printf("%d\n", sizeof(a));//48
	//printf("%d\n", sizeof(a[0][0]));//4
	//printf("%d\n", sizeof(a[0]));//16
	//return 0;
	int a[] = { 12,1 };
	printf("%d",sizeof(*a));//*a��ָ�����,��ָ�������С,�Ժ����Сʱ���Ҫ��һ���ж�,�Ƿ�Ϊ������
}