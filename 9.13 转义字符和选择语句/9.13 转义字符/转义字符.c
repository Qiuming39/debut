#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
//转义字符：转变了他原来的意思

//三字母词 ??) - ] // \?防止书写多个问号时被解析成三字母词
// \' 用于表示字符常量’
// \\表示一个反斜杠，防止他被解释成一个转义字符
// \b退格符
// \f 进纸符 - 换页
// \n换行
// \r回车
// \t 水平制表符 - tab
// \v 垂直制表符 - 
// \ddd   ddd表示1~3个八进制数字 \130 结果是X
// \xdd   dd表示2个十六进制数字 \x30 结果是0



//int main()
//{
//	printf("c:\\test\\test.c");// \t 水平制表符 tab 
//	printf("ab\\ncd");// \n 换行
//	return 0;
// }


//int main()
//{
//	printf("%c\n", 'a');//%c 打印字符， %s 打印字符串, %d 打印一个整型
//	//printf("%c\n", ''');//不行
//	printf("%c\n", '\'');//可以
//	printf("%s\n", "a");
//	printf("%s\n", "abc");
//	printf("%s\n", "\"");
//	printf("%s\n", "'");
//	printf("%s\n", "'");
//	printf("%s\n", "?");
//	printf("\a\a\a");//电脑触发蜂鸣，警告字符
//	return 0;
//}


// \ddd, \xdd
//int main()
//{
//
//	//printf("%c\n", '\130');// 八进制130 1x8^2 + 3x8^1 + 0x8^0 = 88
//	//X -- ASCII码值是88
//	printf("%c\n", '\101'); //A
//	printf("%d\n", '\101'); //65
//	printf("%d\n", 'A'); //65
//	printf("%c\n", '\x30'); // 48 - '0'
//	printf("%d\n", strlen("abc"));//3
//	printf("%d\n", strlen("c:\test\328\test.c"));//14 转义字符算一个字符
//
//	return 0;
//}

//注释是用来解释复杂代码的
// //C++注释风格
// /*   */ c语言的注释风格 - 不支持嵌套注释