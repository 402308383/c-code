#define CAT_SECURE_NO_WARNINGS
#include"SeqList.h"
#include"Contact.h"

//void SLtest()
//{
//	SL sl;
//	SLInit(&sl);//先初始化
//	//具体操作
//	//尾插
//	SLPushBack(&sl, 1);
//	//SLPushBack(&sl, 2);
//	//SLPushBack(&sl, 3);
//	//SLPushBack(&sl, 4);
//	////1 2 3 4
//	SLPrint(&sl);
//	////头插
//	//SLPushFront(&sl, 5);//5 1 2 3 4
//	//SLPushFront(&sl, 6);//6 5 1 2 3 4
//	//SLPushFront(&sl, 7);//7 6 5 1 2 3 4
//	//SLPrint(&sl);
//	////尾删
//	//SLPopBack(&sl);
//	//SLPrint(&sl);
//	//SLPopBack(&sl);
//	//SLPrint(&sl);
//	//头删...(未实现)
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
	printf("***************************通讯录**************************\n");
	printf("*****************1.添加联系人 2.删除联系人*****************\n");
	printf("*****************3.修改联系人 4.查找联系人*****************\n");
	printf("*****************5.查看通讯录   0.退出*********************\n");

}
int main()
{
	int op = -1;
	contact con;
	ContactInit(&con);
	do {
		menu();
		printf("请选择您的操作\n");
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
			ContactFind(&con);//这个有bug
				break;
		case 5:
			ContactShow(&con);//有个也有bug
				break;
		case 0:
			printf("bye\n");
				break;
		default:
			printf("请重新输入\n");
			break;


		}
	} while (op != 0);
	ContactDestory(&con);
	return 0;
}

