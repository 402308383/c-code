#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
    int a = 10;
    &a;//ȡ��a�ĵ�ַ
    printf("%p\n", &a);
    return 0;
}
