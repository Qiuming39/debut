#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//int main()
//{
//	printf("����\n");
//	return 0;
//}


//ctrl+F5

//a
//'a' - �ַ�a
// 

//
//int main()
//{
//	//�ַ�����
//	char ch = 'a';
//	//����
//	int age = 20;
//	//������
//	short num = 10;
//	//long
//	//long long
//
//	//�����ȸ�����
//	float weight = 55;
//	//˫���ȸ�����
//	double d = 0.0;
//
//	return 0;
//}

//int main()
//{
//	//printf("hehe\n");
//	//printf("����\n");
//	//printf("%d\n",100);//��ӡһ������
//	//sizeof - �ؼ��� - ������ - �������ͻ��߱�����ռ�ռ��С (��λ���ֽڣ�
//	//������еĵ�λ�� bit - ����λ, byte - �ֽ� = 8bit
//	//kb mb gb tb pb
//	printf("%d\n", sizeof(char));
//	printf("%d\n", sizeof(short));
//	printf("%d\n", sizeof(int));
//	printf("%d\n", sizeof(long));
//	printf("%d\n", sizeof(long long));
//	printf("%d\n", sizeof(float));
//	printf("%d\n", sizeof(double));
//	return 0;
//}

//C������ô���������е�����
//����
//���� �ֲ����� ȫ�ֱ���

//int main()
//{
//	//����һ������
//	//����  ������������ = 0����=�Ⱥ�Ϊ��ֵ
//	//����  ���������֣�//���Ƽ�
//
//	int age = 20;
//	double weight = 5.4;
//
//
//
//	age = age + 1;
//	weight = weight - 10;
//	printf("%d\n", age); //%d int
//	printf("%lf\n", weight); //%f float //%lf double
//
//	return 0;
//}
	
//int a = 100;//ȫ�ֱ��� (�ⲿ����ģ�
//int main()
//{
//	int a = 10; //�ֲ����� ���ڲ�����ģ�
//	printf("%d\n",a);
//	return 0;
//}
////������ͬ���ֲ����ȣ��ֲ���������ȫ�ֱ���


//������������
//scanf���������뺯����printf�����Ǵ�ӡ����
//scanf_s vs�����ṩ�ģ�����C���Ա�׼�涨�ģ����ܿ�ƽ̨ʹ��
int main()
{
	int a = 0;
	int b = 0;
	int sum = 0;
	scanf("%d %d", &a, &b); //�ⲿ���������������ֵ��a �� b��
	sum = a + b;
	printf("sum = %d\n", sum);
	return 0;
}
















