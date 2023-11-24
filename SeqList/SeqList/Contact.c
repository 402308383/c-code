//
//  Contact.c
//  SeqList
//
//  Created by Kevin on 2023/11/23.
//

#include"SeqList.h"
#include"Contact.h"
void ContactInit(contact *pcon)
{
    SLInit(pcon);
}//通讯录初始化
void ContactDestory(contact *pcon)//通讯录销毁
{
    SLDestory(pcon);
}
int FindByName(contact* pcon,char name[])
{
    for(int i=0;i<pcon->size;i++)
    {
        if(strcmp((pcon->a[i]).name,name)==0)//找到返回元素下标
        {
            return i;//找到返回元素下标
        }
    }return -1;//找不到返回-1
}

void ContactDel(contact *pcon)
{
    //通过使用联系人姓名来查找
    printf("请输入要删除的用户名称\n");
    char name[50];
    scanf("%s",name);
    int findindex=FindByName(pcon,name);//使用按照名字对比查找的函数
    if(findindex<0)//找不到，退出
    {
        printf("要删除的联系人不存在\n");
        return;
    }
    //找到了，删除该位置数据
    SLErase(pcon, findindex);//最后看看这里的有没有问题，加减1的问题，看看对pos位置的理解是否有偏差
}//删除联系人
void ContactAdd(contact *pcon)
{
    CInfo info;
    printf("请输入联系人姓名：\n");
    scanf("%s",info.name);
    printf("请输入联系人性别：\n");
    scanf("%s",info.sex);
    printf("请输入联系人年龄：\n");
    scanf("%d",&info.age);
    printf("请输入联系人电话：\n");
    scanf("%s",info.tel);
    printf("请输入联系人住址：\n");
    scanf("%s",info.addr);
    //接收到了一组数据，现在插入顺序表就好
    SLPushBack(pcon, info);
    
}//添加联系人
void ContactModify(contact *pcon)
{
    char name[50];
    printf("请输入要修改的用户的名称：\n");
    scanf("%s",name);
    //获取目标联系人在通讯录中的位置(下标)
    int find=FindByName(pcon, name);
    if(find<0)
    {
        printf("要修改的用户不存在\n");
        return;
    }
    printf("请输入新的联系人姓名：\n");
    scanf("%s",pcon->a[find].name);
    printf("请输入联系人性别：\n");
    scanf("%s",pcon->a[find].sex);
    printf("请输入联系人年龄：\n");
    scanf("%d",&pcon->a[find].age);
    printf("请输入联系人电话：\n");
    scanf("%s",pcon->a[find].tel);
    printf("请输入联系人住址：\n");
    scanf("%s",pcon->a[find].addr);
    printf("修改成功\n");
}//修改联系人
void ContactShow(contact *pcon)//查看通讯录
{
    printf("%s %s %s %s %s\n","姓名","性别","年龄","电话","住址");
    for(int i=0;i<pcon->size;i++)
    {
        printf("%-4s %-4s %-4d %-4s %-4s\n",pcon->a[i].name,pcon->a[i].sex,pcon->a[i].age,pcon->a[i].tel,pcon->a[i].addr);
    }
    
}
void ContactFind(contact *pcon)//查找指定联系人
{
    char name[50];
    printf("请输入要查找的用户的名称：\n");
    scanf("%s",name);
    int find=FindByName(pcon, name);
    if(find<0)
    {
        printf("该联系人不存在\n");
        return;
    }
    printf("%s %s %s %s %s\n","姓名","性别","年龄","电话","住址");
    for(int i=0;i<pcon->size;i++)
    {
        printf("%-4s %-4s %-4d %-4s %-4s\n",pcon->a[find].name,pcon->a[find].sex,pcon->a[find].age,pcon->a[find].tel,pcon->a[find].addr);
    }
    
}
