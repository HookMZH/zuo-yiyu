#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
int main()
{
	printf("%c\n", '\x61');//\xdd dd��ʮ�����Ƶ�����
	//printf("%d\n", strlen("c:\test\32\test.c"));//\32--32��2��8��������
	//32��Ϊ8���ƴ�����Ǹ�ʮ�������֣���ΪASCII��ֵ��Ӧ���ַ�
	return 0;
}
//??+)-->����ĸ��\?��ֹ������������ĸ��
//int main()
//{
//	printf("%s\n", "\"");//\������ת�������ַ���
//	//printf("%c\n", '\'');
//	//printf("c:\\test\\32\\test.c");//\t-ˮƽ�Ʊ����tab�Ŀո񳤶Ⱦ���ˮƽ�Ʊ��.\����ת��\ʹ��������ת���ַ���\
//	return 0;
//}
//////int main()
//{
//	printf("abc\n");//ת���ַ�\n�ǻ��в�����n����˼
//	return 0;
//}
//int main()
//{
//	char arr1[] = "abc";//abc\0
//	char arr2[] = { 'a', 'b', 'c' ,'\0'};//abcxxxxx...\0
//	printf("%d\n", strlen(arr1));//3
//	printf("%d\n", strlen(arr2));//���ֵ
//	return 0;
//}
//int main()
//{
//	char arr1[] = "abc";//����
//	//"abc"--'a','b','c','\0'---'\0'���ַ����Ľ�����־��\0��ֵ��0,��ֻ��һ��ת���ַ��������ַ���������
//	//�����ڼ�����ϴ洢��ʱ��洢����2����
//	//'\0'-0
//	//'a'-97
//	//A-65
//	//...
//	//ASCII����
//	//ASCOO��ֵ
//	char arr2[] = { 'a', 'b', 'c', '\0' };
//	printf("%s\n", arr1);//��ӡ�ַ�����%s
//	printf("%s\n", arr2);
//		return 0;
//}
////int float
////char
//�ַ�������
//int main()
//{
//	"abcdef";//˫�����ڵ����ַ���
//	"";//���ַ���
//
//	return 0;
//}