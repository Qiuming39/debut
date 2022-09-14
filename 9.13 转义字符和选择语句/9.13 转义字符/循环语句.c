#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

int main()
{
	int a = 0;
	while (a < 100)
	{
		printf("加油，第%d天\n", a);
		a++;
	}
	//if (a = 100)//= 等号为赋值 右边表达式的值赋给左边的运算数
	if(a == 100)//== 双等号是等一操作符，判断两边是否相等，它会返回false或true值
	{
		printf("成功了");
	}



	return 0;
}