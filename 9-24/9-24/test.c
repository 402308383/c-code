#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
//�ַ���������%d(�з�����)��ʽ��ӡ�ᷢ����������
//char���ͺ�short�����ڸ�������ֵʱ�ᷢ���ض�,x86����������Ĭ����32λ,char��short������ʹ��(��ӡ,����......)ʱ�ᷢ����������(x86�����¶���ת��Ϊ32λ��ʹ��),�з���λ���Ϸ���λ,�޷���λ����0
//-128-1000000000000000001000000
//11111111111111110111111
int main()
{
	char a = -128;

}

//void my_memmove(char* des, char* sor,int num)
//{
//	//int i = 0;
//	if (des > sor)
//	{
//		for (num=num-1; num >= 0; num--)
//		{
//			*(des + num) = *(sor + num);
//		}
//	}
//	else if (des < sor)
//	{
//		for (int i = 0; i < num; i++)
//		{
//			*(sor + i) = *(des + i);
//		}
//	}
//}
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int i =0;
//	my_memmove(arr + 2, arr, 20);
//	//memmove(arr + 2, arr, 20);
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ",arr[i]);
//	}
//	return 0;
//}