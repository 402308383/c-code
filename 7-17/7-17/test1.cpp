#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>















//�����������ͱ���
//void swap(int* pa, int* pb)
//{
//	int tmp = 0;
//	tmp = *pa;
//	*pa = *pb;
//	*pb = tmp;
//}

//int main()
//{
//	int a = 10, b = 20;
//	swap(&a,&b);
//	printf("%d% d",a,b);
//	return 0;
//}

//int get_max(int* pa, int* pb)//�Ż����ҵ��ˡ��ϳ���
//{
//	if (*pa > *pb)
//		return *pa;
//	else
//		return *pb;
//}
//
//int main()
//{
//	int a = 10, b = 20;
//	int max = get_max(&a,&b);
//	printf("%d\n", max);
//
//	return 0;
//}

//int get_max(int x, int y)
//{
//	if (x > y)
//		return x;
//	else
//		return y;
//}
//
//int main()
//{
//	int a = 10, b = 20;
//	int max=get_max(a,100);
//	printf("%d\n", max);
//
//	return 0;
//}