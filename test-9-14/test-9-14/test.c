#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//int main()
//{
//	{
//		int a = 10
//		printf("a=%d", a);// ok
//	}
//	printf("a=%d", a);// error
//	return 0;
//}
int main()
{
	extern int g_val;//����extern�ⲿ����
	printf("g_val=%d\n", g_val);
	return 0;
}
//�ֲ����������������ǣ������������������ڿ�ʼ�����������������ڽ���
//ȫ�ֱ��������������ǣ������������������
//int global = 2020;
//void test()
//{
//	printf("test()--%d\n", global);
//}
//int main()
//{
//	test();
//	printf("%d\n", global);
//	return 0;
//}
//int main()
//{
//	int num = 0;//�����������ã������������������
//	{ 
//		printf("num=%d", num);
//	}
//	return 0;
//}
//int main()
//{
//	int num1 = 0;
//		int num2 = 0;
//		
//		//��������-ʹ�����뺯��scanf
//		scanf("%d%d", &num1, &num2);//ȡ��ַ����&
//		int sum = 0;
//		//C�����﷨�涨������Ҫ�����ڵ�ǰ��������ǰ��
//			sum = num1 * num2;
//			printf("sum=%d\n", sum);
//	return 0;
//}
//int a = 10;
//int main()
//{
//	{ int a = 10;
//	}
//	printf("%d\n", a);
//
//	return 0;
//}
//int a = 100;
//int main()
//{
//	int a = 10;
//	printf("%d\n", a);//�ֲ�������ȫ�ֱ��������ֽ��鲻Ҫ��ͬ-���ײ������
//	//���ֲ�������ȫ�ֱ�����������ͬʱ���ֲ���������
//	return 0;
//}
//int num2 = 20;//ȫ�ֱ���-������{}֮��ı���
//int main()
//{
//	int num1 = 10;//�ֲ�����-�����ڴ����{}�ڲ��ı���
//	return 0;
//}
//int main()
//{
//	short age = 20;
//	float weight = 95.6f;
//	return 0;
//}

//int main()
//{
//	printf("%d\n", sizeof(char));//1 ��λ�ֽ�
//	printf("%d\n", sizeof(short));//2
//	printf("%d\n", sizeof(int));//4
//	printf("%d\n", sizeof(long));//4
//	printf("%d\n", sizeof(long long));//8
//	printf("%d\n", sizeof(float));//4
//	printf("%d\n", sizeof(double));//8
//	return 0;
//}
//������еĵ�λ
// bit -����λ  һ������λ���һ��������λ
//byte-�ֽ�     һ���ֽ�=�˸�����λ
//kb-            1kb=1024 byte
//mb             1mb=1024kb
//gb             1gb=1024mb
//tb             1tb=1024gb
//pb             1pb=1024tb
//�������Ӳ��--ͨ��
//  ����   ����
//    1     0

//int main()
//{
	//printf("hehe\n");
	//return 0;
//}
// char �ַ���������
//%d-��ӡ����
//%c-��ӡ�ַ�
//%f-��ӡС��
//%p-�Ե�ַ����ʽ��ӡ
//%x-��ӡʮ������
//%lf-��ӡ˫���ȸ�����
//int main()
//{
//	//char ch='A';//char-�ַ����� �ڴ�
//	//printf("%c\n",ch);//%c-��ӡ�ַ���ʽ������
//	//short int-������
//	//int -����
//	//int age = 20;
//	//printf("%d\n", age);//%d--��ӡ����ʮ��������
//	//long  ������
//	//long num = 100;
//	//printf("%d\n", num);
//	//float f = 6.6;
//	//printf("%f\n", f);
//	//double d = 3.14;
//	//printf("%lf\n", d);
//	
//	return 0;
//}
//short ������
// int ����
//long ������
//long long����������
//float �����ȸ�������С����
//double ˫���ȸ�����������׼��
//����һ����stdio.h���ļ�
//std-��׼ standard input output������뺯������Ҫʹ�����ͷ�ļ�
//#include<stdio.h>

//int main()//������
//{
	//printf("������ɵ�� \n");
	//printf("������ɵ�� \n");
	//printf("������ɵ�� \n");
//	printf("������ɵ�� \n");
//	printf("������ɵ�� \n");
//	printf("������ɵ�� \n");
//	printf("������ɵ�� \n");
//	printf("������ɵ�� \n");
//	printf("������ɵ�� \n");
//	return 0;//����0
//}
//int �����͵���˼
//int main()
//{
	//�����������
	//����-print function-printf-��ӡ����
	//�⺯��-C���Ա����ṩ������ʹ�õĺ���
	//���˵Ķ���
	//#include
	//printf("hello\n");
	//return 0;
//}