#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
//int main()
//{
	//malloc free calloc realloc
	//malloc����ջ���Ͽ��ٵĿռ�,���Ҫ����,������Ҳ���ɲ���ϵͳ����
	//calloc��ʼ��ֵΪ0
	//��malloc�����г�ʼ��

	//return 0;
//}
//#include<stdio.h>
//��bug
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