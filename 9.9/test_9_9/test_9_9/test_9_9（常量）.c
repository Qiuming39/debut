#include<stdio.h>


//常量 
//字面常量
//#difine定义的标识符常量
//const修饰的长变量
//枚举常量 可以一一列举的常量 星期，性别，

#define MAX 10000
//int main()
//{
//1.字面常量
//3.14;
//10;
//'a';
//"abcdef";

//2.#difine定义的标识符常量
//MAX = 20000;//erreur
//int a = MAX;
//printf("n = %d\n", a);

//3.const修饰的长变量
//const int num = 10;//num为常变量 - 具有常属性，本质上是变量
//num = 20;
//printf("%d\n", num);//20
//int arr[10] = {0};//10个元素
//int n = 10;
//int arr2[n] = { 0 };//n是变量，这里是不行的 数组里只能是常量

//4.枚举常量
//性别
//return 0; }
//	enum Sex
//	{
//		//这种枚举类型的变量未来可能的取值
//		MALE,//0 //MALE = 3 赋初值
//		FEMALE,//1
//		SECRET//2//枚举常量
//	}; 
//
//	int main()
//	{
//	enum Sex s = MALE;
//	printf("%d\n", MALE);
//	printf("%d\n", FEMALE);
//	printf("%d\n", SECRET);
//	return 0;
//}