#define _CRT_SECURE_NO_WARNINGS 1//����Դ�ļ��ĵ�һ��
# include <stdio.h>
//ö�ٳ���
//ö��-һһ�о�
//�Ա��У�Ů������
//��ԭɫ�������
//���ڣ�һ-��
//ö�ٹؼ�-enum
enum Color
{
	RED,
	YELLOW,
	BLUE
};
int main()
{
	enum Color color = BLUE;
	color = YELLOW;//ö�ٳ������޷����ģ�ͨ��ö�����ʹ���ı����ǿ��Ը��ĵ�
	
	return 0;
}
//enum Sex
//{
//	MALE,
//	FEMALE,
//	SECRET
//};
//int main()
//{
//	enum Sex s = FEMALE;
//	printf("%d\n", MALE);//0
//	printf("%d\n", FEMALE);//1
//	printf("%d\n", SECRET);//2
//	return 0;
//}
//#define����ı�ʶ������
//#define MAX 10
//int main()
//{
//	int arr[MAX] = { 0 };
//	printf("%d\n", MAX);
//	return 0;
//}
//int main()
//{
//	int num1 = 0;
//	int num2 = 0;
//	int sum = 0;
//	scanf("%d%d", &num1, &num2);//scanf_s���Ǳ�׼C�����ṩ�ģ���VS�������ṩ�ģ������п�ƽ̨��/����ֲ��
//	// scanf
//	//strcpy
//	//strlen
//	//strcat
//	//...
//	//���϶��ǲ���ȫ��VS���һ����ȫ�汾�����ǲ����п�ƽ̨��
//	sum = num1 + num2;
//	printf("sum=%d\n", sum);
//
//	return 0;
//}
//int main()
//{
//	const int n = 10;//n��Ȼ���г����Ե����Ǳ���
//	int arr[10] = { 0 };//[]��Ӧ���볣��������ʹ�ó�����
//	//const -������
//	//const int num = 4;//const���γ��������޷��ٸı�
//	//printf("%d\n", num);
//	////num = 8;
//	//printf("%d\n", num);
//
//	//3;//���泣��
//	//100;
//	//3.14;//ֱ��д����ֵ�������泣��
//
//	return 0;
//}