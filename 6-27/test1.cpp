#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//计算1到10的阶乘和
//int main()
//{
//	int n = 10,i=10, e = 1, s = 0;
//	for (i=10;i>=1;i--)
//	{
//		n = i;
//		for (e = 1; i >= 1; n--)
//		{
//			e = n * e;
//		}
//		s = s + e;
//	}
//	printf("sum=%d\n", s);
//	return 0;
//}

//eg.计算n的阶乘
//int main()
//{
//	int n = 0 , s = 1;
//  scanf("%d",&n);
//	for (s=2; n >= 1; n--)//语句1是开始这个循环的变量初始化环节，变量的初始化只是在开始这整个循环时执行一次，不是每进行一次循环就重新初始化一次，如果没有该环节那么嵌套时这（几）个变量就会以上一次该内循环结束时的值进行下一整次循环判断
//		s = n * s;
//	printf("%d",s);
//
//
//	return 0;
//}

//循环：
//while循环：
//...
// 
//int a=0;表达式1-循环变量的初始化
//while(表达式2-判断)
//{
//	i++;表达式3-循环条件的调整
//}
//for (表达式1;表达式2；表达式3)
	//循环语句
//int main()
//
//{
//	for (int i = 1; i <= 10; i++)
//		printf("%d\n", i);//i++执行于循环语句之后，if句中的continue只跳过循环部分来到调整部分，while却是跳过con后的所有部分来到判断部分，不可在循环体内改变变量
//	//建议for语句循环变量用前闭后开写法（i=0；i<10;...)
//	return 0;
//}
//for的三部分都可省略但判断部分如果被省略那默认就恒为正，不要随便省略
//int main()
//{
//	int i = 0,j = 0;
//	for (i=0; i < 10; i++)
//	{
//		for(j=0;j<10;j++)
//		{
//			printf("haha\n");
//		}
//	}
//	return 0;
//
//}

//int a=0；
//a=getchar（）；
//if(a=='Y')
//   ......
//字符型判断和运算时都要转化为ASCII码值，而整形浮点型运算和判断直接进行


//int main()
	//{
//		//int a = 1;
//char c = getchar();
//		char d = '0';//字符在内存中存储的是一个数值，而数值本身就以值的形式存储
//		//a = getchar();
//		//getchar();
//		//c = getchar();
//		printf("%d\n", d);//48
//		printf("%c", d);//0
//
//		//ascii码值和对应
//		return 0;
//}


 
