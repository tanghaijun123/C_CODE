#include "studentsystemManager.h"
void inputStudent(Node*head) 
{
	Node*fresh = malloc(sizeof(Node));
	fresh->next = NULL;
	printf("������ѧ����ѧ�ţ��������ɼ�");
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
	printf("1.¼��ѧ����Ϣ\n");
	printf("2.��ӡѧ����Ϣ\n");
	printf("3.ͳ��ѧ������\n");
	printf("4.����ѧ����Ϣ\n");
	printf("5.�޸�ѧ����Ϣ\n");
	printf("6.ɾ��ѧ����Ϣ\n");
	printf("7.���ɼ�����\n");
	printf("8.�˳�ϵͳ\n");
}
int main() {
	//����ͷ�ڵ� Node=struct _node
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
