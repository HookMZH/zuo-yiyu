#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
int main()
{
	int arr[10] = { 0 };
	int sz = 0;
	printf("%d\n", sizeof(arr));//计算数组的元素个数，个数=数组总大小/每个元素的大小
	sz = sizeof(arr) / sizeof(arr[0]);
	printf("%d\n", sz);
	//int a = 10;
	//printf("%d\n", sizeof(a));//sizeof计算的是变量/类型所占空间的大小单位为字节
	//printf("%d\n", sizeof(int));
	//printf("%d\n", sizeof a);//算变量名是（）可以省略算int时不可省略
	return 0;
}
//单目操作符
//双目操作符
//三目操作符
//int main()
//{
//	//int a = 10;
//	//int b = 20;
//	//a + b;//+操作符也叫双目操作符
//	//c语言表示真假。0-假  非0-真
//	int a = -2;
//	int b = -a;
//	int c = -3;
//	printf("%d\n", a);
//	printf("%d\n", !a);//！把假变真真变假
//	return 0;
//}
//int main()
//{
//	int a = 10;
//	a = 20;//=赋值。==判断相等
//	a = a + 10;//a+=10;完全一样，复合赋值符
//	//+= -= *= /= %=
//	return 0;
//}
//位操作
//int main()
//{
//	//(二进制）位操作
//	//&按位与0是假1是真，全真才为真
//	//|按位或,有1就是1
//	//^按位异或，对应的二进制位相同为0不同为1
//	int a = 3;//011
//	int b = 5;//101
//	int c = a^b;
//	printf("%d\n", c);
//	return 0;
//}
//移位操作符
//<<左移
//>>右移移的是二进制位
//int main()
//{
//	int a = 1;//int整形占14字节即32个比特位
//	int b=a >> 1;
//	printf("%d\n", b);
//	return 0;
//}
//算数操作符+-*/%
//int main()
//{
//	int a = 5 % 2;//取模
//	printf("%d\n", a);
//	return 0;
//}
//int main()
//{
//	int arr[10] = {1,2,3,4,5,6,7,8,9,10};//定义一个存放10个整数的数组
//	//下标从0开始的数组里的1对应的下标是0
//	//printf("%d\n", arr[4]);//下标的方士访问元素
//	int i = 0;
//	while (i < 10)
//	{
//		printf("%d\n", arr[i]);
//		i++;
//	}
//	char ch[20];
//	float arr2[5];
//	return 0;
//}
//int Add(int x, int y)
//{
//	int z=x + y;
//	return z;
//}//函数
//int main()
//{
//	int num1 = 0;
//	int num2 = 0;
//	int sum = 0;
//	scanf("%d%d", &num1, &num2);
//	sum = Add(num1, num2);
//	//sum = num1 + num2;
//	printf("sum=%d", sum);
//	return 0;
//}
//int main()
//{
//	int line = 0;
//	printf("开始做游戏\n");
//	while (line < 20000)
//	{
//		printf("敲一行代码:%d\n",line);
//		line++;
//	}
//	if (line>=20000)
//	printf("做出好游戏\n");
//	return 0;
//}
//int main()
//{
//	int input = 0;
//	printf("加入比特\n");
//	printf("你要好好学习吗？(1/0)>:");
//	scanf("%d", &input);
//	if (input == 1)
//		printf("做出好的游戏\n");
//	else
//		printf("卖红薯\n");
//	return 0;
//}
//int main()
//{
//	/*
//	int a = 10;
//	*/
//	return 0;
//}
