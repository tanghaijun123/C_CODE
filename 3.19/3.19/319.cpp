//#include<stdio.h>
//#include<stdlib.h>
////struct stu
////{
////	char name[20];
////	int age;
////	char id[20];
////};
////void test() 
////{
////	int a = 10;
////	int b = 20;
////	int c = a + b;
////}
////void check(int* fen) 
////{
////	printf("不及格的：\n");
////	for (int i = 0; i < 5; i++)
////	{
////		if (*(fen+i) < 60) 
////		{
////			printf("%d\n", fen[i]);
////		}
////	}
////}
//int main() 
//{
////	//int arr[10] = { 0 };
////	//int* p = arr;
////	//int i =0;
////	//for (i = 0; i < 10; i++)
////	//{
////	//	*(p + i) = i;
////	//	printf("%d", i);
////	//}
////	/*int arr[10];
////	char ch[5];
////	int*parr[5];*/
////	struct stu s = { "thj",2,"1235"};
////	printf("%d", s.age);
//	//int arr[10] = { 0 };
//	//int sz = sizeof(arr) / sizeof(arr[0]);
//	//int i = 0;
//	//for (i = 0; i < sz; i++)
//	//{
//	//	arr[i] = i + 1;
//
//	//}
//	//for (i = 0; i < sz; i++)
//	//{
//	//	test();
//	//	printf("%d\n", arr[i]);
//	//}
//	//int* p=NULL, i, n;
//	//scanf("%d", &n);
//	//p = (int*)malloc(sizeof(int) * n);
//	//for (i = 0; i < n; i++)
//	//	scanf("%d", p + i);
//	//for (i = 0; i < n; i++)
//	//	printf("%d", *(p + i));
//
//	//int arr[5];
//
//	//for (int i = 0; i < 5; i++)
//	//scanf("%d", arr + i);
//	//for (int i = 0; i < 5; i++)
//	//	printf("%d", *(arr + i));
//	//	
//	//int*score = (int*)malloc(20);
//	//printf("请输入5个成绩：\n");
//	//for (int i = 0; i < 5; i++) 
//	//{
//	//	scanf("%d", score + i);
//	//}
//	//check(score);
//	//free(score);
//	const char* filepath = "D:\\code\\io\\hello.txt";
//	FILE *file_ptr=fopen(filepath, "w");
//	fputs("helloword\n", file_ptr);
//	fclose(file_ptr);
//	return 0;
//
//}
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <windows.h>

#define WIDTH 20
#define HEIGHT 20

int gameOver;
int x, y, foodX, foodY, score;
int tailX[100], tailY[100];
int nTail;
enum eDirection { STOP = 0, LEFT, RIGHT, UP, DOWN };
enum eDirection dir;

void Setup() {
    gameOver = 0;
    dir = STOP;
    x = WIDTH / 2;
    y = HEIGHT / 2;
    foodX = rand() % WIDTH;
    foodY = rand() % HEIGHT;
    score = 0;
}

void Draw() {
    system("cls");
    for (int i = 0; i < WIDTH + 2; i++)
        printf("#");
    printf("\n");

    for (int i = 0; i < HEIGHT; i++) {
        for (int j = 0; j < WIDTH; j++) {
            if (j == 0)
                printf("#");
            if (i == y && j == x)
                printf("O");
            else if (i == foodY && j == foodX)
                printf("F");
            else {
                int print = 0;
                for (int k = 0; k < nTail; k++) {
                    if (tailX[k] == j && tailY[k] == i) {
                        printf("o");
                        print = 1;
                    }
                }
                if (!print) printf(" ");
            }

            if (j == WIDTH - 1)
                printf("#");
        }
        printf("\n");
    }

    for (int i = 0; i < WIDTH + 2; i++)
        printf("#");
    printf("\n");
    printf("Score:%d\n", score);
}

void Input() {
    if (_kbhit()) {
        switch (_getch()) {
        case 'a':
            dir = LEFT;
            break;
        case 'd':
            dir = RIGHT;
            break;
        case 'w':
            dir = UP;
            break;
        case 's':
            dir = DOWN;
            break;
        case 'x':
            gameOver = 1;
            break;
        }
    }
}

void Logic() {
    int prevX = tailX[0];
    int prevY = tailY[0];
    int prev2X, prev2Y;
    tailX[0] = x;
    tailY[0] = y;
    for (int i = 1; i < nTail; i++) {
        prev2X = tailX[i];
        prev2Y = tailY[i];
        tailX[i] = prevX;
        tailY[i] = prevY;
        prevX = prev2X;
        prevY = prev2Y;
    }
    switch (dir) {
    case LEFT:
        x--;
        break;
    case RIGHT:
        x++;
        break;
    case UP:
        y--;
        break;
    case DOWN:
        y++;
        break;
    default:
        break;
    }

    if (x >= WIDTH) x = 0; else if (x < 0) x = WIDTH - 1;
    if (y >= HEIGHT) y = 0; else if (y < 0) y = HEIGHT - 1;

    for (int i = 0; i < nTail; i++)
        if (tailX[i] == x && tailY[i] == y)
            gameOver = 1;

    if (x == foodX && y == foodY) {
        score += 10;
        foodX = rand() % WIDTH;
        foodY = rand() % HEIGHT;
        nTail++;
    }
}

int main() {
    Setup();
    while (!gameOver) {
        Draw();
        Input();
        Logic();
        Sleep(100); // slow down the game a bit
    }
    return 0;
}