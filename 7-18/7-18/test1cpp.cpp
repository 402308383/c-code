#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>
//�����Լ�д��ͷ�ļ�#include����
//++�����ȼ���*���������ȼ��ߣ�Ҫʵ������ʱ��Ҫʹ��()����(*p)++
//int main()
//{
//	int a;
//	a = (int)((double)(3/2)+ 0.5 + (int)1.99 * 2);
//	int b = (int)1.99 * 2;
//	
//	printf("%d%d", a,b);
//	return 0;
//}


//���ֲ��ң���������
//int binary_search(int arr[], int k,int sz)//�����arr������������һ��ָ��
//{
//	int left = 0;
//	int right = sz;
//	while(left<=right)
//	{
//		int mid = (left + right) / 2;
//		if (arr[mid] > k)
//		{
//			right = mid - 1;
//		}
//		else if (arr[mid] < k)
//		{
//			left = mid + 1;
//		}
//		else
//		{
//			return mid;
//		}
//	}
//	return -1;
//}	
//
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k = 7;//Ҫ�ҵ���
//	int sz = sizeof(arr) / sizeof(arr[0]) - 1;
//	int ret=binary_search(arr,k,sz);//����ȥ������Ԫ�صĵ�ַ����������
//	if (ret == -1)
//		printf("�Ҳ���ָ������");
//	else
//		printf("�ҵ��ˣ��±�Ϊ%d\n",ret);
//	return 0;
//}

//int is_prime(int n)
//{
//	int j = 0;
//	for (j = 2; j <=sqrt(n); j++)
//	{
//		if (0 == n % j)
//			return 0;
//	}
//	return 1;
//}
//
//int main()
//{
//	int i = 0;
//	for (i = 100; i <= 200; i++)
//	{
//		if (is_prime(i) == 1)
//			printf("%d\n", i);
//	}
//
//	return 0;
//}