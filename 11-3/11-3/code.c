//#define _CRT_SECURE_NO_WARNINGS
//test.c
//#include"SeqList.h"
//
//void SLtest() {
//	SL sl;
//	SLInit(&sl);
//	//顺序表的具体操作
//	//SLPushBack(&sl, 1);
//	//SLPushBack(&sl, 2);
//	//SLPushBack(&sl, 3);
//	//SLPushBack(&sl, 4);//1 2 3 4
//	//SLPrint(&sl);
//	////头插
//	//SLPushFront(&sl, 5);//5 1 2 3 4
//	//SLPushFront(&sl, 6);//6 5 1 2 3 4
//	//SLPushFront(&sl, 7);//7 6 5 1 2 3 4
//	//SLPrint(&sl);
//	//尾删
//	SLPopBack(&sl);
//	SLPrint(&sl);
//	SLPopBack(&sl);
//	SLPrint(&sl);
//	SLDestroy(&sl);
//}
//
//int main() {
//	SLtest();
//	return 0;
//}

//.c
//#include"SeqList.h"
//
//void SLInit(SL* ps) {
//	ps->a = NULL;
//	ps->size = ps->capacity = 0;
//}
//void SLDestroy(SL* ps) {
//	if (ps->a)
//		free(ps->a);
//	ps->a = NULL;
//	ps->size = ps->capacity = 0;
//}
//
//void SLCheckCapacity(SL* ps) {
//	if (ps->size == ps->capacity) {
//		//空间不足以再额外插入一个数据
//		//扩容
//		int newCapcity = ps->capacity == 0 ? 4 : 2 * ps->capacity;
//		SLDataType* tmp = (SLDataType*)realloc(ps->a, newCapcity * sizeof(SLDataType));
//		if (tmp == NULL) {
//			perror("realloc fail!\n");
//			return 1;
//		}
//		ps->a = tmp;
//		ps->capacity = newCapcity;
//	}
//}
//
////尾插
//void SLPushBack(SL* ps, SLDataType x) {
//	//assert(ps != NULL);
//	//暴力的方式
//	assert(ps);
//	//柔和方式
//	//if (ps == NULL) {
//	//	return;
//	//}
//
//	//1)空间足够，直接尾插
//	//2）空间不够，扩容
//	SLCheckCapacity(ps);
//	//直接插入数据
//	ps->a[ps->size++] = x;
//}
////头插
//void SLPushFront(SL* ps, SLDataType x) {
//	assert(ps);
//	//判断空间是否足够,不够则扩容
//	SLCheckCapacity(ps);
//	//空间足够，历史数据后移一位
//	for (size_t i = ps->size; i > 0; i--)
//	{
//		ps->a[i] = ps->a[i - 1];
//	}
//	ps->a[0] = x;
//	ps->size++;
//}
////尾插
//void SLPopBack(SL* ps) {
//	//判断顺序表是否为空
//	assert(ps);
//	assert(!SLIsEmpty(ps));
//	//ps->a[ps->size - 1] = 0;
//	ps->size--;
//}
//void SLPopFront(SL* ps) {
//
//}
//void SLPrint(SL* ps) {
//	for (size_t i = 0; i < ps->size; i++)
//	{
//		printf("%d ", ps->a[i]);
//	}
//	printf("\n");
//}
//bool SLIsEmpty(SL* ps) {
//	assert(ps);
//	//这样子是不对的，这里只能判断空间是否足够
//	//return ps->size == ps->capacity;
//	return ps->size == 0;
//}


//.h
//#pragma once
//#include<stdio.h>
//#include<stdlib.h>
//#include<assert.h>
//#include<stdbool.h>
//
////动态顺序表
//typedef int SLDataType;
//typedef struct SeqList
//{
//	SLDataType* a;
//	int size;  //顺序表中有效的数据个数
//	int capacity;  //顺序表当前的空间大小
//}SL;
////typedef struct SeqList SL;
//
////对顺序表进行初始化
//void SLInit(SL* ps);
//void SLDestroy(SL* ps);
//
////头部/尾部 插入/删除
//void SLPushBack(SL* ps, SLDataType x);
//void SLPushFront(SL* ps, SLDataType x);
//void SLPopBack(SL* ps);
//void SLPopFront(SL* ps);
//
//void SLPrint(SL* ps);
//bool SLIsEmpty(SL* ps);