//#define CAT_SECURE_NO_WARNINGS
#include"SeqList.h"
void SLtest()
{
	SL sl;
	SLInit(&sl);//�ȳ�ʼ��
	//�������
	//β��
	SLPushBack(&sl, 1);
	//SLPushBack(&sl, 2);
	//SLPushBack(&sl, 3);
	//SLPushBack(&sl, 4);
	////1 2 3 4
	SLPrint(&sl);
	////ͷ��
	//SLPushFront(&sl, 5);//5 1 2 3 4
	//SLPushFront(&sl, 6);//6 5 1 2 3 4
	//SLPushFront(&sl, 7);//7 6 5 1 2 3 4
	//SLPrint(&sl);
	////βɾ
	//SLPopBack(&sl);
	//SLPrint(&sl);
	//SLPopBack(&sl);
	//SLPrint(&sl);
	//ͷɾ...(δʵ��)

	SLDestory(&sl);
}
void SLtest02()
{
	SL sl;
	SLInit(&sl);
	SLPushFront(&sl,2);
	SLPushFront(&sl,4);
	SLPushFront(&sl,2);
	SLPrint(&sl);
	printf("\n");
	/*SLPopFront(&sl);
	SLPrint(&sl);
	printf("\n");
	SLPopBack(&sl);
	SLPrint(&sl);
	printf("\n");*/
	//SLInsert(&sl, sl.size, 1);
	SLErace(&sl, 0);
	SLPrint(&sl);
	printf("\n");
	//int ret=SLFind(&sl,4);
	//printf("%d ", ret);
	SLDestory(&sl);
}

int main()
{
	//SLtest02();
	return 0;
}
