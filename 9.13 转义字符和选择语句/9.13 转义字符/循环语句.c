#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

int main()
{
	int a = 0;
	while (a < 100)
	{
		printf("���ͣ���%d��\n", a);
		a++;
	}
	//if (a = 100)//= �Ⱥ�Ϊ��ֵ �ұ߱��ʽ��ֵ������ߵ�������
	if(a == 100)//== ˫�Ⱥ��ǵ�һ���������ж������Ƿ���ȣ����᷵��false��trueֵ
	{
		printf("�ɹ���");
	}



	return 0;
}