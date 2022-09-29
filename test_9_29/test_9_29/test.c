#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//int float c语言内置关键字
//register寄存器  计算器存储数据  寄存器  高速缓存   内存  硬盘
int main()
{
	int a = 10;//局部变量-自动变量省略了auto auto int a=10;
	return 0;
}

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