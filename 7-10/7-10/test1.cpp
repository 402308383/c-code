#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>
	//求素数，1。试除法
int main()
{
	int i = 0, count = 0;
	for (i = 100; i <= 200; i++)
	{
		int j = 0;
		//for (j = 2; j < i; j++)//试除法，需要打印100-200之间的素数
		//优化：
		for(j=2;j<=sqrt(i);j++)//sqrt()-开平方的数学库函数math.h
		{
			if (0 == i % j)
			{ 
				break;
			}
		}
		if (j>sqrt(i))
		{
			count++;
			printf("%d ", i);	
		}	
	}
	printf("count=%d\n", count);
	return 0;
}
