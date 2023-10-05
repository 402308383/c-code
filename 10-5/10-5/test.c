#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
	char a = 128;//最高位为符号位,10000000-原码(截断后/后同),11111111-反码,100000000-补码(溢出一位),规定成-128
	char b = 300;//10000001,11111110,11111111(存在内存中)
	//打印的是原码
	
	printf("%d ", b);
	return 0;
}
//int main()
//{
//	//int arr[10][20] = { 0 };
//	//int(*pf)[20] = arr[10];
//	int a = 10;
//	int b = 20;
//	int ret = 0;
//	ret = a > b ? a : b;
//	printf("%d ", ret);
//	return 0;
//}