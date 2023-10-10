#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include <stdio.h>

#define MAX_LEN 100

int n, m;
int maze[MAX_LEN][MAX_LEN];
int dp[MAX_LEN][MAX_LEN];

int max(int a, int b) {
    return (a > b) ? a : b;
}

int main() {
    scanf("%d %d", &n, &m);

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            scanf("%d", &maze[i][j]);
        }
    }

    // ��ʼ�������½ǵĽڵ�
    dp[n][m] = maze[n][m];

    // ������һ��
    for (int j = m - 1; j >= 1; j--) {
        dp[n][j] = dp[n][j + 1] + maze[n][j];
    }

    // ������һ��
    for (int i = n - 1; i >= 1; i--) {
        dp[i][m] = dp[i + 1][m] + maze[i][m];
    }

    // �����½������Ͻǵ������
    for (int i = n - 1; i >= 1; i--) {
        for (int j = m - 1; j >= 1; j--) {
            dp[i][j] = maze[i][j] + max(dp[i + 1][j], dp[i][j + 1]);
        }
    }

    printf("%d\n", dp[1][1]);

    return 0;
}

//int main()
//{
//	int a = 1;
//	int b = 10;
//	do 
//	{
//		b -= a;
//		a++;
//	} while (b-- < 0);
//	return 0;
//}
//int main()
//{
//	int a = 3, b = 5, m;
//	m = a <= 3 && a + b < 8;
//		printf("%d", m);
//	return 0;
//}