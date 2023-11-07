#pragma once
//#define CAT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdbool.h>
#include<assert.h>
#include<stdlib.h>

typedef int SLDataType;
typedef struct SeqList
{
	SLDataType* a;//ָ��������ݵ�����
	int size;//˳����е�ǰ��Ч������
	int capacity;//˳���ǰ�Ŀռ��С
}SL;

void SLInit(SL* ps);//˳����ʼ��
void SLDestory(SL* ps);//˳�������

void SLPushBack(SL* ps, SLDataType x);//β��
void SLPushFront(SL* ps, SLDataType x);//ͷ��

void SLPopBack(SL* ps);//βɾ
void SLPopFront(SL* ps);//ͷɾ

void SLPrint(SL* ps);//��ӡ����
bool SLIsEmpty(SL* ps);//�ж�˳���ǰ״̬�Ƿ�Ϊ��