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
char iswin(char board[ROW][COL], int row, int col);//�������ֽ�������Ӯ����*����������Ӯ����0������ƽ��('Q,)������('C')
int isfull(char board[ROW][COL], int row, int col);