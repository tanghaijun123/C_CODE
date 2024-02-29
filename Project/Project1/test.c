#include<stdio.h>
extern int c;
int c = 4;
typedef unsigned int u_int;
extern int add(int x, int y);
void test() 
{
	static int a = 1;
	
	printf("%d\n", a);
	a++;
}
int main()
{
	//	int a;
	//	printf("thj");
	//	printf("%d", 100);
	//	scanf("%d", &a);
	//	printf("%d", a);
		//int brr[] = { 1,2,3,4,5,5 };
		//int i = 0;
		//while (i < 7)
		//{
		//	printf("%d\n", brr[i]);
		//	i++;

	//int a = 2;
	//int b = a << 1;
	//printf("%d", b);
	//int a = 0;
	//int b = 3;
	//int max;
	//max = a > b ? a : b;
	//printf("%d", max);
	/*printf("nihao/n");*/
	int i = 0;
	while (i < 10)
	{
		test();
		i++;
	}
	int a = 10;
	int b = 30;
	int sum = add(a, b);
	printf("%d\n", sum);

	return 0;
}
//浮点类型用%f，double用%lf
