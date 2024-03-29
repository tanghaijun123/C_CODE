#include<stdio.h>
#include<stdlib.h>
//struct stu
//{
//	char name[20];
//	int age;
//	char id[20];
//};
//void test() 
//{
//	int a = 10;
//	int b = 20;
//	int c = a + b;
//}
void check(int* fen) 
{
	printf("不及格的：\n");
	for (int i = 0; i < 5; i++)
	{
		if (*(fen+i) < 60) 
		{
			printf("%d\n", fen[i]);
		}
	}
}
int main() 
{
//	//int arr[10] = { 0 };
//	//int* p = arr;
//	//int i =0;
//	//for (i = 0; i < 10; i++)
//	//{
//	//	*(p + i) = i;
//	//	printf("%d", i);
//	//}
//	/*int arr[10];
//	char ch[5];
//	int*parr[5];*/
//	struct stu s = { "thj",2,"1235"};
//	printf("%d", s.age);
	//int arr[10] = { 0 };
	//int sz = sizeof(arr) / sizeof(arr[0]);
	//int i = 0;
	//for (i = 0; i < sz; i++)
	//{
	//	arr[i] = i + 1;

	//}
	//for (i = 0; i < sz; i++)
	//{
	//	test();
	//	printf("%d\n", arr[i]);
	//}
	//int* p=NULL, i, n;
	//scanf("%d", &n);
	//p = (int*)malloc(sizeof(int) * n);
	//for (i = 0; i < n; i++)
	//	scanf("%d", p + i);
	//for (i = 0; i < n; i++)
	//	printf("%d", *(p + i));

	//int arr[5];

	//for (int i = 0; i < 5; i++)
	//scanf("%d", arr + i);
	//for (int i = 0; i < 5; i++)
	//	printf("%d", *(arr + i));
	//	
	int*score = (int*)malloc(20);
	printf("请输入5个成绩：\n");
	for (int i = 0; i < 5; i++) 
	{
		scanf("%d", score + i);
	}
	check(score);
	free(score);
	return 0;

}