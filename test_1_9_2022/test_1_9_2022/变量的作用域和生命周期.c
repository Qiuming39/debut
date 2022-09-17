#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//变量的作用域scope：变量在哪里可以使用，哪里就是他的作用域
//变量的生命周期：变量的创建和销毁之间的时间段



//局部变量的作用域：变量所在局部范围
int main()
{
	printf("hehe\n");
	
	printf("%d\n", a);//变量a的作用域 大括号之内
	int a = 10;
	return 0;
}


//全局变量的作用域：整个工程
//int g_val = 2021;//全局变量
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

//声明一下变量
//extern int g_val;
//
//int main()
//{
//	printf("%d\n", g_val);
//
//	return 0;
//}



//生命周期
//局部变量的生命周期：进入局部范围，生命周期开始，出局部范围，生命结束
//全局变量的生命周期：程序的生命周期

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