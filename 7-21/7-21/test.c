#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include <stdio.h>

//���n��쳲�������
//�õݹ���Ч�ʼ���
//��ŵ�����⣬������̨��
//int fb(int n)
//{
//	if (n <= 2)
//		return 1;
//	else
//		return fb(n-2) + fb(n - 1);
//}
//��ʱ������ѭ����������
//int fb1(int n)
//{
//	int a = 1, b = 1, c = 0,i=1;
//	if (n <= 2)
//		return 1;
//	else
//	{
//		for (; i <= n - 2; i++)
//		{
//			c = a + b;
//			a = b;
//			b = c;
//		}
//	}
//	return c;
//}
//int main()
//{
//	int n = 0, a = 1,b=1;
//	scanf("%d", &n);
//	b=fb1(n);
//	printf("%d", b);
//	return 0;
//}

//�õݹ�ʵ����n�Ľ׳�
//int fac(int n)
//{
//	if (n <= 1)
//		return 1;
//	else
//		return n * fac(n - 1);
//}
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int ret = fac(n);
//	printf("%d",ret);
//	return 0;
//}