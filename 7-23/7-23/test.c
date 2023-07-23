#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
	int a=0, b=0, c=0;
	scanf("%d%d%d",&a,&b,&c);
	if (a > b)
	{
		if (b > c)
			printf("%d% %d %d", a, b, c);
		else
		{
			if (a > c)
				printf("%d %d %d", a, c, b);
			else
				printf("%d %d %d", c, a, b);
		}
	}
	else//b>a
	{
		if (a > c)
			printf("%d %d %d", b, a, c);
		else//c>a
		{
			if(c>b)
				printf("%d %d %d",c ,b ,a );
			else
				printf("%d %d %d", b,c ,a );
		}
	}

	return 0;
}






//int main()
//{
//	int i = 0;
//	for (i = 1; i <= 100; i++)
//	{
//		if (0 == i % 3)
//			printf("%d ", i);
//	}
//	return 0;
//}