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
//初始化顺序表
void SLInit(SL* ps);//初始化
void SLDestory(SL* ps);//销毁

void SLPushBack(SL* ps, SLDataType x);//尾插
void SLPushFront(SL* ps, SLDataType x);//头插

void PopBack(SL* ps);//尾删
void PopFront(SL* ps);//头删

void SLPrint(SL* ps);
bool SLIsEmpty(SL* ps);


