#include<stdio.h>
//struct Stu
//{
//	char name[20];
//	int age;
//	double score;
//};
//int main()
//{
//	struct Stu s = { "tom",20,90.5 };
//	printf("%s %d %lf\n", s.name, s.age, s.score);
//	struct Stu* ps = &s;
//	printf("%s %d %lf\n", ps->name, ps->age, ps->score);//�ṹ��ָ��->��Ա������
//
//	return  0;
//}
int max(int x,int y)
{
	if (x > y)
		return x;
	else
		return y;
}
int main() 
{
	int a = 0;
	int b = 0;
	scanf("%d %d", &a, &b);
	int m = max(a, b);
	printf("%d", m);
}