#include <stdio.h>

//int max(int x, int y)
//{
//	if (x > y)
//		return x;
//	else
//		return y;
//}
//int main()
//{
//	int a;
//	int b;
//	scanf("%d %d", &a, &b);
//	int m = max(a, b);
//	printf("%d", m);
//}
// 

	//int m;
	//scanf("%d", &m);
	//if (m % 5 == 0)
	//	printf("YES\n");
	//else
	//&& 并且
	//	printf("no\n");
	/*int day = 0;
	scanf("%d", &day);
	switch (day)
	{
	case 1:
		printf("星期一\n");
		break;
	case 2:
		printf("星期2\n");
		break;
	case 3:
		printf("星期3\n");
		break;
	case 4:
		printf("星期4\n");
		break;
	case 5:
		printf("星期5\n");
		break;
	case 6:
		printf("星期6\n");
		break;
	default:
		printf("输入错误");
		break;*/
	//}
	//int i = 1;
	//while (i <= 10)
	//{
	//	if (i == 5)
	//		continue;
	//	printf("%d", i);
	//	i++;
	//}
	//for (i = 1; i <= 10; i++)
	//{
	//	printf("%d\n", i);
	//}
	//do 
	//{
	//	printf("%d", i);
	//	i++;
	//} while (i <= 10);
	//

//函数包括返回类型，函数名，函数参数
//int get_max(int x, int y)
//{
//	int z;
//	if (x > y)
//		z = x;
//	else
//		z = y;
//	return z;
//}
//
//
//int main()
//{
//	int a=10;
//	int b=20;
//	int max=get_max(a,b);
//	printf("%d\n", max);
//	return 0;
//}
//void swap(int* pa, int* pb)
//{
//	int z;
//	z = *pa;
//	*pa = *pb;
//	*pb = z;
//	
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	swap(&a,&b);
//	printf("a=%d b=%d", a, b);
//	return 0;
//}
#include"add.h"
int main() 
{
	int a = 10;
	int b = 5;
	int x=add(a, b);
	printf("%d", x);

	return 0;
}