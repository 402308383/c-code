#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>
//�õ������۲����exp4_8.c�����й��̣�����¼���ֱ�����ÿһ��ִ��ʱ�ı仯������ڱ������дÿһ�����ٲ�ÿ��������Ӧ��ֵ������������¡�
//int a = 1;
//int f(int a)
//{
//    auto int b = 2;
//    static int c = 3;
//    a = a + 1;
//    b = b + 1;
//    c = c + 1;
//    return (a + b + c);
//}
//
//int main()
//{
//    int i;
//    for (i = 0; i < 3; i++)
//    {
//        a = a + 2;
//        printf("%d \n", f(a));
//    }
//    return 0;
//}
//�����exp4_5.c����֤��°ͺղ��룺2000���ڵ���ż����������2�����ܹ��ֽ�Ϊ��������֮�͡�
//���㷨��ʾ���������ֽ�Ϊ����������Ȼ���ж������Ƿ��Ϊ���������ǣ����������Ⲣ������������½��зֽ���жϡ�
//���У��ж�һ�������Ƿ�Ϊ�������ú���ʵ��
//��ÿ��ż��ֻҪ�õ�һ�ַֽ��ֹͣ������Ҫ�����ż����������������ϣ���
//int is_prime(int i)
//{
//	int j = 2;
//	if (i == 1)
//		return 0;
//	else
//	{
//		for (j = 2; j <= sqrt(i); j++)
//		{
//			if (i % j == 0)
//				return 0;
//		}
//		return 1;
//	}
//}
//
//int main()
//{
//	int i = 3;
//	int count = 0;
//	for (i = 3; i <= 2000; i++)
//	{
//		if (i % 2 == 1)
//		{
//			i++;
//		}
//		int a = 2;
//		int b = 0;
//		for (a=2; a < i; a++)
//		{
//			b = i - a;
//			if (is_prime(a) && is_prime(b))
//			{
//				printf("%4d =%4d +%4d ",i,a,b);
//				count++;
//				if (count % 4 == 0 && count!= 0)
//				{
//					printf("\n");
//				}
//				break;
//			}
//		}
//		
//	}
//	return 0;
//}
//void DrawTriangle(int n, char c) {
//    int i, j;
//    for (i = 1; i <= n; i++) {
//        for (j = 1; j <= n - i; j++)
//            printf(" ");
//        for (j = 1; j <= 2 * i - 1; j++)
//            printf("%c", c);
//        printf("\n");
//    }
//}
//
//int main() {
//    //DrawTriangle(5, '*');
//    //DrawTriangle(10, '#');
//    DrawTriangle(100, '#');//�������������
//    return 0;
//}
