#define _CRT_SECURE_NO_WARNINGS
#include"SeqList.h"

void SLtest()
{
	SL sl;
	SLInit(&sl);
	SLPushBack(&sl, 1);//传结构体相当于传的是数值而不是地址，与数组名有差异

}
int main()
{
	SLtest();
	return 0;
}