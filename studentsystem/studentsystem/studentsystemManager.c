#include "studentsystemManager.h"
void inputStudent(Node*head) 
{
	Node*fresh = malloc(sizeof(Node));
	fresh->next = NULL;
	printf("请输入学生的学号，姓名，成绩");
	scanf("%d%s%d",&fresh->student.stuNum,fresh->student.name, fresh->student.score);
	Node* move = head;
	while (move->next != NULL) 
	{
		move = move->next;
	}
	move->next = fresh;
}
void welcome()
{
	printf("1.录入学生信息\n");
	printf("2.打印学生信息\n");
	printf("3.统计学生人数\n");
	printf("4.查找学生信息\n");
	printf("5.修改学生信息\n");
	printf("6.删除学生信息\n");
	printf("7.按成绩排序\n");
	printf("8.退出系统\n");
}
int main() {
	//创建头节点 Node=struct _node
	Node* head = malloc(sizeof(Node));
	head->next = NULL;
	welcome();
	char c =_getch();
	switch (c)
	{
	case'1':
		inputStudent(head);

		break;
	case'2':

		break;
	case'3':

		break;
	case'4':

		break;
	case'5':

		break;
	case'6':

		break;
	case'7':

		break;
	case'8':

		break;
	default:
		break;
	}
	return 0;
 }
