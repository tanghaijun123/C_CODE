#define ROW 3
#define COL 3
#include<stdlib.h>
#include<time.h>

#include<stdio.h>
void initboard(char board[ROW][COL],int row,int col);
void displayboard(char board[ROW][COL], int row, int col);
void playermove(char board[ROW][COL], int row, int col);
void commove(char board[ROW][COL], int row, int col);
char iswin(char board[ROW][COL], int row, int col);