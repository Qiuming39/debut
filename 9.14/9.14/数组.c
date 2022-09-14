#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>


int main()
{
	//int a = 1;
	//int b = 2;
	//int c = 3;
	//...
	
	//数组 - 一组相同类型的元素的集合
	//十个整型1-10存起来
  	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };//元素空间名字叫arr，一共有十个元素，这十个元素的类型为整型
	char ch[5] = { 'a','b','c' };//不完全初始化，剩余的默认为0
	//数组使用下标来访问的 
	//arr[0] 第一个元素 1
	//arr[1] 第二个元素 2
	//...以此类推

	int i = 0;
	while (i < 10)
	{
		printf("%d\n", arr[i]);
		i++;
	}
	return 0;
}