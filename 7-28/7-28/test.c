#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<time.h>
//逆序输出
//int main()
//{
//	int arr1[10] = {0};
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		scanf("%d", &arr1[i]);
//	}
//	for (i = 9; i >=0; i--)
//	{
//		printf("%d ", arr1[i]);
//	}
//	return 0;
//}



//x打印
//int main()
//{
//	int n = 0;
//	int i = 0, j = 0;
//	scanf("%d", &n);
//		for (i = 1; i <=n ;i++)
//		{
//			for (j = 1; j <=n ; j++)
//			{
//				if (i == j || j == n - i+1)
//				{
//					printf("*");
//				}
//				else
//				{
//					printf(" ");
//				}
//			}
//			printf("\n");
//		}	
//	return 0;
//}


//空心正方形
//int main() 
//{
//	int n = 0,i=0,j=0;
//	scanf("%d", & n);
//	for (i = 0; i < n; i++)
//	{
//		for (j = 0; j < n; j++)
//		{
//			if (i == 0 || i == n - 1)
//			{
//				printf("* ");
//			}
//			else
//			{
//				if (j == 0 || j == n - 1)
//				{
//					printf("* ");
//				}
//				else
//					printf("  ");
//			}
//		}
//		printf("\n");
//	}
//
//	return 0;
//}


//打印1000-2000闰年
//int main(void)
//{
//	int y = 0;
//	int count = 0;
//	for (int y = 1000; y < 2001; y++)
//	{
//
//		if (y % 4 == 0)
//		{
//			if (y % 100 != 0)
//			{
//				printf("%d年是闰年\n", y);
//				count++;
//			}
//		}
//		if (y % 400 == 0)
//		{
//			printf("%d年是闰年\n", y);
//			count++;
//		}
//	}
//	printf("count = %d\n", count);
//	return 0;
//}

//最大公约数
//int gcd(int x, int y)
//{
//	int i,c;
//	if (x < y)//确保x为较大值
//	{
//		i = x;
//		x = y;
//		y = i;
//	}
//	while (1)
//	{
//		c = x % y;
//		if (c != 0)
//		{
//			x = y;
//			y = c;
//		}
//		else
//			break;
//	}
//	return y;
//}
//
//int main()
//{
//	int x = 0, y = 0,GCD=0;
//	printf("请输入两个自然数");
//	scanf("%d%d",&x, &y);
//	GCD = gcd(x,y);
//	printf("这两个数的最大公约数为%d", GCD);
//
//	return 0;
//}

//交换数组内容
//void swap(char* arr1,char* arr2,int sz)
//{
//	int i = 0;
//	char ex;
//	for(i=0;i<sz;i++)
//	{
//		ex = *(arr2 + i);
//		*(arr2 + i) = *(arr1 + i);
//		*(arr1 + i) = ex;
//	}
//	
//}
//
//int main()
//{
//	int sz = 0;
//	char arr1[] = "I AM A TEACHER";
//	char arr2[] = "I am a student";
//	char arr3[] = { 0};
//	printf("%s\n", arr1);
//	printf("%s\n", arr2);
//	sz = sizeof(arr1) / sizeof(arr1[1]);
//	swap(arr1, arr2,sz);
//	printf("%s\n", arr1);
//	printf("%s\n", arr2);
//	return 0;
//
//}
//
//int main() 
//{
//    int m = 0, n = 0, i = 0, j = 0;
//    scanf("%d %d", &n, &m);
//    int arr[10][10] = { 0 };
//    for (i = 0;i < n;i++)
//    {
//        for (j = 0; j < m; j++)
//        {
//            scanf("%d",&arr[i][j]);
//        }
//    }
//    for (i = 0;i < m; i++)
//    {
//        for (j = 0;j<n;j++)
//        {
//            printf("%d ", arr[j][i]);
//        }
//        printf("\n");
//    }
//
//    return 0;
//}

//猜数字游戏 
//void menu()
//{
//	printf("*************************\n");
//	printf("******1.play 0.exit******\n");
//	printf("*************************\n");
//}
//void game()
//{
//	int x = 0,i=0;
//	x = rand()/300-8;
//	while (1) {
//		printf("请输入要猜的数字\n");
//		scanf("%d", &i);
//		if (i > x)
//		{
//			printf("猜大了\n");
//		}
//		else if (i < x)
//		{
//			printf("猜小了\n");
//		}
//		else
//		{
//			printf("猜对了\n");
//			break;
//		}
//	}
//}
//
//int main()
//{
//	int input = 0;
//	srand((unsigned int)time(NULL));
//	do 
//	{
//		menu();
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//		{
//			printf("游戏开始\n");
//			game();
//			break;
//		}
//		case 0:
//		{
//			printf("退出游戏\n");
//			break;
//		}
//		default:
//		{
//			printf("输入非法，请重新输入\n");
//		}
//		}
//		
//	} while (input);
//
//	
//	return 0;
//}

//求十个数平均数
//int average(int arr[])
//{
//	int sum = 0, i =0;
//	for (i = 0; i < 10; i++)
//	{
//		sum += arr[i];
//	}
//	return sum / 10.0;
//}
//
//int main()
//{
//	int arr[10] = { 0 }, i = 0;
//	double avg = 0;
//	for (i = 0; i < 10; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	avg = average(arr);
//	printf("这十个数的平均数为%lf", avg);
//	return 0;
//}