#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<Windows.h>
#include<stdlib.h>

//password input;

int main()
{
	int i = 0;
	char pswd[] = "asdasd123";//����������ܴ����ַ���
	char input[] = { 0 };
	for (i = 0; i < 3; i++)
	{
		printf("����������->\n");
		scanf("%s", input);
		if (pswd == input)//�ж��ַ�������Ȳ���ʹ��==����Ӧʹ��
		{
			printf("������ȷ\n");
			break;
		}
		else
			printf("�������,������\n");
	}
	if (i == 3)
		printf("���ξ������Ƴ�");



	return 0;
}















//welcome to bit!!!!-18
//eg,
//#include<string.h>
//int main()
//{
//	char arr1[] = "welcome to bit!!!!!!";
//	char arr2[] = "####################";
//	int left = 0;
//	int right = strlen(arr1) -1;
//	while (left<= right) 
//	{
//
//		arr2[right] = arr1[right];
//		arr2[left] = arr1[left];
//		left += 1;
//		right -= 1;
//		printf("%s\n", arr2);
//		Sleep(1000);//ͣ��1s����λ��ms��1000ms=1s��#include<Windows.h>
//		system("cls");//ִ��ϵͳ����ĺ���-��cls��-�����Ļ,#include<stdlib.h>
//	}
//	printf("%s\n", arr2);
//	return 0;
//}


//int main()//(��д)
//{
//
//	char arr[] = "welcome to bit!!!!";//0-17
//	char c = '#';
//	int i = 0;
//	while (i<=9)
//	{	
//		printf("%s\n", arr);
//		arr[i] = c;
//		arr[17 - i] = c;
//		i += 1;
//		
//	}
//	printf("%c", arr[0]);
//	
//	
//
//	return 0;
//}


//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
////      �±�      0 1 2 3 4 5 6 7 8 9
//	int k = 11;//
//	int left = 0;
//	int right = 9;
//	int mid = 0;
//	while (left<=right)
//	{
//		mid = (right + left) / 2;
//		if (k < mid)
//			right = mid - 1;
//		else if (k > mid)
//			left = mid + 1;
//		else
//		{
//			printf("�ҵ��ˣ��±�Ϊ%d\n�������Ϊ%d", mid,arr[mid]);
//			break;
//		}
//	}
//	if (right < left)
//		printf("�Ҳ����˶�");
//
//	return 0;
//}