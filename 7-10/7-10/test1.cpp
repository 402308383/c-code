#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>
	//��������1���Գ���
int main()
{
	int i = 0, count = 0;
	for (i = 100; i <= 200; i++)
	{
		int j = 0;
		//for (j = 2; j < i; j++)//�Գ�������Ҫ��ӡ100-200֮�������
		//�Ż���
		for(j=2;j<=sqrt(i);j++)//sqrt()-��ƽ������ѧ�⺯��math.h
		{
			if (0 == i % j)
			{ 
				break;
			}
		}
		if (j>sqrt(i))
		{
			count++;
			printf("%d ", i);	
		}	
	}
	printf("count=%d\n", count);
	return 0;
}
