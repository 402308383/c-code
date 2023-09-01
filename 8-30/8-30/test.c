#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
//冒泡模拟qsort
//int cp(const void* e1, const void* e2)
//{
//	return *((int*)e1) - *((int*)e2);
//}
//void swap(void* e1, void* e2, size_t width)
//{
//	int i = 0;
//	for (i = 0; i < width; i++)
//	{
//		char tmp = 0;
//		tmp = *((char*)e1 + i);
//		*((char*)e1 + i) = *((char*)e2 + i);
//		*((char*)e2 + i) = tmp;
//	}
//
//}
//void my_qsort(void* base, size_t num, size_t width, int (*pcp)(void*,void*))
//{
//	int i = 0;
//	int j = 0;
//	for (i = 0; i <= num-1; i++)
//	{
//		int flag = 0;
//		for (j = 0; j < num - i-1; j++)
//		{
//			int ret = 0;
//			ret = pcp((char*)base + j*width, (char*)base + (j+1)*width);
//			if (ret > 0)
//			{
//				swap((char*)base + j * width, (char*)base + (j + 1) * width,width);
//				flag = 1;
//			}
//		}
//		if (0 == flag)
//		{
//			break;
//		}
//	}
//}
//
//int main()
//{
//	int arr[6] = { 4,2,7,3,1,8 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int i = 0;
//	my_qsort(arr, sz, sizeof(int), cp);
//	for (i = 0; i < 6; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}
//#include<stdlib.h>
//int main() 
//{
//
//    int year, month;
//
//    while (scanf("%d %d", &year, &month) != EOF)
//
//    {
//
//        switch (month)
//
//        {
//
//        case 2:
//
//            if (year % 400 == 0 || year % 4 == 0 && year % 100 != 0)
//
//                printf("29\n");
//
//            else
//
//                printf("28\n");
//
//            break;
//
//        case 4:
//
//        case 6:
//
//        case 9:
//
//        case 11: printf("30\n"); break;
//
//        default: printf("31\n"); break;
//
//        }
//
//    }
//
//    return 0;
//}
////单身狗2
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,1,2,3,4,6 };
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		int j = 0;
//		int count = 0;//注意（计数器）变量的生命周期
//		for (j = 0; j < 10; j++)
//		{
//			if (((arr[i]) ^( arr[j])) == 0)
//			{
//				count++;
//			}
//			
//		}
//		if (count == 1)
//			printf("%d ",arr[i]);
//		
//	}
//	return 0;
//}

//int cpi(const void* e1, const void* e2)
//{
//	return (*(int*)e1) - (*(int*)e2);
//}
//int cps(const void* e1, const void* e2)
//{
//	return (*(int*)e1) - (*(int*)e2);
//}
//int main()
//{
//	int arr[7] = { 4,1,5,6,8,2,3 };//整形数组
//	char arr1[7] = "asdfwqz";
//	int i = 0;
//	qsort(arr,7,4,cpi);
//	qsort(arr1, 7, 1, cps);
//	for (i = 0; i < 7; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	for (i = 0; i < 7; i++)
//	{
//		printf("%c ", arr1[i]);
//	}
//	return 0;
//}

//转移表
//void menu()
//{
//	printf("**********   0.exit    *********\n");
//	printf("******** 1.ADD     2.SUB *******\n");
//	printf("******** 3.MUL     4.DIV *******\n");
//}
//int ADD(int x, int y)
//{
//	return x + y;
//}
//int SUB(int x, int y)
//{
//	return x - y;
//}int MUL(int x, int y)
//{
//	return x * y;
//}int DIV(int x, int y)
//{
//	return x / y;
//}
//
//int main()
//{
//	int input = 0;
//	do 
//	{
//		int ret = 0;
//		int x = 0;
//		int y = 0;
//		menu();
//		printf("请选择：\n");
//		scanf("%d", &input);
//		int (*p[5])(int, int) = { 0,ADD,SUB,MUL,DIV };
//		if (input >= 1 && input <= 4)
//		{
//			printf("请输入两个数\n");
//			scanf("%d %d", &x, &y);
//			ret = (p[input])(x, y);
//			printf("结果是%d\n", ret);
//		}
//		else if (input == 0)
//		{
//			break;
//		}
//		else
//		{
//			printf("输入非法，请重新输入\n");
//			continue;
//		}
//		
//	} while (input);
//	return 0;
//}

//杨辉三角
//int main()
//{
//	int arr[8][8] = { 0 };
//	int i = 0;
//	int k = 0;
//	int j = 0;
//	printf("请输入要打印的行数；>");
//	scanf("%d", &k);
//	for (i = 0; i < k; i++)
//	{
//		arr[i][0] = 1;
//	}
//	for (i = 0; i < k; i++)
//	{
//		arr[i][i] = 1;
//	}
//	for (i = 2; i <= k; i++)
//	{
//		for (j = 1; j <= i - 1; j++)
//		{
//			arr[i][j] = arr[i - 1][j] + arr[i - 1][j - 1];
//		}
//	}
//	for (i = 0; i < k; i++)
//	{
//		for (j = 0; j <=i; j++)
//		{
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}

//a说：不是我。
//b说：是c。   
//c说：是d。   
//d说：c在胡说 
//已知3个人说了真话，1个人说的是假话。
//现在请根据这些信息，写一个程序来确定到底谁是凶手
//int is_crime()
//{
//	int k = 0;
//	for (k = 0; k < 5; k++)
//	{
//		if((k!=1)+(k==3)+(k==4)+(k!=4)==3)
//			return k;
//	}
//}
//
//int main()
//{
//	//int group[4] = { 0 };
//	int ret = 0;
//	ret = is_crime();
//	printf("%d号是凶手\n",ret);
//	return 0;
//}
//int main()
//{
//	int i = 2;
//	printf("%d", (i == 2));
//	return 0;
//}