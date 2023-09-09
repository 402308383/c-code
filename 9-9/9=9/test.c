#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
void test(int arr[])
{
    int sz2 = sizeof(arr) / sizeof(arr[0]);
    printf("sz2 = %d\n", sz2);
}
int main()
{
    int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
    int sz1 = sizeof(arr) / sizeof(arr[0]);
    printf("sz1 = %d\n", sz1);
    test(arr);
    return 0;
}
//int main()
//{
//	int arr[10] = { 0 };
//	//输⼊
//	
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	//输⼊
//	int* p = arr;
//	for (i = 0; i < sz; i++)
//	{
//		scanf("%d", p + i);
//		//scanf("%d", arr+i);//也可以这样写
//	}
//	//输出
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", *(p + i));
//	}
//	return 0;
//}
//int main()
//{
//	int arr[6] = { 1,2,3,4,5,6 };
//	printf("%p\n", &arr);
//	printf("%p\n", arr);
//	printf("%p\n",arr+1);
//	printf("%p\n", &arr + 1);
//	return 0;
//}