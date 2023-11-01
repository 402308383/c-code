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
	//判断顺序表是否有足够空间直接在[size]处插进去就好

	//空间不够，怎么扩容？频繁扩容，会降低程序性能。增容一般以2倍或者1.5倍进行扩容。
	assert(ps);//柔和方式
	ps->a[ps->size++] = x;
}
void SLPushFront(SL* ps, SLDataType x)
{
	//空间不够，扩容。空间足够，历史数据后移一位。
	CheckCapavity(ps);
	

	
}
void SLPopBack(SL* ps)
{

}
void SLPopFront(SL* ps)
{

}