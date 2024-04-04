#include<stdio.h>
#include<stdlib.h>
//typedef struct Node 
//{
//	int data;
//	struct Node* next;
//}Node;
////初始化头节点
//Node* initlist() 
//{
//	Node* list = (Node*)malloc(sizeof(Node));
//	list->data = 0;
//	list->next = NULL;
//	return list;
//}
//void head(Node* list, int data) 
//{
//
//}
struct person 
{
    char name[20];
	int age;
	
};
//int main() 
//{
//	struct person per1 = { "tom", 12 };
//	struct person* per_ptr = &per1;
//	printf("%s", (*per_ptr).name);
//
//	
//	return 0;
//}
struct Dog 
{
	char name[10];
	int age;
	double weight;
};
//void addage(struct person *per) 
//{
//	(*per).age = (*per).age + 1;
//}
char* say(struct Dog *dog) 
{
    static char info[100];
	sprintf(info, "%s %d %.2lf", (*dog).name, (*dog).age, (*dog).weight);
	return info;//zhuyi
}
int main() 
{
	struct Dog ty = { "ty",25,2.3 }; 
	char *result =say(&ty);
	printf("%s", result);
	return 0;
}