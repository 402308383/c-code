#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
	char a = 128;//���λΪ����λ,10000000-ԭ��(�ضϺ�/��ͬ),11111111-����,100000000-����(���һλ),�涨��-128
	char b = 300;//10000001,11111110,11111111(�����ڴ���)
	//��ӡ����ԭ��
	
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