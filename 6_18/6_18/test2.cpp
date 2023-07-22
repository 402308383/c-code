#define _CRT_SECURE_NO_WARNINGS 1
//DAY7
//EOF-文件结束标志，\0也是一个字符,是空字符，但数的时候可以不算（经验）

//DAY8/9
#include<stdio.h>
//
//int main()
//{
//	printf("%d\n", sizeof(int*));
//	printf("%d\n", sizeof(short*));
//	printf("%d\n", sizeof(char));
//	printf("%d\n", sizeof(double));
//	printf("%d\n", sizeof(float));
//	printf("%d\n", sizeof(long));
//	printf("%d\n", sizeof(long long));
//
//}
//
////
//int main()
//{
//	char ch = 'A';
//	char* p = &ch;//*前指p指向的对象的类型，地址（指针变量）指向变量，32位指针变量大小-4字节-一个地址数值位数为32（二进制)8-十六进制，64位-8字节,也指一个地址的数值位数。32位有2^32个字节的空间，也就有2^32个地址（1byte->1个地址），地址线控制的是字节（8个二进制bit比特位（1/0））
//	int a;
//	printf("%p\n", &a);
//	printf("%d\n", p);
//	printf("%d\n", sizeof(int*));
//	return 0;
//}
//  
//ci
 //
//int main()
//{
//	int a = 10;
//	int* p = &a;//有一种变量用来存放地址-指针变量（地址变量-不准确）。a变量占用4个字节的空间，这里是将a的4个字节的第一个字节的地址存放在p变量中，p就是一个之指针变量。指针变量的值是所指变量所存储的第一个字节的地址。
//	*p = 20;//*p-解引用操作符，*（变量名）相当于使用地址值（p的值）找到a，这时候*p可以看作a
//	printf("%p", p);
//	return 0;
//
//}
// 
//#include<stdio.h>
//void创建的函数无返回值，而int创建的函数有返回值
//static int-创建静态局部变量（让局部变量生命周期变长），我们创建的变量自动生成，在程序（函数）进行一次（生命周期）完结束时自动销毁，变量的生命周期就在{}内，{}内也就是它的作用域
//#define可以定义宏-带参数

//int main()
//{
//	extern int dogs;//extern-声明外部符号（包括变量、函数）（源文件里的全局变量，可以通用）。static可改变全局变量的作用域（只能在当前文件内作用）/函数链接属性(外部链接属性->内部链接属性）。
//	printf("%d", dogs);
//	return 0;
//}
//void test()
//{
//	static int a = 1;
//	a++;
//printf("%d\n", a);
//}
//
//int main()
//{
//	int i = 0;
//	while (i < 5)
//	{
//		test();
//			i += 1;
//	}
//	return 0;
//}

//register int a;//建议把a定义成寄存器变量
//unsigned int //无符号变量，int实为（signed）int
////自定义变量名和关键字不能重复
////typedef-类型定义-类型重定义。typedef unsigned int u-int，后面可以用u-int（别名）（自定义）来表示unsigned int

//#define MAX 2
//int main()
//{
//	printf("%d", MAX);
//	return 0;
//}
//
//[]-下标引用操作符，（）-函数调用操作符，最高位1为正最高位0为负数
//int main()
//{
//	//&&逻辑与操作符，||逻辑或操作符，条件操作符(exp1?exp2:exp3),exp1为真则执行exp2，为假则执行epx3.
//	int a = 10,b = 20 ,c;
//	c = (a > b ? a : b);
//	printf("%d", c);
//
//	return 0;
//}

//int main()
//{
//	int a = 3.14;//在数据前加（变量类型），表示强制类型转换
//	printf("%d", a);
//	return 0;
//}

//int main()
//{
//	int a = 10; ;
//	int b = ++a;//后置++，先赋值再递增，前置++，先递增再赋值（使用）,--同理
//	printf("%d%d\n",a, b);
//	return 0;
//}

//int main()
//
//{
//	int a = 0, b;
//	b = ~a;//b是有符号的整形，2进制最高位存放符号
//	//a:00000000000000000000000000000000
//   //~a:11111111111111111111111111111111（补码），其为负数，当以补码形式存储，所以存进去的就是补码（存到计算机里的数就叫做补码），而正数以原码形式存在。
//        11111111111111111111111111111110 （反码）
//	//    10000000000000000000000000000001 （原码）->打印
//
//	printf("%d", b);
//
//	return 0;
//}
//原码，反码，补码。负数再内存中存储的时候，存储的为二进制补码，打印的是原码
//反码和原码的关系，符号位（最高位）不变，剩下位按位取反
//-2原码1000000000000000000010，反码111111111111111111111101，补码111111111111111111111111111110

//#include<string.h>
//int main()
//{
//	printf("%d", strlen("c:\test\123"));
//	return 0;
//
//}


//int MAX(int x, int y)
//{
//	if (x > y)
//		return x;
//	else
//		return y;
//}
//int main()
//{
//	int num1 = 10, num2 = 15;
//	int max=MAX(num1, num2);
//	printf("max=%d", max);

	/*if (num1 > num2)
		printf("%d", num1);
	else
		printf("%d", num2);

	return 0;*/

//}
//注意厘清字符串长度strenlen和类型/变量大小sizeof
//~-按（二进制）位取反，1/0互变