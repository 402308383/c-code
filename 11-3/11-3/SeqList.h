#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

typedef  int SLDataType;
typedef struct SeqList
{
	int size;
	int capacity;
	SLDataType* a;
}SL;
//��ʼ��˳���
void SLInit(SL* ps);//��ʼ��
void SLDestory(SL* ps);//����

void SLPushBack(SL* ps, SLDataType x);//β��
void SLPushFront(SL* ps, SLDataType x);//ͷ��

void PopBack(SL* ps);//βɾ
void PopFront(SL* ps);//ͷɾ

void SLPrint(SL* ps);
bool SLIsEmpty(SL* ps);


