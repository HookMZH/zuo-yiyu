#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	printf("%d\n", sizeof(char));//1 ��λ�ֽ�
	printf("%d\n", sizeof(short));//2
	printf("%d\n", sizeof(int));//4
	printf("%d\n", sizeof(long));//4
	printf("%d\n", sizeof(long long));//8
	printf("%d\n", sizeof(float));//4
	printf("%d\n", sizeof(double));//8
	return 0;
}
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