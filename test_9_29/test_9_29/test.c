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
//	int a = 10;//4���ֽ�
//	int*p = &a;//ȡ��ַ
//	//��һ�ֱ�����������ŵ�ַ��-ָ�����
//	//&a;//ȡ��a�ĵ�ַ
//	printf("%p\n", &a);
//	printf("%p\n", p);
//	*p=20;//*-�����ò�����
//	printf("a=%d\n",a);
//	return 0;
//}
//#define ���峣���ͺ�
//#define MAX 100//�����ʶ������

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

//static���ξֲ�����
//static����ȫ�ֱ����ı���ȫ�ֱ�����������
//�þ�̬��ȫ�ֱ���ֻ�����Լ����ڵ�Դ�ļ�ʹ�ã�����Դ�ļ����޷�ʹ��
//static���κ���Ҳ�Ǹı��˺�����������--��׼ȷ
//static���κ����ı��˺�������������
//��ͨ���������ⲿ�������ԡ�������static�Ժ�ͱ����ڲ���������

//�����ⲿ����
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
//	//extern-�����ⲿ���ŵ�
//	extern int g_val;
//	printf("g_val=%d\n", g_val);
//	return 0;
//}
//void test()
//{
//	static int b = 1;//a��һ����̬�ľֲ�����
//	//�ֲ��������������ڱ䳤��
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
//	//typedef-���Ͷ���-�����ض���
//	typedef unsigned int u_int;
//	typedef int i;
//	i a = 1;
//	u_int sum = 20;
//	printf("%d\n", a);
//	return 0;
//}

//int float c�������ùؼ���
//register�Ĵ���  �������洢����  �Ĵ���  ���ٻ���   �ڴ�  Ӳ��
//int main()
//{
//	//register int a = 10;//��a����ɼĴ������������飩
//	int a = 10;//int ����ı������з��ŵ���signed intʡ������
//	unsigned int sum = 0;
//	//struct-�ṹ��ؼ���
//	//union--�����干����
//	return 0;
//}
//int main()
//{
//	int a = 10;//�ֲ�����-�Զ�����ʡ����auto auto int a=10;
//	return 0;
//}

//ֻҪ���������ڴ��д洢�Ķ��Ƕ����ƵĲ���
//��������ԭ�룬���룬������ͬ
//��������������ǲ���
//ԭ����ֱ�Ӱ�����д���Ķ���������
//������ԭ��ķ���λ���䣬����λ��λȡ���õ���
//�����Ƿ���+1�õ���

//int Add(int x, int y)
//{
//	int z = 0;
//		z = x + y;
//		return z;
//}
//int main()
//{
//	//int arr[10] = { 0 };
//	//arr[4];//[]--�±����ò�����
//	int a = 10;
//	int b = 20;
//	int sum=Add(a, b);
//	return 0;
//}
//exp1?exp2:exp3;��������������Ŀ������
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
//�߼�������
//int main()
//{
//	//0��ʾ�ٷ�0Ϊ��
//	//&&�����߼���
//	int a = 0;//000
//	int b = 5;//101
//	//int c = a&b;//ȫ��Ϊ��
//	int c = a || b;
//	//||�߼���ֻҪ��һ��Ϊ����Ϊ��
//	printf("c=%d\n", c);
//	return 0;
//}
//��ϵ������
//���ڵ���>=  ������!=