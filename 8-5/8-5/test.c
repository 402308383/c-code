#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>

int main()
{
	int a = 3;
	int b = 5;
	a = a ^ b;
	b = a ^ b;
	a = b ^ a;
	printf("%d ", a);
	printf("%d ", b);
	return 0;
}

//int onenum(int n)
//{
//	int count = 0;
//	while (n != 0)
//	{
//		n = n & (n - 1);
//		count++;
//	}
//	return count;
//}
//
//int main()
//{
//	int n=0,num=0;
//	scanf("%d", &n);
//	num = onenum(n);
//	printf("1的个数为%d个", num);
//}


//
//void DigitSum(int n)
//{
//	if (n > 9)
//	{
//		printf("%d ", n % 10);
//		DigitSum(n / 10);
//	}
//	else
//	{
//		printf("%d ", n);
//	}
//	
//}
//
//int main()
//{
//	int n=0;
//	scanf("%d",&n);
//	DigitSum(n);
//	return 0;
//}

//#include<stdio.h>
//int fun(int a)
//{
//	if (a <= 1)
//		return 1;
//	return(a * fun(a - 1));
//}
//int main()
//{
//	int a, b;
//	printf("input a num:\n");
//	scanf("%d", &a);
//	b = fun(a);
//	printf("%d!=%d\n", a, b);
//	return 0;
//}

//int DigitSum(int n)
//{
//	if (n < 10)
//		return n;
//	return n % 10 + DigitSum(n / 10);
//}
//
//int main()
//{
//	int n=0,sum=0;
//	scanf("%d",&n);
//	sum=DigitSum(n);
//	printf("sum=%d\n", sum);
//	return 0;
//}

//逗号表达式值为最后一个，但前面的表达式可能对后面的表达式有影响。

//左移操作符<<操作数必须为整数。左丢弃右补0。
//右移操作符>>1.逻辑右移：左补0右丢弃。2.算数右移：左用符号位填充，右丢弃，和编译器有关。
//按位与&：与并且逻辑一致但是操作的是二进制，两1真才为1真
//按位或|：与或者逻辑一致但是操作的是二进制，两0假才为0假
//按位异或^：二进制位相同为0相异为1，异或支持交换律,一个数异或自己为0，异或0为自己，a^a=0,a^0=a,按位与1是特殊，（n）按位减1(n-1)，二进制位从右至左少一个1，按位或可以改变某一（几）位
//~按位取反：包含符号位

//整形原反补：
// 最高位是符号位（1为-。0为+）
// 直接写出来的是原码。
//正数三码合一（相同），0开头的是八进制，0x开头为十六进制。
// 最高位是符号位（1为-。0为+）
// 整形在内存中存补码。
//反码相对于原码，符号位不变，其他位按位取反。
//补码：反码+1。
//原码补码相互转化形式相同。（取反+1）
//操作与“计算”的时候用的是“补码”。(注意)
//打印的是原码。

//int ji(int n, int k)
//{
//	if (k == 1)
//	{
//		return n;
//	}
//	else
//		return n * ji(n,k-1);
//}
//
//int main()
//{
//	int n = 0, k = 0,sm=0;
//	scanf("%d%d",&n,&k );
//	sm=ji(n,k);
//	printf("%d的%d次方为%d",n,k,sm);
//}