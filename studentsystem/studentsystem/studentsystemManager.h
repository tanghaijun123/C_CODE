#include <stdio.h>
#include <stdlib.h>

//ѧ����Ϣ
typedef struct _Student
{
	int stuNum;
	char name[20];
	int score;
}Student;

//�����Ϣ
typedef struct _Node
{
	Student student;
	struct _Node* next;
	
}Node;