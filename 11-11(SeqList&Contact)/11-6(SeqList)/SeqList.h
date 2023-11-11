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

//在指定位置插入数据
void SLInsert(SL* ps, int pos, SLDataType x);
//在指定位置删除数据
void SLErace(SL*ps,int pos);
//查找某数据在顺序表中是否存在
//bool SLFind(SL* ps, SLDataType x);


