//
//  Contact.h
//  SeqList
//
//  Created by Kevin on 2023/11/23.
//

#ifndef Contact_h
#define Contact_h
#pragma once
#include <stdio.h>
#include<string.h>

struct ContactInfo
{
    char name[100];
    char sex[10];
    char tel[15];
    char addr[100];
    int age;
};//通讯录和顺序表仅仅一个类型之差，此处定义了通讯录所存储数据的一个类型
typedef struct ContactInfo CInfo;//改了一下类型名（跳转SeqList.h）
typedef struct SeqList contact;

void ContactInit(contact *pcon);//通讯录初始化
void ContactDestory(contact *pcon);//通讯录销毁

void ContactDel(contact *pcon);//删除联系人
void ContactAdd(contact *pcon);//添加联系人
void ContactModify(contact *pcon);//修改联系人
void ContactShow(contact *pcon);//查看通讯录
void ContactFind(contact *pcon);//查找指定联系人



#endif /* Contact_h */
