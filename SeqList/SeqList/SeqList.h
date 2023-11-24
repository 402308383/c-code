//
//  SeqList.h
//  SeqList
//
//  Created by Kevin on 2023/11/11.
//
#pragma once
#include<stdio.h>
#include<assert.h>
#include<stdlib.h>



typedef struct ContactInfo SLDataType;//从Contact.h跳转到此处。这也是将顺序表套壳为通讯录的重要语句
struct SeqList
{
    SLDataType* a;//指向顺序表的指针
    int size;//当前有效数据个数
    int capacity;//当前总容量
};
typedef struct SeqList SL;
void SLInit(SL* ps);//顺序表初始化
void SLDestory(SL* ps);//顺序表销毁

void SLPrint(SL* ps);//顺序表打印
void SLCheckCapacity(SL* ps);//检查是否需要扩容

void SLPushBack(SL* ps,SLDataType x);//尾插
void SLPushFront(SL* ps,SLDataType x);//头插
void SLPopBack(SL* ps);//尾删
void SLPopFront(SL* ps);//头删

void SLInsert(SL* ps,size_t pos,SLDataType x);//指定位置处插入
void SLErase(SL* ps,size_t pos);//指定位置处删除数据

int SLFind(SL* ps,SLDataType x);//查找指定数据是否存在



