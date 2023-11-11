//创建保存联系人数据结构
#define _CRT_SECURE_NO_WARNINGS 1
#define NAME_MAX 100
#define SEX_MAX 10
#define TELMAX 15
#define ADDR_MAX 100
#pragma once
typedef struct SeqList contact;
typedef struct ContactInfo
{
	char name[NAME_MAX];
	char sex[SEX_MAX];
	char tel[TELMAX];
	char addr[ADDR_MAX];
	int age;
}CInfo;

//通讯录底层还是顺序表

//通讯录初始化和销毁
void ContactInit(contact* con);
void ContactDestory(contact* con);

//添加联系人
void ContactAdd(contact* pcon);
//删除联系人
void ContactDel(contact* pcon);
//修改联系人
void ContactModify(contact* pcon);
//查看通讯录
void ContactShow(contact* pcon);
//查找指定联系人
void ContactFind(contact* pcon);


