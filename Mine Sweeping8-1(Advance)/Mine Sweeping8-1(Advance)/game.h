#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<time.h>
#include<stdlib.h>
#include<windows.h>


#define EASY_ROW 9
#define EASY_COL 9
#define EASY_COUNT 3

#define MID_ROW 16
#define MID_COL 16
#define MID_COUNT 40

#define DIF_ROW 25
#define DIF_COL 25
#define DIF_COUNT 80

#define EASY_ROWS EASY_ROW+2
#define EASY_COLS EASY_COL+2

#define MID_ROWS MID_ROW+2
#define MID_COLS MID_COL+2

#define DIF_ROWS DIF_ROW+2
#define DIF_COLS DIF_COL+2

void initboard(char board[DIF_ROWS][DIF_COLS], int rows, int cols, char set);
void setmines(char board[DIF_ROWS][DIF_COLS], int row, int col,int count);
void displayboard(char board[DIF_ROWS][DIF_COLS],int row,int col);
void findmine(char mine[DIF_ROWS][DIF_COLS], char show[DIF_ROWS][DIF_COLS], int row, int col,int count);