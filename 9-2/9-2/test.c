#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
	int n = 0;//��ʼ��n
	int fact = 1;//�����Ѷ��嶼������ǰ�棬��Ȼ��Щ��������֧��
	scanf("%d", &n);
	for (; n > 1; n--)
	{
		fact *= n;
	}
	printf("%d\n", fact);
	return 0;
}
//#include <stdio.h>
//#include <stdlib.h>
//#include <time.h>
//
//#define SIZE 9 // ɨ������Ĵ�С
//#define MINES 10 // �׵�����

//void initialize(char board[][SIZE], char visibleBoard[][SIZE]) 
// {
//    // ��ʼ��ɨ������Ϳɼ�����
//    for (int i = 0; i < SIZE; i++) {
//        for (int j = 0; j < SIZE; j++)
//  {
//            board[i][j] = ' ';
//            visibleBoard[i][j] = '-';
//        }
//    }
//}
//
//void plantMines(char board[][SIZE]) {
//    // �����λ�÷��õ���
//    int count = 0;
//    while (count < MINES) {
//        int x = rand() % SIZE;
//        int y = rand() % SIZE;
//        if (board[x][y] != '*') {
//            board[x][y] = '*';
//            count++;
//        }
//    }
//}
//
//void printBoard(char visibleBoard[][SIZE]) {
//    // ��ӡ�ɼ�����
//    printf("   ");
//    for (int i = 0; i < SIZE; i++) {
//        printf("%d ", i);
//    }
//    printf("\n");
//    for (int i = 0; i < SIZE; i++) {
//        printf("%d |", i);
//        for (int j = 0; j < SIZE; j++) {
//            printf("%c ", visibleBoard[i][j]);
//        }
//        printf("\n");
//    }
//}
//
//int countAdjacentMines(char board[][SIZE], int x, int y) {
//    // ��������λ�õĵ�������
//    int count = 0;
//    for (int i = x - 1; i <= x + 1; i++) {
//        for (int j = y - 1; j <= y + 1; j++) {
//            if (i >= 0 && i < SIZE && j >= 0 && j < SIZE) {
//                if (board[i][j] == '*') {
//                    count++;
//                }
//            }
//        }
//    }
//    return count;
//}
//
//void revealEmptyCells(char board[][SIZE], char visibleBoard[][SIZE], int x, int y) {
//    // �ݹ��չ���հ�����
//    if (x >= 0 && x < SIZE && y >= 0 && y < SIZE && visibleBoard[x][y] == '-') {
//        int count = countAdjacentMines(board, x, y);
//        visibleBoard[x][y] = count + '0';
//
//        if (count == 0) {
//            revealEmptyCells(board, visibleBoard, x - 1, y - 1);
//            revealEmptyCells(board, visibleBoard, x - 1, y);
//            revealEmptyCells(board, visibleBoard, x - 1, y + 1);
//            revealEmptyCells(board, visibleBoard, x, y - 1);
//            revealEmptyCells(board, visibleBoard, x, y + 1);
//            revealEmptyCells(board, visibleBoard, x + 1, y - 1);
//            revealEmptyCells(board, visibleBoard, x + 1, y);
//            revealEmptyCells(board, visibleBoard, x + 1, y + 1);
//        }
//    }
//}
//
//int playGame() {
//    char board[SIZE][SIZE];
//    char visibleBoard[SIZE][SIZE];
//    int x, y;
//
//    initialize(board, visibleBoard);
//    plantMines(board);
//    printBoard(visibleBoard);
//
//    while (1) {
//        printf("Enter the x and y coordinates: ");
//        scanf("%d %d", &x, &y);
//
//        if (x >= 0 && x < SIZE && y >= 0 && y < SIZE) {
//            if (board[x][y] == '*') {
//                printf("Game Over!\n");
//                return 0;
//            }
//            else {
//                revealEmptyCells(board, visibleBoard, x, y);
//                printBoard(visibleBoard);
//            }
//        }
//        else {
//            printf("Invalid coordinates! Try again.\n");
//        }
//    }
//}
//
//int main() {
//    srand(time(NULL));
//    playGame();
//    return 0;
//}
