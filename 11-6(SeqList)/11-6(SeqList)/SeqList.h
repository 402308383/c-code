#pragma once
//#define CAT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdbool.h>
#include<assert.h>
#include<stdlib.h>

typedef int SLDataType;
typedef struct SeqList
{
	SLDataType* a;//指向操作数据的类型
	int size;//顺序表中当前有效的数据
	int capacity;//顺序表当前的空间大小
}SL;

void SLInit(SL* ps);//顺序表初始化
void SLDestory(SL* ps);//顺序表销毁

void SLPushBack(SL* ps, SLDataType x);//尾插
void SLPushFront(SL* ps, SLDataType x);//头插

void SLPopBack(SL* ps);//尾删
void SLPopFront(SL* ps);//头删

void SLPrint(SL* ps);//打印数据
bool SLIsEmpty(SL* ps);//判断顺序表当前状态是否为空