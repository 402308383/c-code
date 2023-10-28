#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//使用所学文件操作，在当前目录下放一个文件data.txt，写一个程序，将data.txt文件拷贝一份，生成data_copy.txt文件。
//
//基本思路：
//
//打开文件data.txt，读取数据
//打开文件data_copy.txt，写数据
//从data.txt中读取数据存放到data_copy.txt文件中，直到文件结束。
//关闭两个文件
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
//文件拷贝
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