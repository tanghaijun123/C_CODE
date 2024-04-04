#include <stdio.h>
#include <stdlib.h>
#include<conio.h>


typedef struct _Student
{
	int stuNum;
	char name[20];
	int score;
}Student;

//结点信息
typedef struct _Node
{
	Student student;
	struct _Node* next;
	
}Node;
void welcome();
void inputStudent(Node* head);