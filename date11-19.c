#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>
//int main()
//{
//	int a = 0;
//	
//	//int c = 0;
//	
//	for (a = 0; a <= 100000; a++)
//	{
//		int d = 0;
//		int b = a;
//		int conut = 1;
//		while (b / 10)
//		{
//			conut++;
//			b /= 10;
//		}
//		b = a;
//		while (b)
//		{
//			
//			d +=pow(b%10, conut);
//			b /= 10;
//		}
//		
//		if (a == d)
//		{
//			printf("%d ", a);
//
//		}
//
//		//printf("%d", conut);
//	}
//	return 0;
//}
//int main()
//{
//	int a = 0;
//	for (a = 0; a <= 20; a++)
//	{
//		int b = a;
//		while (b-2+1>1)
//		{
//
//		}
//
//	}
//	printf("%d", );
//	return 0;
//}
//struct xinx
//{
//	char xm[20];
//	int sg;
//	int sfz;
//	char xb;
//};
//int main()
//{
//	struct xinx xinx1;
//	
//	xinx1.sg = 183;
//	xinx1.sfz = 123456789;
//	xinx1.xb = "��";
//	printf("%d\", xinx1.sfz);
//	return 0;
//}
//int main()
//{
//	char a = -128;
//	printf("%u", a);
//	return 0;
//}
//int main()
//{
//	int a = -20;
//	unsigned int b = 10;
//	printf("%d", a + b);
//	return 0;
////}
//int main()
//{
//	int a9
//	return 0;
//}

//
//int main()
//{
//	int i = 0;
//	int y = 0;
//	int r = 0;
//	int t = 0;
//	scanf("%d", &i);
//	scanf("%d", &y);
//	scanf("%d", &r);
//	if (i % 4 == 0 && i % 100 != 0 || i % 400 == 0)//����
//	{
//		if (y == 1)
//		{
//			printf("�����ǵ�>:%d", r);
//		}	
//	    if(y == 3, y==5, y==7)
//		{			
//			t = y * 31 + r;
//			printf("�����ǵ�>:%d", t);
//		}
//		
//		else if(y = 8, 10, 12)
//		{
//			t = y * 31 + r;
//			printf("�����ǵ�>:%d", t);
//		}
//	}
//	
//	return 0;
//	
////}
//#include <stdio.h>
//
//int main() {
//    int i = 0;
//    int y = 0;
//    int r = 0;
//    int t = 0;
//    scanf("%d", &i);
//    scanf("%d", &y);
//    scanf("%d", &r);
//    if (i % 4 == 0 && i % 100 != 0 || i % 400 == 0) { // ����
//        if (y == 1) {
//            printf("�����ǵ� %d", r);
//        }
//        else if (y == 3 || y == 5 || y == 7) {
//            t = y * 31 + r;
//            printf("�����ǵ� %d", t);
//        }
//        else if (y == 8 || y == 10 || y == 12) {
//            t = y * 31 + r;
//            printf("�����ǵ� %d", t);
//        }
//    }
//    return 0;
//}
#include <stdio.h>

int main() {
    int year = 0;
    int month = 0;
    int day = 0;
    int dayOfYear = 0;

    printf("���������: ");
    scanf("%d", &year);
    printf("�������·�: ");
    scanf("%d", &month);
    printf("����������: ");
    scanf("%d", &day);

    // �ж��Ƿ�Ϊ����
    int isLeapYear = (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);

    // �ж�ÿ���·ݵ�����
    int daysInMonth[] = { 31, 28 + isLeapYear, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };

    // ����ڼ���
    for (int i = 0; i < month - 1; i++) {
        dayOfYear += daysInMonth[i];
    }
    dayOfYear += day;

    printf("�����ǵ�%d��\n", dayOfYear);

    return 0;
}
