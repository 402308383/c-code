#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<windows.h>
int main()
{
	int i = 0, j = 0, n = 0,c=0;
	scanf("%d", &n);
	system("cls");
	for (i = 1; i<=n; i++)
	{
		for (j = 1; j<=i; j++)
		{
			c = i * j;
			printf("%2d*%2d=%3d ",i,j,c);
		}
		printf("\n");
	}
	return 0;
}