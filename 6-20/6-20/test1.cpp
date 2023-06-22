#define _CRT_SECURE_NO_WARNINGS 1
//DAY9:
//#include <stdio.h>
////结构体-复杂对象-自己创造出来的类型-struct
//struct Book
//{
//	char name[20];
//	short price;
//};//创建一个结构体类型
//int main()
//{
//	struct Book b1 = { "language C project",55 };//创建一个结构体变量
//	struct Book* pb = &b1;
//	printf("%p\n", pb);
//	printf("%s\n", (*pb).name);
//	printf("%s\n", pb->name);
//	printf("%d\n", (*pb).price);
//	printf("%d\n", pb->price);
//	//.   结构体变量.成员
//	//->  结构体指针->成员
//	printf("book name:%s\n", b1.name);
//	printf("price:%d\n", b1.price);
//	return 0;
//}

//DAY 10:
//#include<stdio.h>
//c语言只有三种结构：顺序结构选择结构循环结构。（程序化）
//int main()
//{
//	int age = 10;
//	if (age < 18)
//		printf("未成年\n");//一句可以不加{}，多条语句要用语句(代码）块{........}。结论：else与离得最近的未匹配的if相匹配（悬空else）
//	return 0;
//}
//注意：=为赋值，==为判断相等。可这么写if(5==num),把5（常量）放在左边，更加容易判断正误
//int main()
//{
//	int i=1;
//	while (i<= 100)
//	{
//		if (1 == i % 2)
//			printf("%d\n", i);
//		i++;
//	}
//
//	return 0;
//}
//int main()
//{
//	int i = 1, a = 1;
//	while (i <= 100)
//	{
//		if (1 == a % 2)
//			printf("%d\n", a);
//		i += 1;
//		a++;
//	}
//
//	return 0;
//}
//int main()
//{
//	int day = 0;
//	scanf("%d", &day);
//	switch (day)//case决定入口，break决定出口
//	{
//	case 1:
//		printf("MONDAY\n");//case后必为整形常量/整形常量表达式，不能是变量
//		break;
//	case 2:
//		printf("TUESDAY\n");
//		break;
//	case 3:
//		printf("WENDESDAY\n");
//		break;
//	case 4:
//		printf("THURSDAY\n");
//		break;
//	case 5:
//		printf("FRIDAY\n");
//		break;
//	case 6:
//		printf("SATURDAY\n");
//		break;
//	case 7:
//		printf("SUNDAY\n");
//		break;
//	}
//
//	return 0;
//}
//int main()
//{
//	int day = 0;
//	scanf("%d", &day);
//	switch (day)//case决定入口，break决定出口
//	{
//	case 1:
//	case 2:
//	case 3:
//	case 4:
//	case 5:
//		printf("WORKDAY\n");//1-5都输出一个值
//		break;
//	case 6:
//	case 7:
//		printf("WEEKEND\n");
//		break;//此break不要省
//	default://default作非法警示作用
//		printf("shurucuowu\n");
//		break;
//	}
//
//	return 0;
//}
//continue作用：跳过（中止）本次循环continue后的语句，重新从循环起始处进行，break是永久中止循环。
//continue是用于终止本次循环的，也就是本次循环中continue后边的代码不会再执行，而是直接跳转到while语句的判断部分。进行下一次循环的入口判断。
//getchar()//输入一个字符相当于scanf
//putchar()//输出一个字符相当于printf
//ctrl+z输入后可以中止while（ch=getchar（）！=EOF）的字符输入