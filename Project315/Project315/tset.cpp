#include<stdio.h>
//struct book
//{
//	char name[20];
//	char id[20];
//	int jiage;
//};
int main() 
{
	//int a = (int)3.14;
	//int a = 3;
	//int b = 5;
	//b=(a > 5 ? 1 : -1);
	//printf("%d", b);
	//struct book a = { "cyuyan","c20212",55 };
	//struct book* pa = &a;
	//printf("%s\n", pa->name);
	//printf("%s\n", pa->id);
	//printf("%d\n", pa->jiage);

	char arr[10] = {0};
	char* p = arr;
	int i = 0;
	for (i = 0; i < 10; i++) 
	{
		*(p + i) = 1;
	}
	return 0;
}