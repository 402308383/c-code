//#define CAT_SECURE_NO_WARNINGS
#include"SeqList.h"
void SLtest()
{
	SL sl;
	SLInit(&sl);//先初始化
	//具体操作
	//尾插
	SLPushBack(&sl, 1);
	SLPushBack(&sl, 2);
	SLPushBack(&sl, 3);
	SLPushBack(&sl, 4);
	//1 2 3 4
	SLPrint(&sl);
	//头插
	SLPushFront(&sl, 5);//5 1 2 3 4
	SLPushFront(&sl, 6);//6 5 1 2 3 4
	SLPushFront(&sl, 7);//7 6 5 1 2 3 4
	SLPrint(&sl);
	//尾删
	SLPopBack(&sl);
	SLPrint(&sl);
	SLPopBack(&sl);
	SLPrint(&sl);
	//头删...(未实现)
	
	SLDestory(&sl);
}

int main()
{
	SLtest();
	return 0;
}