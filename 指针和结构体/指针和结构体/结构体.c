#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//struct �ṹ��
//�ṹ�������c���Դ����µ����ͳ���

//����һ��ѧ������
struct stu
{
	char name[20];//��Ա����
	int age;
	double score;
};
//����һ��������
struct Book
{
	char name[20];
	float price;
	char id[30];
};
int main()
{
	struct stu s = { "����", 20, 85.5 };//�ṹ��Ĵ����ͳ�ʼ��
	printf("1:%s %d %lf\n", s.name, s.age, s.score);//�ṹ���������Ա����
	struct stu* ps = &s;
	printf("2:%s %d %lf\n", (*ps).name, (*ps).age, (*ps).score);
	printf("3:%s %d %lf\n", ps->name, ps->age, ps->score);//�൱�ڰ�����*��.//���һ���ǽṹ��ָ��->��Ա������
	return 0;
}