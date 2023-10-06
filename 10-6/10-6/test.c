#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<math.h>
//void print(char* p, int k,int sum)
//{
//	int i = 0;
//	int count = 0;
//		while(i<k)
//		{
//			if ('0' == *(p + i))
//			{
//				if (count == 0)
//				{
//					if (sum % (int)pow(10,(k-i) ) == 0)
//					{
//						break;
//					}
//					printf("%C", '0' + 49);
//					count++;
//				}
//					i++;
//				continue;
//				
//			}
//			else
//			{
//				count = 0;
//				printf("%c", *(p + i) + 49);
//				if (9 == k)
//				{
//					if (0 == i)
//					{
//						printf("Y");
//					}
//					if (1 == i || 5 == i)
//					{
//						printf("Q");
//					}
//					if (2 == i || 6 == i)
//					{
//						printf("B");
//					}
//					if (3 == i || 7 == i)
//					{
//						printf("S");
//					}
//					if (i == 4 && k >= 5)
//					{
//						printf("W");
//					}
//				}
//				else if (i <= 8 && i >= 5)
//				{
//					if (0 == i || 4 == i)
//					{
//						printf("Q");
//					}
//					if (1 == i || 5 == i)
//					{
//						printf("B");
//					}
//					if (2 == i || 6 == i)
//					{
//						printf("S");
//					}
//					if (i == 3)
//					{
//						printf("W");
//					}
//				}
//				else
//				{
//					if (0 == i || 4 == i)
//					{
//						printf("Q");
//					}
//					if (1 == i || 5 == i)
//					{
//						printf("B");
//					}
//					if (2 == i || 6 == i)
//					{
//						printf("S");
//					}
//
//				}
//			}
//			i++;
//		}
//	}
//int main()
//{
//	char arr[10] = { 0 };
//	int k = 0;
//	int sum = 0;
//	int i = 0;
//	scanf("%s", arr);
//	k = strlen(arr);
//	for (i = 0; i < k; i++)
//	{
//		sum =sum+(arr[i] - 48)*pow(10, k - i - 1);
//	}
//	print(arr, k,sum);
//}

//enum Sex
//{
//	Male=1,
//	Famle,
//	Nutural,
//	Sadde=3
//
//};//用枚举常量给枚举变量赋值
//int main()
//{
//	printf("%d %d %d %d", Male, Famle, Nutural,Sadde);
//	return 0;
//}
//int main()
//{
//	int n = 9;
//	float* pFloat = (float*)&n;
//	printf("n的值为：%d\n", n);
//	printf("*pFloat的值为：%f\n", *pFloat);//1001
//	*pFloat = 9.0;
//	printf("num的值为：%d\n", n);
//	printf("*pFloat的值为：%f\n", *pFloat);
//	return 0;
//}
//int main()
//{
//	char a = 128;
//	//00000000000000000000000010000000 
//	//01111111111111111111111101111111
//	//01111111111111111111111110000000
//	printf("%u\n", a);
//	return 0;
//}
//int main()
//{
//	char a = -128;//10000000000000000000000001000000 111111111111111111111111 10000000
//	//整型提升的对象是a,以a的类型进行提升,有符号则前补符号位,无符号则补0,提升谁就看谁类型,使用时才提升
//	//11111111111111111111111110000000
//	//
//	printf("%u\n", a);//认为打印的是无符号整数
//	return 0;
//}
//int main()
//{
//	char a = -1;
//	signed char b = -1;
//	unsigned char c = -1;//10000001 11111111-255
//	printf("a=%d,b=%d,c=%d", a, b, c);
//	return 0;
//}
//int main()
//{
//	int a = 0x11223344;
//	return 0;
//}