#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
int main()
{
	int arr[10] = { 0 };
	int sz = 0;
	printf("%d\n", sizeof(arr));//���������Ԫ�ظ���������=�����ܴ�С/ÿ��Ԫ�صĴ�С
	sz = sizeof(arr) / sizeof(arr[0]);
	printf("%d\n", sz);
	//int a = 10;
	//printf("%d\n", sizeof(a));//sizeof������Ǳ���/������ռ�ռ�Ĵ�С��λΪ�ֽ�
	//printf("%d\n", sizeof(int));
	//printf("%d\n", sizeof a);//��������ǣ�������ʡ����intʱ����ʡ��
	return 0;
}
//��Ŀ������
//˫Ŀ������
//��Ŀ������
//int main()
//{
//	//int a = 10;
//	//int b = 20;
//	//a + b;//+������Ҳ��˫Ŀ������
//	//c���Ա�ʾ��١�0-��  ��0-��
//	int a = -2;
//	int b = -a;
//	int c = -3;
//	printf("%d\n", a);
//	printf("%d\n", !a);//���Ѽٱ�������
//	return 0;
//}
//int main()
//{
//	int a = 10;
//	a = 20;//=��ֵ��==�ж����
//	a = a + 10;//a+=10;��ȫһ�������ϸ�ֵ��
//	//+= -= *= /= %=
//	return 0;
//}
//λ����
//int main()
//{
//	//(�����ƣ�λ����
//	//&��λ��0�Ǽ�1���棬ȫ���Ϊ��
//	//|��λ��,��1����1
//	//^��λ��򣬶�Ӧ�Ķ�����λ��ͬΪ0��ͬΪ1
//	int a = 3;//011
//	int b = 5;//101
//	int c = a^b;
//	printf("%d\n", c);
//	return 0;
//}
//��λ������
//<<����
//>>�����Ƶ��Ƕ�����λ
//int main()
//{
//	int a = 1;//int����ռ14�ֽڼ�32������λ
//	int b=a >> 1;
//	printf("%d\n", b);
//	return 0;
//}
//����������+-*/%
//int main()
//{
//	int a = 5 % 2;//ȡģ
//	printf("%d\n", a);
//	return 0;
//}
//int main()
//{
//	int arr[10] = {1,2,3,4,5,6,7,8,9,10};//����һ�����10������������
//	//�±��0��ʼ���������1��Ӧ���±���0
//	//printf("%d\n", arr[4]);//�±�ķ�ʿ����Ԫ��
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
//}//����
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
//	printf("��ʼ����Ϸ\n");
//	while (line < 20000)
//	{
//		printf("��һ�д���:%d\n",line);
//		line++;
//	}
//	if (line>=20000)
//	printf("��������Ϸ\n");
//	return 0;
//}
//int main()
//{
//	int input = 0;
//	printf("�������\n");
//	printf("��Ҫ�ú�ѧϰ��(1/0)>:");
//	scanf("%d", &input);
//	if (input == 1)
//		printf("�����õ���Ϸ\n");
//	else
//		printf("������\n");
//	return 0;
//}
//int main()
//{
//	/*
//	int a = 10;
//	*/
//	return 0;
//}
