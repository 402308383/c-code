#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
	int arr[2000] = { 0 };
	int i = 0;
	scanf("%d", &i);
	int n=0;
	while (n<i)
	{
		scanf("%d", &arr[n]);
		arr[n + i] = arr[n];
		n++;
	}
	for (n = 0; n < 2*i; n++)
	{
		printf("%d ", arr[n]);
	}
	return 0;

}
//使用malloc函数模拟开辟一个3 * 5的整型二维数组，开辟好后，使用二维数组的下标访问形式，访问空间。
//int main()
//{
//	int(*arr)[5] = (int(*)[5])malloc(3 * 5 * sizeof(int));
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		int j = 0;
//		for (j = 0; j < 5; j++)
//		{
//			arr[i][j] = 1;
//		}
//	}
//	for (i = 0; i < 4; i++)
//	{
//		int j = 0;
//		for (j = 0; j < 5; j++)
//		{
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//}
//int main()
//{
//	int* a = (int *)malloc(20);
//	int* b = (int*)calloc(2,10);
//	//int* c=(int *)relloc(b,50);
//	//if (a != NULL)
//	/*{
//		free(a);
//		a = NULL;
//	}*/
//
//}
//void GetMemory(char** p)
//{
//	 *p = (char*)malloc(100);
//}
//int main(void)
//{
//	 char* str = NULL;
//	 GetMemory(&str);
//	 strcpy(str, "hello world");
//	 printf(str);
//}
//int main(void)
//{
//    int a, b, c, i;
//
//    for (a = 192; a < 1000/3; a++)
//    {
//        b = a * 2;
//        c = a * 3;
//        int m[9];
//        m[0] = a / 100%10;
//        m[1] = a /10%10;
//        m[2] = a % 10;
//
//        m[3] = b / 100%10;
//        m[4] = b / 10 % 10;
//        m[5] = b % 10;
//
//        m[6] = c / 100%10;
//        m[7] = c / 10 % 10;
//        m[8] = c % 10;
//        for (i = 0; i < 8; i++)
//        {
//            int j = 0;
//            for (j = i+1; j < 9; j++)
//            {
//                if (m[i] == m[j])
//                    break;
//            }
//            if (j != 9)
//                break;
//
//        }
//        if (i==8)
//        {
//            printf("%d   %d   %d\n", a, b, c);
//        }
//    }
//}
