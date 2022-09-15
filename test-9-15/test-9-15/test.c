#define _CRT_SECURE_NO_WARNINGS 1//加在源文件的第一行
# include <stdio.h>
//枚举常量
//枚举-一一列举
//性别：男，女，保密
//三原色：红黄蓝
//星期：一-七
//枚举关键-enum
enum Color
{
	RED,
	YELLOW,
	BLUE
};
int main()
{
	enum Color color = BLUE;
	color = YELLOW;//枚举常量是无法更改，通过枚举类型创造的变量是可以更改的
	
	return 0;
}
//enum Sex
//{
//	MALE,
//	FEMALE,
//	SECRET
//};
//int main()
//{
//	enum Sex s = FEMALE;
//	printf("%d\n", MALE);//0
//	printf("%d\n", FEMALE);//1
//	printf("%d\n", SECRET);//2
//	return 0;
//}
//#define定义的标识符常量
//#define MAX 10
//int main()
//{
//	int arr[MAX] = { 0 };
//	printf("%d\n", MAX);
//	return 0;
//}
//int main()
//{
//	int num1 = 0;
//	int num2 = 0;
//	int sum = 0;
//	scanf("%d%d", &num1, &num2);//scanf_s不是标准C语言提供的，是VS编译器提供的，不具有跨平台性/可移植性
//	// scanf
//	//strcpy
//	//strlen
//	//strcat
//	//...
//	//以上都是不安全的VS会给一个安全版本，但是不具有跨平台性
//	sum = num1 + num2;
//	printf("sum=%d\n", sum);
//
//	return 0;
//}
//int main()
//{
//	const int n = 10;//n虽然具有常属性但仍是变量
//	int arr[10] = { 0 };//[]里应加入常量，不能使用常变量
//	//const -常属性
//	//const int num = 4;//const修饰常变量，无法再改变
//	//printf("%d\n", num);
//	////num = 8;
//	//printf("%d\n", num);
//
//	//3;//字面常量
//	//100;
//	//3.14;//直观写出的值就是字面常量
//
//	return 0;
//}