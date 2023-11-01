#define _CRT_SECURE_NO_WARNINGS
#include"SeqList.h"
void CheckCapavity(SL* ps)
{
	if (ps->size == ps->capacity)
	{
		int newCapacity = ps->capacity == 0 ? 4 : 2 * ps->capacity;
		SLDataType* tmp = (SLDataType*)realloc(ps->a, newCapacity * sizeof(SLDataType));
		if (tmp == NULL)
		{
			perror("relloc fail\n");
			return 1;
		}
		ps->a = tmp;
		ps->capacity = newCapacity;
	}

}
void SLInit(SL* ps)
{
	ps->a = NULL;
	ps->size = ps->capacity = 0;

}
void SLDestroy(SL* psl)
{

}
void SLPushBack(SL* ps, SLDataType x)
{
	//�ж�˳����Ƿ����㹻�ռ�ֱ����[size]�����ȥ�ͺ�

	//�ռ䲻������ô���ݣ�Ƶ�����ݣ��ή�ͳ������ܡ�����һ����2������1.5���������ݡ�
	assert(ps);//��ͷ�ʽ
	ps->a[ps->size++] = x;
}
void SLPushFront(SL* ps, SLDataType x)
{
	//�ռ䲻�������ݡ��ռ��㹻����ʷ���ݺ���һλ��
	CheckCapavity(ps);
	

	
}
void SLPopBack(SL* ps)
{

}
void SLPopFront(SL* ps)
{

}