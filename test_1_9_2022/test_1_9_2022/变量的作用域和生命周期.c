#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//������������scope���������������ʹ�ã������������������
//�������������ڣ������Ĵ���������֮���ʱ���



//�ֲ������������򣺱������ھֲ���Χ
int main()
{
	printf("hehe\n");
	
	printf("%d\n", a);//����a�������� ������֮��
	int a = 10;
	return 0;
}


//ȫ�ֱ�������������������
//int g_val = 2021;//ȫ�ֱ���
//int main()
//{
//	printf("1:%d\n", g_val);
//	printf("hehe\n");
//	{
//		printf("2:%d\n", g_val);
//		int a = 10;
//		printf("%d\n", a);
//
//	}
//	printf("3:%d\n", g_val);
//
//	return 0;
//}

//����һ�±���
//extern int g_val;
//
//int main()
//{
//	printf("%d\n", g_val);
//
//	return 0;
//}



//��������
//�ֲ��������������ڣ�����ֲ���Χ���������ڿ�ʼ�����ֲ���Χ����������
//ȫ�ֱ������������ڣ��������������

//int main()
//{
//	{
//		int a = 100;
//		printf("%d\n", a);
//
//	}
//
//	return 0;
//}