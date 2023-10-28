#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include<math.h>


//int is_prime(int n) {
//    if (n <= 1) {
//        return 0;
//    }
//    if (n == 2) {
//        return 1;
//    }
//    if (n % 2 == 0) {
//        return 0;
//    }
//    for (int i = 3; i * i <= n; i += 2) {
//        if (n % i == 0) {
//            return 0;
//        }
//    }
//    return 1;
//}
//
//void goldbach_conjecture(int limit) {
//    int count = 0;
//    for (int even_number = 4; even_number <= limit; even_number += 2) {
//        int found = 0;
//        for (int i = 2; i <= even_number / 2; i++) {
//            if (is_prime(i) && is_prime(even_number - i)) {
//                printf("%4d=%4d+%4d", even_number, i, even_number - i);
//                found = 1;
//                count++;
//                if (count % 4 == 0) {
//                    printf("\n");
//                }
//                else {
//                    printf(" ");
//                }
//                break;
//            }
//        }
//    }
//}
//
//int main() {
//    goldbach_conjecture(2000);
//    return 0;
//}
//有bug，要改
//int is_prime(int i)
//{
//	int j = 2;
//	double sqr = sqrt(i);
//	for (j = 2; j <= sqr; j++)
//	{
//		if (i % j == 0)
//			return 0;
//	}if (i == 1)
//	{
//		return 0;
//	}
//	return 1;
//}
//int main()
//{
//	int n = 0;
//	int i = 0;
//	int count = 0;
//	for (i = 1; i < 2000; i++)
//	{
//		if (is_prime(i))
//		{
//			for (int j = 1; j < 2000; j++)
//			{
//				int c = 0;
//				if (is_prime(j))
//				{
//						c=i+j;
//						if (c <= 2000)
//						{
//							printf(" % 4d = % 4d + % 4d",c,i,j);
//							count++;
//							if (count % 4 == 0)
//							{
//								printf("\n");
//							}
//							else
//							{
//								printf(" ");
//							}
//						}
//						
//				}
//
//
//			}
//		}
//	}
//	return 0;
//}

//#include <stdbool.h>
//#include <stdio.h>
////验证哥德巴赫猜想之一—— 2000以内的正偶数（大于等于4）都能够分解为两个质数之和。每个偶数表达成形如：4=2+2的形式，请每行输出4个偶数及其分解结果。
//提示:每一个偶数可能存在多种分解表达形式, 但是只要求出第一种分解就停止求其他分解,
//输出结果中每一个偶数只给出一种分解的表达


//int main() {
//    int rows = 5;
//    for (int i = 0; i < rows; i++) {
//        for (int j = 0; j < i; j++) {
//            printf(" ");
//        }
//        for (int k = 0; k < 2 * (rows - i) - 1; k++) {
//            printf("*");
//        }
//        printf("\n");
//    }
//    return 0;
//}

//bool isPrime(int number) {
//    if (number <= 1) {
//        return false;
//    }
//    for (int i = 2; i * i <= number; i++) {
//        if (number % i == 0) {
//            return false;
//        }
//    }
//    return true;
//}
//
//int main() {
//    int count = 0;
//    for (int i = 100; i <= 999; i++) {
//        if (isPrime(i)) {
//            printf("%4d ", i);
//            count++;
//            if (count % 8 == 0) {
//                printf("\n");
//            }
//        }
//    }
//    printf("\n");
//    return 0;
//}


//#include<stdio.h>
//#include<math.h>
//
//int main()
//{
//	double m = 0.0;
//	float s = 0.0f;
//	int i = 0;
//	scanf("%lf", &m);
//	int flag = 1;
//	for (i = 1;; i++)
//	{
//		int j = 0;
//		int mul = 1;
//		
//		for (j = 1; j <= i; j++)
//		{
//			mul *= j;
//		}
//		s += pow(m, i) * flag / (double)mul;
//		flag = -flag;
//		if (fabs(pow(m, i) * flag / (double)mul) < pow(10,-4))
//			break;
//	}
//	printf("%.2f", s);
//	return 0;
//}
//#include<stdio.h>
//	//test.c
//	//声明外部函数
//	extern int Add(int x, int y);
//	//声明外部的全局变量
//	extern int g_val;
//	int main()
//	{
//		int a = 10;
//		int b = 20;
//		int sum = Add(a, b);
//		printf("%d\n", sum);
//		return 0;
//	}