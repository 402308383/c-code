#pragma once
#include<stdio.h>

typedef int SLDateType;
typedef struct SeqList
{
	SLDateType* a;
	int size;//顺序表中有效数据个数；
	int capacity;//顺序表当前的空间大小
}SL;

void SLInit(SL* ps);//顺序表初始化
void SLDestroy(SL* ps);//顺序表销毁
void SLPushBack(SL* ps, SLDateType x);//顺序表头插入
void SLPushFront(SL* ps, SLDateType x);//顺序表尾插入
void SLPopBack(SL* ps);//顺序表尾删除
void SLPopFront(SL* ps);//顺序表头删除
