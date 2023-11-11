#include"SeqList.h"
#include"Contact.h"
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

//在指定位置“之前”插入数据
void SLInsert(SL* ps, int pos, SLDataType x)
{
	assert(ps);
	//扩容（检查函数包含扩容功能，符合条件则扩容，不符合条件则不进行操作）
	assert(pos >= 0 && pos <= ps->size);
	SLCheckCapacity(ps);
	//后移数据
	for (size_t i=ps->size;i>pos;i--)
	{
		ps->a[i] = ps->a[i - 1];
	}
	ps->size++;
	ps->a[pos] = x;

}
//在指定位置删除数据
void SLErace(SL* ps, int pos)
{
	assert(ps);
	assert(!SLIsEmpty(ps));
	assert(pos >= 0 && pos < ps->size);
	for (int i = pos; i < ps->size-1; i++)
	{
		ps->a[i] = ps->a[i + 1];
	}
	ps->size--;

}
//查找某数据在顺序表中是否存在
//bool SLFind(SL* ps, SLDataType x)
//{
//	assert(ps);
//	for (int i = 0; i < ps->size; i++)
//	{
//		if (ps->a[i] == x)
//			return 1;
//	}
//	return 0;
//}
