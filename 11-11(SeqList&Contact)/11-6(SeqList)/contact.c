#include"Contact.h"
#include"SeqList.h"

void ContactInit(contact* pcon)
{
	SLInit(pcon);
}
void ContactDestory(contact* pcon)
{
	SLDestory(pcon);
}
//�����ϵ��
void ContactAdd(contact* pcon)
{
	 CInfo info;
	printf("��������ϵ������:\n");
	scanf("%s", info.name);
	printf("��������ϵ���Ա�:\n");
	scanf("%s", info.sex);
	printf("��������ϵ������:\n");
	scanf("%d", &info.age);
	printf("��������ϵ�˵绰:\n");
	scanf("%s", info.tel);
	printf("��������ϵ�˵�ַ:\n");
	scanf("%s", info.addr);
	//��ϵ�����ݻ�ȡ���ˣ������浽��info��
	SLPushBack(pcon, info);


}
int FindByName(contact* pcon, char name[])
{
	for (int i = 0; i < pcon->size; i++)
	{
		if (strcmp(pcon->a[i].name, name) == 0)
			return i;
	}
	return -1;
}
//ɾ����ϵ��
void ContactDel(contact* pcon)
{
	//ǿ��Ҫ���û�ʹ����ϵ�˵����Ʋ���
	printf("������Ҫɾ�����û�����:\n");
	char name[NAME_MAX];
	scanf("%s", name);
	int findidex = FindByName(pcon, name);
	if (findidex < 0)
	{
		printf("Ҫɾ������ϵ�˲����ڣ�\n");
		return;
	}//�ҵ��ˣ�ɾ��SLerase��������
	SLErace(pcon, findidex);
}
//�޸���ϵ��
void ContactModify(contact* pcon)
{
	char name[NAME_MAX];
	printf("������Ҫ�޸ĵ��û�����:\n");
	scanf("%s", name);
	int find = FindByName(pcon, name);
	if (find < 0)
	{
		printf("Ҫ�޸ĵ��û�������");
		return;
	}
	printf("�������µ��û�����:\n");
	scanf("%s", pcon->a[find].name);
	printf("�������µ��û��Ա�:\n");
	scanf("%s", pcon->a[find].sex);
	printf("�������µ��û�����:\n");
	scanf("%s", pcon->a[find].age);
	printf("�������µ��û��绰:\n");
	scanf("%s", pcon->a[find].tel);
	printf("�������µ��û���ַ:\n");
	scanf("%s", pcon->a[find].addr);
	printf("�޸ĳɹ�");

}
//�鿴ͨѶ¼
void ContactShow(contact* pcon)
{
	printf("%-5s %-7s %-3s %-13s %-10s\n","����","�Ա�","����","�绰","סַ");
	for (int i = 0; i < pcon->size; i++)
	{
		printf("%-5s %-7s %-3d %-13s %-10s\n", pcon->a[i].name, pcon->a[i].sex, pcon->a[i].age, pcon->a[i].tel, pcon->a[i].addr);
	}
}
//����ָ����ϵ��
void ContactFind(contact* pcon)
{
	char name[NAME_MAX];
	printf("������Ҫ���ҵ��û�����\n");
	scanf("%s", name);
	int find = FindByName(pcon, name);
	if (find < 0)
	{
		printf("����ϵ�˲����ڣ�\n");
		return;
	}
	printf("%-4s %-4s %-4s %-4s %-4s\n", pcon->a[find].name, pcon->a[find].sex, pcon->a[find].age, pcon->a[find].tel, pcon->a[find].addr);
}
