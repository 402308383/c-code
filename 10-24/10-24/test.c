#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//ʹ����ѧ�ļ��������ڵ�ǰĿ¼�·�һ���ļ�data.txt��дһ�����򣬽�data.txt�ļ�����һ�ݣ�����data_copy.txt�ļ���
//
//����˼·��
//
//���ļ�data.txt����ȡ����
//���ļ�data_copy.txt��д����
//��data.txt�ж�ȡ���ݴ�ŵ�data_copy.txt�ļ��У�ֱ���ļ�������
//�ر������ļ�
int main()
{
	FILE* pfdata = fopen("data.txt", "r");
	if (pfdata == NULL)
	{
		perror(fopen);
		return 1;
	}
	FILE* pfdata_cp = fopen("data_copy.txt", "w");
	if (pfdata_cp == NULL)
	{
		perror(fopen);
		return 1;
	}
	char ch = 0;
	while ((ch = fgetc(pfdata)) != EOF)
	{
		fputc(ch,pfdata_cp);
	}
	fclose(pfdata);
	pfdata = NULL;
	fclose(pfdata_cp);
	pfdata_cp=NULL;
	return 0;
}
//#define INT_PTR int*
//typedef int* int_ptr;
//int main()
//{
//	INT_PTR a, b;
//	int_ptr c, d;
//}
//�ļ�����
//int main()
//{
//	FILE* fsor= fopen("sor.txt", "r");
//	if (fsor == NULL)
//	{
//		perror("fopen-1");
//		return 1;
//	}
//	FILE* fdes = fopen("des.txt", "w");
//	if (fdes == NULL)
//	{
//		perror("fopen-2");
//		fclose(fdes);
//		fdes = NULL;
//		return 1;
//	}
//	char ch = 0;
//	while ((ch = fgetc(fsor)) != EOF)
//	{
//		fputc(ch,fdes);
//	}
//	fclose(fsor);
//	fclose(fdes);
//	fsor = NULL;
//	fdes = NULL;
//	return 0;
//}