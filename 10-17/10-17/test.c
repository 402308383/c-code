#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include <stdio.h>
#include <math.h>
int main()
{
    int n, i, k;
    for (n = 101; n <= 200; n += 2)
    {
        k = (int)sqrt(n);
        for (i = 2; i <= k; i++)
        {
            if (n % i == 0)
            {
                break;
            }
        }
        if (i == k+1)
            printf("%d\n", n);
    }
    return 0;
}
//struct stu 
//{
//	int sc;
//	struct stu* now;
//};
//int main()
//{
//	struct stu a = {4,&a};
//	if (((a.now)->now)->now == &a)
//	{
//		printf("yes");
//	}
//	return 0;
//}