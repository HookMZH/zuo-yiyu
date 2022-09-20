#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int arr1[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	int arr2[10] = { 0, 11, 12, 13, 14, 15, 16, 17, 18, 19 };
	int arr3[10];
	int i = 0;
	for (i = 0; i < sizeof(arr1) / sizeof(arr1[0]);i++)
	{
		arr3[i] = arr1[i];
		arr1[i] = arr2[i];
		arr2[i] = arr3[i];
	}
	for (i = 0; i<sizeof(arr1) / sizeof(arr1[0]); i++)
	{
		printf("%d", arr1[i]);
	}
	printf("\n");
	for (i = 0; i<sizeof(arr2) / sizeof(arr2[0]); i++)
	{
		printf("%d", arr2[i]);
	}
	printf("\n");
	return 0;
}

	
//int main()
//{
//	int i=0;
//	double a = 1;
//		double sum = 0;
//		for (i = 1; i <= 100; i++)
//		{
//			sum += a / i;
//			a *= -1;
//		}
//		printf("sum=%f", sum);
//	return 0;
//}
//int main()
//{
//	int n = 0;
//	int count = 0;
//	for (n = 0; n < 101; n++)
//	{
//		if (9 == n % 10 || 9 == n / 10)
//		{
//			printf("%d\n", n);
//			count++;
//		}
//	}
//	printf("count=%d\n", count+1);
//	return 0;
//}