#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>
//int is_prime(int i)
//{
//	int j = 2;
//	for (; j <= sqrt(i); j++)
//	{
//		if (i % j == 0)
//			return 0;
//	}return 1;
//}
//
//int main()
//{
//	int a = 0, b = 0;
//	int i = 0;
//	int count = 0;
//	scanf("%d %d", &a, &b);
//	for (i = a; i <= b; i++)
//	{
//		if (is_prime(i))
//		{
//			printf("%d ", i);
//			count++;
//			if (count % 5 == 0 && count != 0)
//			{
//				printf("\n");
//			}
//		}
//		
//		
//	}
//	return 0;
//}

//����ѭ����䣨while����for��do��while������������⣺
//int main() {
//    int i;
//    double a = 2, b = 1, sign = 1, item, s = 0;
//    for (i = 1; i <= 1000; i++) {
//        item = sign * a / b;
//        s += item;
//        sign = -sign;
//        a = a + b;
//        b = a - b;
//    }
//    printf("S=%f\n", s);
//    return 0;
//}
//�����exp2_6.c������3��double�ͱ���a, b, c��ֵ����if����ж������ܷ񹹳������Σ�
//����ܹ������������ǹ��ɵĺ��������Σ��ȱ������Ρ����������Ρ�ֱ�������Ρ�����ֱ�������Ρ�һ�������Σ���
//�������������жϵĽ����������ο�ʵ��ָ���̲ĵ�����ͼ4.20���ȶ�a, b, c������С�����������Լ򻯴���
//int main()
//{
//	double a = 0, b = 0, c = 0,edge1,edge2,edge3;
//	scanf("%lf %lf %lf", &a, &b, &c);
//	edge1 = a > b ? (a > c ? a : c) : (b > c ? b:c);
//	edge3 = a < b ? (a<c?a:c) : (b<c?b:c);
//	edge2 = a + b + c - edge1 - edge3;
//	//double test = fabs(edge1 * edge1 + edge2 * edge2 - edge3 * edge3);
//	if (edge3 <= 0 || edge2 + edge3<=edge1 || edge1 - edge3>=edge2 || edge1 - edge2 >= edge3)
//	{
//		printf("���ܹ���������\n");
//	}
//	else 
//	{
//		if (fabs(edge1 - edge3) < 1e-1)
//			printf("��������\n");
//		else if (fabs(edge1 - edge2) < 1e-1 || fabs(edge2 - edge3) < 1e-1)
//		{
//			if (fabs(edge3 * edge3 + edge2 * edge2 - edge1 * edge1) < 1e-1)
//			{
//				printf("����ֱ��������\n");
//			}
//			else
//				printf("����������\n");
//
//		}
//		else if (fabs(edge3 * edge3 + edge2 * edge2 - edge1 * edge1) < 1e-1)
//		{
//			printf("ֱ��������\n");
//		}
//		else
//			printf("һ��������\n");
//	}
//
//	return 0;
//}
//�Ӽ���������������a��b�����㲢������ǵĺ�sum����diference����product����quotient��ƽ��ֵave��ע��ave���̵Ķ������ͣ���
//����Ҫ��
//�� �༭�����롢���Ӳ����г��򣬹۲����н����
//�� �۲�exp1_1.obj��exp1_1.exe��exp1_1.c���ڵ��ļ��С�
//�� �Ա���quotient�ֱ���Ϊint��double�ͣ���printf��������ȷʹ�ø�ʽ�������������������Ϊ4��5ʱ���۲����н��������ԭ��˼����ôʹ����quotient��׼ȷ��
//�� �Ա���ave�ֱ���Ϊint��double�ͣ���printf��������ȷʹ�ø�ʽ�������������������Ϊ4��5ʱ���۲첻ͬ�����н��������ԭ��
//�� �������ٳ�����F10�������۲�ÿһ����������ʱ���������ı仯�����
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//	printf("sum=%d, dif=%d, pro=%d, quo=%lf, ave=%lf\n", a + b, a - b, a * b, (double)a / b, (a + b) / 2.0);
//	return 0;
//}