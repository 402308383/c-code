#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
	int i = 0, count = 0;
	for (i = 1; i <= 100; i++)
	{
		if (9 == i / 10 || 9 == i % 10)
		{
			printf("%d\n", i);
			count++;
		}
		if (9 == i / 10 && 9  == i % 10)
		{
			count++;
		}
	}
	printf("count=%d", count);
	return 0;
}