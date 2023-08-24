#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
//字符串旋转结果
//写一个函数，判断一个字符串是否为另外一个字符串旋转之后的字符串。
//例如：给定s1 = AABCD和s2 = BCDAA，返回1
//给定s1 = abcd和s2 = ACBD，返回0.
//AABCD左旋一个字符得到ABCDA
//AABCD左旋两个字符得到BCDAA
//AABCD右旋一个字符得到DAABC
int is_c(char s1[5], char s2[5])
{
	int i = 0;
	
	int j = 0;
	for (j = 0; j < 5; j++)
	{
		int a1 = s2[4];
		for (i = 3; i >=0;i--)
		{
			s2[i+1] = s2[i];
		}
		s2[0] = a1;
		if (memcmp(s1, s2,5) == 0)
			return 1;
	}
	if (j == 5)
		return 0;

}

int main()
{
	char s1[5] = "AABCD";
	char s2[5] = "BCDAA";
	int ret=is_c(s1, s2);
	printf("%d ", ret);
	return 0;
}




//调整奇数偶数顺序
//输入一个整数数组，实现一个函数，
//来调整该数组中数字的顺序使得数组中所有的奇数位于数组的前半部分，
//所有偶数位于数组的后半部分。
//void func(int* ptr,int sz)
//{
//	int i = 0;
//	int count = 0;
//	for (i = 0; i < sz; i++)
//	{
//		int tep = 0;
//		if ((*(ptr + i)) % 2 == 1)
//		{
//			tep = *(ptr + count);
//			*(ptr + count) = *(ptr + i);
//			*(ptr + i) = tep;
//			count++;
//		}
//	}
//}
//
//int main()
//{
//	int arr[8] = { 2,5,1,6,8,3,9,4};
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	func(arr,sz);
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}