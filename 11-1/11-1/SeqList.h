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

void SLInit(SL* ps);//顺序表初始化
void SLDestroy(SL* ps);//顺序表销毁
void SLPushBack(SL* ps, SLDataType x);//顺序表头插入
void SLPushFront(SL* ps, SLDataType x);//顺序表尾插入
void SLPopBack(SL* ps);//顺序表尾删除
void SLPopFront(SL* ps);//顺序表头删除