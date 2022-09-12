#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//int main()
//{
//	printf("秋茗\n");
//	return 0;
//}


//ctrl+F5

//a
//'a' - 字符a
// 

//
//int main()
//{
//	//字符类型
//	char ch = 'a';
//	//整型
//	int age = 20;
//	//短整型
//	short num = 10;
//	//long
//	//long long
//
//	//单精度浮点型
//	float weight = 55;
//	//双精度浮点型
//	double d = 0.0;
//
//	return 0;
//}

//int main()
//{
//	//printf("hehe\n");
//	//printf("秋茗\n");
//	//printf("%d\n",100);//打印一个整数
//	//sizeof - 关键字 - 操作符 - 计算类型或者变量所占空间大小 (单位是字节）
//	//计算机中的单位： bit - 比特位, byte - 字节 = 8bit
//	//kb mb gb tb pb
//	printf("%d\n", sizeof(char));
//	printf("%d\n", sizeof(short));
//	printf("%d\n", sizeof(int));
//	printf("%d\n", sizeof(long));
//	printf("%d\n", sizeof(long long));
//	printf("%d\n", sizeof(float));
//	printf("%d\n", sizeof(double));
//	return 0;
//}

//C语言怎么描述生活中的数据
//常量
//变量 局部变量 全局变量

//int main()
//{
//	//创建一个变量
//	//类型  （变量的名字 = 0）；=等号为赋值
//	//类型  变量的名字；//不推荐
//
//	int age = 20;
//	double weight = 5.4;
//
//
//
//	age = age + 1;
//	weight = weight - 10;
//	printf("%d\n", age); //%d int
//	printf("%lf\n", weight); //%f float //%lf double
//
//	return 0;
//}
	
//int a = 100;//全局变量 (外部定义的）
//int main()
//{
//	int a = 10; //局部变量 （内部定义的）
//	printf("%d\n",a);
//	return 0;
//}
////名字相同，局部优先，局部变量覆盖全局变量


//求两个整数和
//scanf函数是输入函数，printf函数是打印函数
//scanf_s vs编译提供的，不是C语言标准规定的，不能跨平台使用
int main()
{
	int a = 0;
	int b = 0;
	int sum = 0;
	scanf("%d %d", &a, &b); //外部输入的两个数，赋值到a 和 b中
	sum = a + b;
	printf("sum = %d\n", sum);
	return 0;
}
















