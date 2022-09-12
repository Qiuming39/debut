#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>

//字符串 - 就是一串字符 - 用双引号括起来的一串字符
//字符串的结束标志是\0
//int main()
//{
//	"abcdef";
//	"hello bit";
//	return 0;
//}

int main()
{
	//字符数组 - 数组是一组相同类型的元素
	//char arr[] = "hello";
	char arr1[] = "abc";// abc\0
	char arr2[] = { 'a', 'b', 'c'};//abc??????????，需要加'\0'

	//求字符串长度
	printf("%d\n", strlen(arr1));//3
	printf("%d\n", strlen(arr2));//随机值

	//int len = strlen("abc");//string length
	//printf("%d\n", len);
	//打印字符串
	//printf("%s\n", arr1);
	//printf("%s\n", arr2);
	return 0;
}