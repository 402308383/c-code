//#define _CRT_SECURE_NO_WARNINGS
//test.c
//#include"SeqList.h"
//
//void SLtest() {
//	SL sl;
//	SLInit(&sl);
//	//˳���ľ������
//	//SLPushBack(&sl, 1);
//	//SLPushBack(&sl, 2);
//	//SLPushBack(&sl, 3);
//	//SLPushBack(&sl, 4);//1 2 3 4
//	//SLPrint(&sl);
//	////ͷ��
//	//SLPushFront(&sl, 5);//5 1 2 3 4
//	//SLPushFront(&sl, 6);//6 5 1 2 3 4
//	//SLPushFront(&sl, 7);//7 6 5 1 2 3 4
//	//SLPrint(&sl);
//	//βɾ
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
//		//�ռ䲻�����ٶ������һ������
//		//����
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
////β��
//void SLPushBack(SL* ps, SLDataType x) {
//	//assert(ps != NULL);
//	//�����ķ�ʽ
//	assert(ps);
//	//��ͷ�ʽ
//	//if (ps == NULL) {
//	//	return;
//	//}
//
//	//1)�ռ��㹻��ֱ��β��
//	//2���ռ䲻��������
//	SLCheckCapacity(ps);
//	//ֱ�Ӳ�������
//	ps->a[ps->size++] = x;
//}
////ͷ��
//void SLPushFront(SL* ps, SLDataType x) {
//	assert(ps);
//	//�жϿռ��Ƿ��㹻,����������
//	SLCheckCapacity(ps);
//	//�ռ��㹻����ʷ���ݺ���һλ
//	for (size_t i = ps->size; i > 0; i--)
//	{
//		ps->a[i] = ps->a[i - 1];
//	}
//	ps->a[0] = x;
//	ps->size++;
//}
////β��
//void SLPopBack(SL* ps) {
//	//�ж�˳����Ƿ�Ϊ��
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
//	//�������ǲ��Եģ�����ֻ���жϿռ��Ƿ��㹻
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
////��̬˳���
//typedef int SLDataType;
//typedef struct SeqList
//{
//	SLDataType* a;
//	int size;  //˳�������Ч�����ݸ���
//	int capacity;  //˳���ǰ�Ŀռ��С
//}SL;
////typedef struct SeqList SL;
//
////��˳�����г�ʼ��
//void SLInit(SL* ps);
//void SLDestroy(SL* ps);
//
////ͷ��/β�� ����/ɾ��
//void SLPushBack(SL* ps, SLDataType x);
//void SLPushFront(SL* ps, SLDataType x);
//void SLPopBack(SL* ps);
//void SLPopFront(SL* ps);
//
//void SLPrint(SL* ps);
//bool SLIsEmpty(SL* ps);