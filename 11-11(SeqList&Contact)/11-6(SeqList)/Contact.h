//����������ϵ�����ݽṹ
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

//ͨѶ¼�ײ㻹��˳���

//ͨѶ¼��ʼ��������
void ContactInit(contact* con);
void ContactDestory(contact* con);

//�����ϵ��
void ContactAdd(contact* pcon);
//ɾ����ϵ��
void ContactDel(contact* pcon);
//�޸���ϵ��
void ContactModify(contact* pcon);
//�鿴ͨѶ¼
void ContactShow(contact* pcon);
//����ָ����ϵ��
void ContactFind(contact* pcon);


