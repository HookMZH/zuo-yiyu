#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
int main()
{
	printf("%c\n", '\x61');//\xdd dd是十六进制的数字
	//printf("%d\n", strlen("c:\test\32\test.c"));//\32--32是2个8进制数字
	//32作为8进制代表的那个十进制数字，作为ASCII码值对应的字符
	return 0;
}
//??+)-->三字母词\?防止被解析成三字母词
//int main()
//{
//	printf("%s\n", "\"");//\是用来转义其他字符的
//	//printf("%c\n", '\'');
//	//printf("c:\\test\\32\\test.c");//\t-水平制表符按tab的空格长度就是水平制表符.\可以转义\使他不再是转义字符的\
//	return 0;
//}
//////int main()
//{
//	printf("abc\n");//转义字符\n是换行不再是n的意思
//	return 0;
//}
//int main()
//{
//	char arr1[] = "abc";//abc\0
//	char arr2[] = { 'a', 'b', 'c' ,'\0'};//abcxxxxx...\0
//	printf("%d\n", strlen(arr1));//3
//	printf("%d\n", strlen(arr2));//随机值
//	return 0;
//}
//int main()
//{
//	char arr1[] = "abc";//数组
//	//"abc"--'a','b','c','\0'---'\0'是字符串的结束标志，\0的值是0,它只是一个转义字符，不算字符串的内容
//	//数据在计算机上存储的时候存储的是2进制
//	//'\0'-0
//	//'a'-97
//	//A-65
//	//...
//	//ASCII编码
//	//ASCOO码值
//	char arr2[] = { 'a', 'b', 'c', '\0' };
//	printf("%s\n", arr1);//打印字符串用%s
//	printf("%s\n", arr2);
//		return 0;
//}
////int float
////char
//字符串类型
//int main()
//{
//	"abcdef";//双引号内的是字符串
//	"";//空字符串
//
//	return 0;
//}