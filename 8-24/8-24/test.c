#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
//�ַ�����ת���
//дһ���������ж�һ���ַ����Ƿ�Ϊ����һ���ַ�����ת֮����ַ�����
//���磺����s1 = AABCD��s2 = BCDAA������1
//����s1 = abcd��s2 = ACBD������0.
//AABCD����һ���ַ��õ�ABCDA
//AABCD���������ַ��õ�BCDAA
//AABCD����һ���ַ��õ�DAABC
int is_c(char s1[5], char s2[5])
{
	int i = 0;
	
	int j = 0;
	for (j = 0; j < 5; j++)
	{
		int a1 = s2[4];
		for (i = 3; i >=0;i--)
		{
			s2[i+1] = s2[i];
		}
		s2[0] = a1;
		if (memcmp(s1, s2,5) == 0)
			return 1;
	}
	if (j == 5)
		return 0;

}

int main()
{
	char s1[5] = "AABCD";
	char s2[5] = "BCDAA";
	int ret=is_c(s1, s2);
	printf("%d ", ret);
	return 0;
}




//��������ż��˳��
//����һ���������飬ʵ��һ��������
//�����������������ֵ�˳��ʹ�����������е�����λ�������ǰ�벿�֣�
//����ż��λ������ĺ�벿�֡�
//void func(int* ptr,int sz)
//{
//	int i = 0;
//	int count = 0;
//	for (i = 0; i < sz; i++)
//	{
//		int tep = 0;
//		if ((*(ptr + i)) % 2 == 1)
//		{
//			tep = *(ptr + count);
//			*(ptr + count) = *(ptr + i);
//			*(ptr + i) = tep;
//			count++;
//		}
//	}
//}
//
//int main()
//{
//	int arr[8] = { 2,5,1,6,8,3,9,4};
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	func(arr,sz);
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}