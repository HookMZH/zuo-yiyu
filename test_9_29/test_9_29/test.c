#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//int float c�������ùؼ���
//register�Ĵ���  �������洢����  �Ĵ���  ���ٻ���   �ڴ�  Ӳ��
int main()
{
	int a = 10;//�ֲ�����-�Զ�����ʡ����auto auto int a=10;
	return 0;
}

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