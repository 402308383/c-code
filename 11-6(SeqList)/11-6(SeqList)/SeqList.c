#include"SeqList.h"
bool SLIsEmpty(SL* ps)
{
	assert(ps);
	return (ps->size == 0);
}
void SLDestory(SL* ps)
{
	if (ps->a)
	{
		free(ps->a);
	}
	ps->a = NULL;
	ps->size = ps->capacity = 0;
}

void SLInit(SL* ps)//顺序表初始化
{
	ps->a = NULL;
	ps->size = ps->capacity = 0;
}

void SLCheckCapacity(SL* ps)//检查是否满了
{
	if (ps->size == ps->capacity)//空间满了，扩容
	{
		int newCapacity = ps->capacity == 0 ? 4 : 2 * ps->capacity;
		SLDataType* tmp = (SLDataType*)realloc(ps->a, newCapacity * sizeof(SLDataType));
		if (tmp == NULL)
		{
			perror("realloc failed");
			return 1;
		}
		ps->a = tmp;
		ps->capacity = newCapacity;
	}
}
void SLPushBack(SL* ps, SLDataType x)//尾插
{
	assert(ps);//先判断传入的指针是否为空
	//判断空间是否足够，不够则扩容
	SLCheckCapacity(ps);//判断加扩容
	ps->a[ps->size++] = x;
}

void SLPushFront(SL* ps, SLDataType x)//头插
{
	assert(ps);
	//判断空间是否足够，足够则历史数据后移一位
	SLCheckCapacity(ps);
	for (size_t i = ps->size; i > 0; i--)
	{
		ps->a[i] = ps->a[i - 1];
	}
	ps->a[0] = x;
	ps->size++;
}
void SLPopFront(SL* ps)//头删
{
	assert(ps);
	assert(!SLIsEmpty(ps));
	//让后面的数据往前挪动一位
	for (size_t i = 0; i < (ps->size-1); i++)
	{
		ps->a[i] = ps->a[i + 1];
	}
	(ps->size)--;
}
void SLPopBack(SL* ps)//尾删
{
	assert(ps);
	//判断顺序表是否为空
	assert(!SLIsEmpty(ps));
	ps->size--;
}

void SLPrint(SL* ps)//打印
{
	for (size_t i = 0; i < ps->size; i++)
	{
		printf("%d ", ps->a[i]);
	}
}
