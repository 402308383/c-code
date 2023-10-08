#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
//int main()
//{
	//malloc free calloc realloc
	//malloc是在栈区上开辟的空间,最好要回收,不回收也会由操作系统回收
	//calloc初始化值为0
	//而malloc不进行初始化

	//return 0;
//}
//#include<stdio.h>
//有bug
//int count = 0;
//void spread(int arr[3][5],int x,int y)
//{
//	if(x>=0&&x<=3&&y<=0&&y<=5&&arr[x][y]!=1)
//	{
//
//		if (arr[x + 1][y] != 1 && arr[x][y + 1] != 1)//case 1
//		{
//			spread(arr,x+1,y);
//			spread(arr, x, y + 1);
//		}
//		if (arr[x + 1][y] == 1 && arr[x][y + 1] != 1)//case 2
//		{
//			spread(arr, x, y + 1);
//		}
//		if (arr[x + 1][y] != 1 && arr[x][y + 1] == 1)//case 3
//		{
//			spread(arr,x+1,y);
//		}
//		if (x == 3 && y == 5)
//		{
//			count++;
//			return;
//		}
//	}
//}
//
//void my_function()
//{
//	int arr[3][5] = { 0 };
//	arr[0][4] = 1;
//	arr[0][5] = 1;
//	arr[2][1] = 1;
//	spread(arr,0, 0);
//	printf("%d ", count);
//}
//
//int  main()
//{
//	my_function();
//	return 0;
//}