#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	printf("%d\n", sizeof(char));//1 单位字节
	printf("%d\n", sizeof(short));//2
	printf("%d\n", sizeof(int));//4
	printf("%d\n", sizeof(long));//4
	printf("%d\n", sizeof(long long));//8
	printf("%d\n", sizeof(float));//4
	printf("%d\n", sizeof(double));//8
	return 0;
}
//计算机中的单位
// bit -比特位  一个比特位存放一个二进制位
//byte-字节     一个字节=八个比特位
//kb-            1kb=1024 byte
//mb             1mb=1024kb
//gb             1gb=1024mb
//tb             1tb=1024gb
//pb             1pb=1024tb
//计算机是硬件--通电
//  正电   负电
//    1     0

//int main()
//{
	//printf("hehe\n");
	//return 0;
//}
// char 字符数据类型
//%d-打印整形
//%c-打印字符
//%f-打印小数
//%p-以地址的形式打印
//%x-打印十六进制
//%lf-打印双精度浮点数
//int main()
//{
//	//char ch='A';//char-字符类型 内存
//	//printf("%c\n",ch);//%c-打印字符格式的数据
//	//short int-短整型
//	//int -整形
//	//int age = 20;
//	//printf("%d\n", age);//%d--打印整形十进制数据
//	//long  长整型
//	//long num = 100;
//	//printf("%d\n", num);
//	//float f = 6.6;
//	//printf("%f\n", f);
//	//double d = 3.14;
//	//printf("%lf\n", d);
//	
//	return 0;
//}
//short 短整型
// int 整形
//long 长整型
//long long更长得整形
//float 单精度浮点数（小数）
//double 双精度浮点数（更精准）
//包含一个叫stdio.h的文件
//std-标准 standard input output输出输入函数都需要使用这个头文件
//#include<stdio.h>

//int main()//主函数
//{
	//printf("邹邹是傻子 \n");
	//printf("邹邹是傻子 \n");
	//printf("邹邹是傻子 \n");
//	printf("邹邹是傻子 \n");
//	printf("邹邹是傻子 \n");
//	printf("邹邹是傻子 \n");
//	printf("邹邹是傻子 \n");
//	printf("邹邹是傻子 \n");
//	printf("邹邹是傻子 \n");
//	return 0;//返回0
//}
//int 是整型的意思
//int main()
//{
	//这里完成任务
	//函数-print function-printf-打印函数
	//库函数-C语言本身提供给我们使用的函数
	//别人的东西
	//#include
	//printf("hello\n");
	//return 0;
//}