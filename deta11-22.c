#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>
//void jiem()
//{
//	printf("####################\n");
//	printf("###1.�ӷ�  2.����###\n");
//	printf("###3.�˷�  0.�˳�###\n");
//	printf("####################\n");
//}
//int jia(int b,int c)
//{
//	return b + c;
//	
//}
//int jian(int b, int c)//ע�⴫������������
//{
//	return b - c;
//	
//	
//}
//int cheng(int b, int c)
//{
//	return  b * c;
//	
//}
//int main()
//{
//	
//	int num = 0;
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	int (*hans[4])(int, int) = { 0, jia, jian, cheng };//ע�⺯��ָ��ָ����ʱ��ָ���˵����������������
//	do{
//		jiem();
//	printf("ѡ��>:");
//	scanf("%d", &a);//scanf�в�Ҫ����
//	if (a == 0)
//	{
//		printf("�˳���Ϸ");
//		break;
//	}
//	else if(a>=1 && a<=3)
//	{
//		printf("����������\n");
//		scanf("%d %d", &b, &c);
//		num = hans[a](b, c);
//		printf("�������>%d\n",num);
//	}
//	else
//	{
//		printf("ѡ�����\n");
//
//	}
//	} while (a);
//	return 0;
//}


int main()
{
	
	int a = 0;
	int b = 0;
	int c = 1;
	for (a = 101; a <= 200; a++)//��Ҫ�жϵ���
	{
		 c = 1;

		for (b = 2; b <=sqrt(a); b++)//����������
		{
			if (a % b == 0)//��ĳһ����ʹ����1Ϊ��ʱ����ִ������2�����Ի��ӡ����������������������2���ⲿѭ�����ɣ�
			{
				c = 0;
				break;
			}
			
		}
		if (c == 1)
		{
			printf("%d ", a);

		}
	}

	return 0;
}


//#include <stdio.h>
//#include <math.h>
//
//int main() {
//    int a = 0;
//    int b = 0;
//    int is_prime = 1; // ���һ���������ж��Ƿ�Ϊ����
//
//    for (a = 101; a <= 200; a++) {
//        is_prime = 1; // ÿ��ѭ����ʼʱ����is_primeΪ1
//
//        for (b = 2; b <= sqrt(a); b++) {
//            if (a % b == 0) {
//                is_prime = 0; // �������������������
//                break;
//            }
//        }
//
//        if (is_prime == 1) {
//            printf("%d ", a); // ���ڲ�ѭ���������ж��Ƿ�Ϊ����������������
//        }
//    }
//
//    return 0;
//}