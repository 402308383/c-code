#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<Windows.h>
#include<stdlib.h>

//password input;

int main()
{
	int i = 0;
	char pswd[] = "asdasd123";//数组变量才能储存字符串
	char input[] = { 0 };
	for (i = 0; i < 3; i++)
	{
		printf("请输入密码->\n");
		scanf("%s", input);
		if (pswd == input)//判断字符串的相等不能使用==，而应使用
		{
			printf("密码正确\n");
			break;
		}
		else
			printf("密码错误,请重试\n");
	}
	if (i == 3)
		printf("三次均错，请推出");



	return 0;
}















//welcome to bit!!!!-18
//eg,
//#include<string.h>
//int main()
//{
//	char arr1[] = "welcome to bit!!!!!!";
//	char arr2[] = "####################";
//	int left = 0;
//	int right = strlen(arr1) -1;
//	while (left<= right) 
//	{
//
//		arr2[right] = arr1[right];
//		arr2[left] = arr1[left];
//		left += 1;
//		right -= 1;
//		printf("%s\n", arr2);
//		Sleep(1000);//停留1s，单位是ms，1000ms=1s；#include<Windows.h>
//		system("cls");//执行系统命令的函数-“cls”-清空屏幕,#include<stdlib.h>
//	}
//	printf("%s\n", arr2);
//	return 0;
//}


//int main()//(自写)
//{
//
//	char arr[] = "welcome to bit!!!!";//0-17
//	char c = '#';
//	int i = 0;
//	while (i<=9)
//	{	
//		printf("%s\n", arr);
//		arr[i] = c;
//		arr[17 - i] = c;
//		i += 1;
//		
//	}
//	printf("%c", arr[0]);
//	
//	
//
//	return 0;
//}


//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
////      下标      0 1 2 3 4 5 6 7 8 9
//	int k = 11;//
//	int left = 0;
//	int right = 9;
//	int mid = 0;
//	while (left<=right)
//	{
//		mid = (right + left) / 2;
//		if (k < mid)
//			right = mid - 1;
//		else if (k > mid)
//			left = mid + 1;
//		else
//		{
//			printf("找到了，下标为%d\n，这个数为%d", mid,arr[mid]);
//			break;
//		}
//	}
//	if (right < left)
//		printf("找不到了额");
//
//	return 0;
//}