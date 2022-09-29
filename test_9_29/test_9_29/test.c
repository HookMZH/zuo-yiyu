#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	char ch = 'w';
	char*pc = &ch;
	*pc = 'a';
	printf("%d\n", sizeof(pc));
	return 0;
}
//int main()
//{
//	int a = 10;//4个字节
//	int*p = &a;//取地址
//	//有一种变量是用来存放地址的-指针变量
//	//&a;//取出a的地址
//	printf("%p\n", &a);
//	printf("%p\n", p);
//	*p=20;//*-解引用操作符
//	printf("a=%d\n",a);
//	return 0;
//}
//#define 定义常量和宏
//#define MAX 100//定义标识符常量

//Max(int x, int y)
//{
//	if (x > y)
//		return x;
//	else
//	return y;
//}
//#define MAX(X,Y)(X>Y?X:Y)
//int main()
//{
//	/*int a = MAX;*/
//	int a = 10;
//	int b = 20;
//	int max = Max(a, b);
//	printf("max=%d\n", max);
//	max = MAX(a, b);
//	printf("max=%d\n", max);
//	return 0;
//}

//static修饰局部变量
//static修饰全局变量改变了全局变量的作用域
//让静态的全局变量只能在自己所在的源文件使用，出了源文件就无法使用
//static修饰函数也是改变了函数的作用域--不准确
//static修饰函数改变了函数的链接属性
//普通函数具有外部链接属性——加了static以后就变了内部链接属性

//声明外部函数
//extern int Add(int, int);
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int sum = Add(a, b);
//	printf("sum=%d\n", sum);
//	return 0;
//}

//int main()
//{
//	//extern-声明外部符号的
//	extern int g_val;
//	printf("g_val=%d\n", g_val);
//	return 0;
//}
//void test()
//{
//	static int b = 1;//a是一个静态的局部变量
//	//局部变量的生命周期变长了
//	b++;
//	printf("a=%d\n", b);
//}
//int main()
//{
//	int i = 0;
//	while (i < 5)
//	{
//		test();
//		i++;
//	}
//	return 0;
//}

//int main()
//{
//	//int float;//err
//	//typedef-类型定义-类型重定义
//	typedef unsigned int u_int;
//	typedef int i;
//	i a = 1;
//	u_int sum = 20;
//	printf("%d\n", a);
//	return 0;
//}

//int float c语言内置关键字
//register寄存器  计算器存储数据  寄存器  高速缓存   内存  硬盘
//int main()
//{
//	//register int a = 10;//把a定义成寄存器变量（建议）
//	int a = 10;//int 定义的变量是有符号的是signed int省略来的
//	unsigned int sum = 0;
//	//struct-结构体关键字
//	//union--联合体共用体
//	return 0;
//}
//int main()
//{
//	int a = 10;//局部变量-自动变量省略了auto auto int a=10;
//	return 0;
//}

//只要是整数，内存中存储的都是二进制的补码
//正数——原码，反码，补码相同
//负数——》存的是补码
//原码是直接按正负写出的二进制序列
//反码是原码的符号位不变，其他位按位取反得到的
//补码是反码+1得到的

//int Add(int x, int y)
//{
//	int z = 0;
//		z = x + y;
//		return z;
//}
//int main()
//{
//	//int arr[10] = { 0 };
//	//arr[4];//[]--下标引用操作符
//	int a = 10;
//	int b = 20;
//	int sum=Add(a, b);
//	return 0;
//}
//exp1?exp2:exp3;条件操作符，三目操作符
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int max = 0;
//	max = (a > b ? a : b);
//	/*if (a > b)
//		max = a;
//	else
//		max = b;*/
//	printf("max=%d\n", max);
//	return 0;
//}
//逻辑操作符
//int main()
//{
//	//0表示假非0为真
//	//&&——逻辑与
//	int a = 0;//000
//	int b = 5;//101
//	//int c = a&b;//全真为真
//	int c = a || b;
//	//||逻辑或，只要有一个为真则为真
//	printf("c=%d\n", c);
//	return 0;
//}
//关系操作符
//大于等于>=  不等于!=