#pragma once
#include<stdio.h>

typedef int SLDateType;
typedef struct SeqList
{
	SLDateType* a;
	int size;//˳�������Ч���ݸ�����
	int capacity;//˳���ǰ�Ŀռ��С
}SL;

void SLInit(SL* ps);//˳����ʼ��
void SLDestroy(SL* ps);//˳�������
void SLPushBack(SL* ps, SLDateType x);//˳���ͷ����
void SLPushFront(SL* ps, SLDateType x);//˳���β����
void SLPopBack(SL* ps);//˳���βɾ��
void SLPopFront(SL* ps);//˳���ͷɾ��
