#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//int main()
//{
//    int n = 0x11223344;
//    int* pi = &n;
//    *pi = 0;
//    return 0;
//}
//#include <stdio.h>
int main()
{
	int n = 0x11223344;
	char* pc = (char*)&n;//int*被强转为char*
	*pc = 0;
	return 0;
}