#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{
	for (int x = 1; x < 8; x++)
	{
		for (int y = 1; y<=2 * x - 1; y++)
		{
			printf("*");
		}
		printf("\n");
		}
	for (int x = 6; x>0; x--)
	{
		for (int y = 1; y <= 2 * x - 1; y++)
		{
			printf("*");
		}
		printf("\n");
	}
	return 0;
}
//int main()
//{
//	int n = 0;
//	int k = 0;
//	int i;
//	int Sn = 0;
//	printf("请输入一个数");
//	scanf("%d",&n)
//	for (i = 0; i < 5; i++)
//	{
//		k = k + n*pow(10, i);
//		Sn = Sn + k;
//	}
//	printf("%d+%d%d+%d%d%d+%d%d%d%d=%d".n.n.n.n.n.n, n, n, n, n, n.n.n.n.n.k);
//	return 0;
//}
//int main()
//{
//	int i;
//	int a;
//		int b;
//		int c;
//		for (i = 0; i <= 999; i++)
//		{
//			a = i / 100;
//			b = i / 10 % 10;
//			c = i % 10;
//			if (i == a*a*a + b*b*b + c*c*c)
//				printf("%d\n", i);
//		}
//	return 0;
//}