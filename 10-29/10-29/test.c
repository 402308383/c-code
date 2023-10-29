#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include <math.h>
double f(double x, int n);
int main() {
	double x;
	int n;
	double end = 0;
	scanf("%lf %d", &x, &n);
	end = f(x, n);
	printf("%.2f", end);
	return 0;
}
double f(double x, int n)
{
	if (n == 1)
		return sqrt(1 + x);
	if (n > 1)
		return sqrt(n + f(x, n - 1));
}
//int main()
//{
//	char arr[] = "abcde";
//	int i = 0;
//	for (i = 0; i < 5; i++)
//	{
//		printf("%c ", arr[i]);
//		printf("%d ",arr[i]);
//		printf("\n");
//
//	}
//
//	return 0;
//}