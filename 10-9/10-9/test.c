#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>


 int count = 0;
void spread(int arr[4][6],int x,int y)
{
	if(x>=0&&x<=3&&y>=0&&y<=5&&arr[x][y]==0)
	{

		if (arr[x + 1][y] ==0 && arr[x][y + 1] ==0)//case 1
		{
			spread(arr,x+1,y);
			spread(arr, x, y + 1);
		}
		if (arr[x + 1][y] !=0 && arr[x][y + 1] ==0)//case 2
		{
			spread(arr, x, y + 1);
		}
		if (arr[x + 1][y] ==0 && arr[x][y + 1] !=0)//case 3
		{
			spread(arr,x+1,y);
		}
		if (x == 3 && y == 5)
		{
			count++;
			return;
		}
	}
}

void my_function()
{
	int arr[4][6] = { 0 };
	arr[0][4] = 1;
	arr[0][5] = 1;
	arr[2][1] = 1;
	spread(arr,0, 0);
	printf("%d ", count);
}

int  main()
{
	my_function();
	return 0;
}
