#include<stdio.h>
#include"game.h"
void menu() 
{
	printf("********************\n");
	printf("********1.play *****\n");
	printf("********2.exit******\n");
	printf("********************\n");
}
void game() 
{
	char board[ROW][COL];
	initboard(board,ROW,COL);
	//displayboard(board,ROW,COL);
	char ret = 0;
	while (1)
	{
		playermove(board,ROW,COL);
		displayboard(board,ROW,COL);
		 ret=iswin(board,ROW,COL);
		if (ret != 'C')
			break;
		commove(board, ROW, COL);
		displayboard(board, ROW, COL);
		 ret = iswin(board, ROW, COL);
		if (ret != 'C')
			break;
	}
	if (ret == '*')
	{
		printf("玩家win\n");
		/*displayboard(board, ROW, COL);*/
	}
	else if (ret == '#') 
	{
		printf("电脑win\n");
		/*displayboard(board, ROW, COL);*/
	}
	else 
	{
		printf("平局");
		/*displayboard(board, ROW, COL);*/
	}
	displayboard(board, ROW, COL);
}
int main() 
{
	int input = 0;
	srand((unsigned int)time(NULL));
	do 
	{
		menu();
		printf("请选择：>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			printf("三子棋游戏\n");
			game();
			break;
		case 0:
			printf("退出游戏\n");
			break;
		default:
			printf("输入错误\n");
			break;
		}
	} while (input);
	return 0;
}
