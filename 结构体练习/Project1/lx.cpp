#include<stdio.h>
struct Stu
{
	char name[20];
	int age;
	double score;
};
int main()
{
	struct Stu s = { "tom",20,90.5 };
	printf("%s %d %lf\n", s.name, s.age, s.score);
	struct Stu* ps = &s;
	printf("%s %d %lf\n", ps->name, ps->age, ps->score);//�ṹ��ָ��->��Ա������

	return  0;
}