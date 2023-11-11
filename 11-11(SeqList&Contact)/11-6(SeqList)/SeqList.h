#pragma once
#include"Contact.h"
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdbool.h>
#include<assert.h>
#include<stdlib.h>
#include<string.h>

typedef struct ContactInfo SLDataType;
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

//��ָ��λ�ò�������
void SLInsert(SL* ps, int pos, SLDataType x);
//��ָ��λ��ɾ������
void SLErace(SL*ps,int pos);
//����ĳ������˳������Ƿ����
//bool SLFind(SL* ps, SLDataType x);


