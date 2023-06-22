
#include <stdio.h>//DAY 1:6.13
//包含一个叫stdio.h的文件，std-标准(standard input output )-有输入输出时使用
//main前面int表示调用main函数返回一个整数与return 0 结合使用
int main()//主函数-程序的入口-main函数有且只有一个
{
//    char ch = 'A';//'xx'
//    short age = 18; //向内存申请两个字节=16bit来存放18
//    printf("%c\n",ch);//%c是打印字符型数据
//    printf("%d\n", age);//%d是打印十进制数据（整形），%f浮点型小数，%p以地址形式打印，%x打印十六jz，%lf双精度,%s字符串
//    printf("%d\n", sizeof(long));
//    
   float weight = 95.6f;//向内存申请四个字节存放小数95.6f；
   printf("%f\n", weight);
    return 0;
//bit-比特位，byte-字节，kb，mb，gb，tb，pb，一字节=八比特位，1kb=1024mb
}
//char字符型 short（int）短整  long（int）长整 long long更长整 float单精 double双精-都是用来申请位置存放不同类型数据，（这个过程也叫声明变量）
//printf函数为库函数-编译器自带的函数
//void main()不是不可取而是已过时

 //DAY 2:6.14

//int num2 = 20;//-全局变量-定义在代码块外（{}）之外的变量
//int main()
//{
//    int num1 = 0;//局部变量-定义在代码块（{})的变量
//    int num2 = 0;
//    int sum;
//    scanf_s("%d%d",&num1,&num2);
//    sum = num1 + num2;
//    printf("sum=%d", sum);
//    return 0;//全局变量和局部变量名最好不要相同，易产生bug，如果相同局部变量优先
//    //extern声明外部的全局变量，全局变量作用域是整个工程，全局变量的生命周期是整个程序的生命周期
//}

