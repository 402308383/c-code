#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<assert.h>
#include<stdlib.h>
typedef int SLDataType;
typedef struct SeqList
{
	SLDataType* a;
	int size;
	int capacity;
}SL;

void SLInit(SL* ps);//˳����ʼ��
void SLDestroy(SL* ps);//˳�������
void SLPushBack(SL* ps, SLDataType x);//˳���ͷ����
void SLPushFront(SL* ps, SLDataType x);//˳���β����
void SLPopBack(SL* ps);//˳���βɾ��
void SLPopFront(SL* ps);//˳���ͷɾ��