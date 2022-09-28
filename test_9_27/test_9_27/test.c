#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int a = (int)3.14;//(类型)强制类型转换、
	printf("%d\n", a);
	return 0;
}
//int main()
//{
//	int a = 10;
//	int b = --a;
//	//int b = a--;//9 10
//	//int b = ++a;//前置++先++再使用
//	//int b = a++;//后置++，先使用再++
//	printf("a=%d b=%d\n", a, b);//11,10
//	return 0;
//}
////~对一个数的二进制按位取反
////1010--0101
//int main()
//{
//	int a = 0;//4个字节，32bit位  32个0
//	int b = ~a;//b是有符号的整形，二进制位的最高位为0则为正数，为1为负数
//	printf("%d\n", b);//原码、反码、补码。使用打印出来的是这个数的原码
//	//负数在内存中存储的时候，存储的是二进制的补码
//	//原码符号位不变，其余取反，得到反码，反码+1得到补码
//	return 0;
//}
////#include<string.h>
////int main()
////{
////	int a = 10;
////	int arr[] = { 1, 2, 3, 4, 5, 6 };//6*4=24
////	printf("%d\n", sizeof(a));
//	printf("%d\n", sizeof(int));
//	printf("%d\n", sizeof a );//当变量长度是括号可省略
//	printf("%d\n", sizeof(arr));//计算数组大小，单位是字节
//	printf("%d\n", sizeof(arr) / sizeof(arr[0]));
//	return 0;
//}