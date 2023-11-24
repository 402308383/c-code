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

void SLInit(SL* ps)//˳�����ʼ��
{
	ps->a = NULL;
	ps->size = ps->capacity = 0;
}

void SLCheckCapacity(SL* ps)//����Ƿ�����
{
	if (ps->size == ps->capacity)//�ռ����ˣ�����
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
void SLPushBack(SL* ps, SLDataType x)//β��
{
	assert(ps);//���жϴ����ָ���Ƿ�Ϊ��
	//�жϿռ��Ƿ��㹻������������
	SLCheckCapacity(ps);//�жϼ�����
	ps->a[ps->size++] = x;
}

void SLPushFront(SL* ps, SLDataType x)//ͷ��
{
	assert(ps);
	//�жϿռ��Ƿ��㹻���㹻����ʷ���ݺ���һλ
	SLCheckCapacity(ps);
	for (size_t i = ps->size; i > 0; i--)
	{
		ps->a[i] = ps->a[i - 1];
	}
	ps->a[0] = x;
	ps->size++;
}
void SLPopFront(SL* ps)//ͷɾ
{
	assert(ps);
	assert(!SLIsEmpty(ps));
	//�ú����������ǰŲ��һλ
	for (size_t i = 0; i < (ps->size-1); i++)
	{
		ps->a[i] = ps->a[i + 1];
	}
	(ps->size)--;
}
void SLPopBack(SL* ps)//βɾ
{
	assert(ps);
	//�ж�˳����Ƿ�Ϊ��
	assert(!SLIsEmpty(ps));
	ps->size--;
}

void SLPrint(SL* ps)//��ӡ
{
	for (size_t i = 0; i < ps->size; i++)
	{
		printf("%d ", ps->a[i]);
	}
}

//��ָ��λ�á�֮ǰ����������
void SLInsert(SL* ps, int pos, SLDataType x)
{
	assert(ps);
	//���ݣ���麯���������ݹ��ܣ��������������ݣ������������򲻽��в�����
	assert(pos >= 0 && pos <= ps->size);
	SLCheckCapacity(ps);
	//��������
	for (size_t i=ps->size;i>pos;i--)
	{
		ps->a[i] = ps->a[i - 1];
	}
	ps->size++;
	ps->a[pos] = x;

}
//��ָ��λ��ɾ������
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
//����ĳ������˳������Ƿ����
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