#define _CRT_SECURE_NO_WARNINGS
#define ROW 3
#define COL 3
#include<stdio.h>
#include<time.h>
#include<stdlib.h>
void initboard(char board[ROW][COL], int row, int col);
void displayboard(char board[ROW][COL], int row, int col);
void playermove(char board[ROW][COL], int row, int col);
void cpmove(char board[ROW][COL], int row, int col);
char iswin(char board[ROW][COL], int row, int col);//告诉四种结果：玩家赢（‘*’），电脑赢（‘0’），平局('Q,)，继续('C')
int isfull(char board[ROW][COL], int row, int col);