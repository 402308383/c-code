#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>

int main()
{
	int a = 3;
	int b = 5;
	a = a ^ b;
	b = a ^ b;
	a = b ^ a;
	printf("%d ", a);
	printf("%d ", b);
	return 0;
}

//int onenum(int n)
//{
//	int count = 0;
//	while (n != 0)
//	{
//		n = n & (n - 1);
//		count++;
//	}
//	return count;
//}
//
//int main()
//{
//	int n=0,num=0;
//	scanf("%d", &n);
//	num = onenum(n);
//	printf("1�ĸ���Ϊ%d��", num);
//}


//
//void DigitSum(int n)
//{
//	if (n > 9)
//	{
//		printf("%d ", n % 10);
//		DigitSum(n / 10);
//	}
//	else
//	{
//		printf("%d ", n);
//	}
//	
//}
//
//int main()
//{
//	int n=0;
//	scanf("%d",&n);
//	DigitSum(n);
//	return 0;
//}

//#include<stdio.h>
//int fun(int a)
//{
//	if (a <= 1)
//		return 1;
//	return(a * fun(a - 1));
//}
//int main()
//{
//	int a, b;
//	printf("input a num:\n");
//	scanf("%d", &a);
//	b = fun(a);
//	printf("%d!=%d\n", a, b);
//	return 0;
//}

//int DigitSum(int n)
//{
//	if (n < 10)
//		return n;
//	return n % 10 + DigitSum(n / 10);
//}
//
//int main()
//{
//	int n=0,sum=0;
//	scanf("%d",&n);
//	sum=DigitSum(n);
//	printf("sum=%d\n", sum);
//	return 0;
//}

//���ű��ʽֵΪ���һ������ǰ��ı��ʽ���ܶԺ���ı��ʽ��Ӱ�졣

//���Ʋ�����<<����������Ϊ�����������Ҳ�0��
//���Ʋ�����>>1.�߼����ƣ���0�Ҷ�����2.�������ƣ����÷���λ��䣬�Ҷ������ͱ������йء�
//��λ��&���벢���߼�һ�µ��ǲ������Ƕ����ƣ���1���Ϊ1��
//��λ��|��������߼�һ�µ��ǲ������Ƕ����ƣ���0�ٲ�Ϊ0��
//��λ���^��������λ��ͬΪ0����Ϊ1�����֧�ֽ�����,һ��������Լ�Ϊ0�����0Ϊ�Լ���a^a=0,a^0=a,��λ��1�����⣬��n����λ��1(n-1)��������λ����������һ��1����λ����Ըı�ĳһ������λ
//~��λȡ������������λ

//����ԭ������
// ���λ�Ƿ���λ��1Ϊ-��0Ϊ+��
// ֱ��д��������ԭ�롣
//���������һ����ͬ����0��ͷ���ǰ˽��ƣ�0x��ͷΪʮ�����ơ�
// ���λ�Ƿ���λ��1Ϊ-��0Ϊ+��
// �������ڴ��д油�롣
//���������ԭ�룬����λ���䣬����λ��λȡ����
//���룺����+1��
//ԭ�벹���໥ת����ʽ��ͬ����ȡ��+1��
//�����롰���㡱��ʱ���õ��ǡ����롱��(ע��)
//��ӡ����ԭ�롣

//int ji(int n, int k)
//{
//	if (k == 1)
//	{
//		return n;
//	}
//	else
//		return n * ji(n,k-1);
//}
//
//int main()
//{
//	int n = 0, k = 0,sm=0;
//	scanf("%d%d",&n,&k );
//	sm=ji(n,k);
//	printf("%d��%d�η�Ϊ%d",n,k,sm);
//}