#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>















//交换两个整型变量
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

//int get_max(int* pa, int* pb)//优化，找到了“老巢”
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