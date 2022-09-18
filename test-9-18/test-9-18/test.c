#define _CRT_SECURE_NO_WARNINGS 1
int main()
{
	int a = 0;
	int count = 0;
	for (a = 100; a <= 200; a++)
	{
		int b = 0;
		for (b = 2; b < a; b++)
		{
			if (a%b == 0)
			{
				break;
			}
		
		}
		if (a == b)
		{
			count++;
			printf("%d\n", a);
		}
	}
	printf("count=%d\n", count);

	return 0;
}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	a = a^b;
//	b = a^b;
//	a = a^b;
//	printf("a=%db=%d", a, b);
//
//	return 0;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int c;
//	c = a;
//	a = b;
//	b = c;
//	printf("a=%db=%d", a, b);
//
//	return 0;
//}
//int main()
//{
//	int a = 100;
//	int b = 2;
//	int c = 0;
//	c = a%b;
//	
//		while (a<=200)
//		{
//			while (b < a)
//			{
//				if (c = 0)
//					a=a+1;
//				else
//					b=b+1;
//			}
//			printf("%d\n", a);
//		}
//		
//	
//	return 0;
//}