#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int a = (int)3.14;//(����)ǿ������ת����
	printf("%d\n", a);
	return 0;
}
//int main()
//{
//	int a = 10;
//	int b = --a;
//	//int b = a--;//9 10
//	//int b = ++a;//ǰ��++��++��ʹ��
//	//int b = a++;//����++����ʹ����++
//	printf("a=%d b=%d\n", a, b);//11,10
//	return 0;
//}
////~��һ�����Ķ����ư�λȡ��
////1010--0101
//int main()
//{
//	int a = 0;//4���ֽڣ�32bitλ  32��0
//	int b = ~a;//b���з��ŵ����Σ�������λ�����λΪ0��Ϊ������Ϊ1Ϊ����
//	printf("%d\n", b);//ԭ�롢���롢���롣ʹ�ô�ӡ���������������ԭ��
//	//�������ڴ��д洢��ʱ�򣬴洢���Ƕ����ƵĲ���
//	//ԭ�����λ���䣬����ȡ�����õ����룬����+1�õ�����
//	return 0;
//}
////#include<string.h>
////int main()
////{
////	int a = 10;
////	int arr[] = { 1, 2, 3, 4, 5, 6 };//6*4=24
////	printf("%d\n", sizeof(a));
//	printf("%d\n", sizeof(int));
//	printf("%d\n", sizeof a );//���������������ſ�ʡ��
//	printf("%d\n", sizeof(arr));//���������С����λ���ֽ�
//	printf("%d\n", sizeof(arr) / sizeof(arr[0]));
//	return 0;
//}