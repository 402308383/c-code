//
//  SeqList.c
//  SeqList
//
//  Created by Kevin on 2023/11/11.
//


#include"SeqList.h"
#include"Contact.h"

void SLInit(SL* ps)//顺序表初始化
{
    ps->size=ps->capacity=0;
    ps->a=NULL;
    
}
void SLDestory(SL* ps)
{
    assert(ps);
    free(ps->a);
    ps->a=NULL;
    ps->size=ps->capacity=0;
}//顺序表销毁

/*void SLPrint(SL* ps)//打印整形数据
{
    for(int i=0;i<ps->size;i++)
    {
        printf("%d ",ps->a[i]);
    }
    printf("\n");
}//顺序表打印*/
void SLCheckCapacity(SL* ps)
{
    if(ps->capacity==ps->size)
    {
        assert(ps);
        int NewCapacity=(ps->capacity==0?4:2*(ps->capacity));
        SLDataType* ret=(SLDataType*)realloc(ps->a, NewCapacity);
        if(ret==NULL)
        {
            perror("realloc failed\n");
            return ;
        }
        ps->a=ret;
        ps->capacity=NewCapacity;
    }
    
}//检查是否需要扩容

void SLPushBack(SL* ps,SLDataType x)
{
    assert(ps);
    SLCheckCapacity(ps);
    ps->a[ps->size++]=x;
}//尾插
void SLPushFront(SL* ps,SLDataType x)
{
    assert(ps);
    SLCheckCapacity(ps);
    for(int i=ps->size;i>0;i--)
    {
        ps->a[i]=ps->a[i-1];
    }
    ps->a[0]=x;
    ps->size++;
}//头插
void SLPopBack(SL* ps)
{
    assert(ps);
    assert(ps->size);
    ps->size--;
    
}//尾删
void SLPopFront(SL* ps)
{
    assert(ps);
    assert(ps->size);
    for(int i=0;i<=ps->size-2;i++)
    {
        ps->a[i]=ps->a[i+1];
    }
    ps->size--;
}//头删

void SLInsert(SL* ps,size_t pos,SLDataType x)
{
    assert(ps);
    SLCheckCapacity(ps);
    if(pos>=0&&pos<ps->size)
    {
        for(int i=ps->size;i>=pos;i--)
        {
            ps->a[i+1]=ps->a[i];
        }
            ps->size++;
            ps->a[pos]=x;
    }
    else
        printf("插入位置非法，插入失败\n");
}//指定位置处插入
void SLErase(SL* ps,size_t pos)
{
    assert(ps);
    assert(ps->size);
    if(pos>=0&&pos<ps->size)
    {
        for(size_t i=pos;i<=ps->size-2;i++)
        {
            ps->a[i]=ps->a[i+1];
        }
        ps->size--;
    }
    else
        printf("删除位置非法，删除失败\n");
    
}//指定位置处删除数据


/*int SLFind(SL* ps,SLDataType x)//注意指定数据相等的判断方式因数据类型不同而存在差异
{
    for(int i=0;i<ps->size;i++)
    {
        if(ps->a[i]==x)
        {
            return i;
        }
    }return -1;
    
}//查找指定数据是否存在*/

