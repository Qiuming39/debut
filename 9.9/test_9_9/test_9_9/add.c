#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>

//�ַ��� - ����һ���ַ� - ��˫������������һ���ַ�
//�ַ����Ľ�����־��\0
//int main()
//{
//	"abcdef";
//	"hello bit";
//	return 0;
//}

int main()
{
	//�ַ����� - ������һ����ͬ���͵�Ԫ��
	//char arr[] = "hello";
	char arr1[] = "abc";// abc\0
	char arr2[] = { 'a', 'b', 'c'};//abc??????????����Ҫ��'\0'

	//���ַ�������
	printf("%d\n", strlen(arr1));//3
	printf("%d\n", strlen(arr2));//���ֵ

	//int len = strlen("abc");//string length
	//printf("%d\n", len);
	//��ӡ�ַ���
	//printf("%s\n", arr1);
	//printf("%s\n", arr2);
	return 0;
}