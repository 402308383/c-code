#define CAT_SECURE_NO_WARNINGS
#include"SeqList.h"
#include"Contact.h"

//void SLtest()
//{
//	SL sl;
//	SLInit(&sl);//�ȳ�ʼ��
//	//�������
//	//β��
//	SLPushBack(&sl, 1);
//	//SLPushBack(&sl, 2);
//	//SLPushBack(&sl, 3);
//	//SLPushBack(&sl, 4);
//	////1 2 3 4
//	SLPrint(&sl);
//	////ͷ��
//	//SLPushFront(&sl, 5);//5 1 2 3 4
//	//SLPushFront(&sl, 6);//6 5 1 2 3 4
//	//SLPushFront(&sl, 7);//7 6 5 1 2 3 4
//	//SLPrint(&sl);
//	////βɾ
//	//SLPopBack(&sl);
//	//SLPrint(&sl);
//	//SLPopBack(&sl);
//	//SLPrint(&sl);
//	//ͷɾ...(δʵ��)
//
//	SLDestory(&sl);
//}
//void SLtest02()
//{
//	SL sl;
//	SLInit(&sl);
//	SLPushFront(&sl,2);
//	SLPushFront(&sl,4);
//	SLPushFront(&sl,2);
//	SLPrint(&sl);
//	printf("\n");
//	/*SLPopFront(&sl);
//	SLPrint(&sl);
//	printf("\n");
//	SLPopBack(&sl);
//	SLPrint(&sl);
//	printf("\n");*/
//	//SLInsert(&sl, sl.size, 1);
//	SLErace(&sl, 0);
//	SLPrint(&sl);
//	printf("\n");
//	//int ret=SLFind(&sl,4);
//	//printf("%d ", ret);
//	SLDestory(&sl);
//}
void menu()
{
	printf("***************************ͨѶ¼**************************\n");
	printf("*****************1.�����ϵ�� 2.ɾ����ϵ��*****************\n");
	printf("*****************3.�޸���ϵ�� 4.������ϵ��*****************\n");
	printf("*****************5.�鿴ͨѶ¼   0.�˳�*********************\n");

}
int main()
{
	int op = -1;
	contact con;
	ContactInit(&con);
	do {
		menu();
		printf("��ѡ�����Ĳ���\n");
		scanf("%d", &op);
		switch (op)
		{
		case 1:
			ContactAdd(&con);
				break;
		case 2:
			ContactDel(&con);
				break;
		case 3:
			ContactModify(&con);
				break;
		case 4:
			ContactFind(&con);//�����bug
				break;
		case 5:
			ContactShow(&con);//�и�Ҳ��bug
				break;
		case 0:
			printf("bye\n");
				break;
		default:
			printf("����������\n");
			break;


		}
	} while (op != 0);
	ContactDestory(&con);
	return 0;
}

