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
//	xinx1.xb = "男";
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
//	if (i % 4 == 0 && i % 100 != 0 || i % 400 == 0)//闰年
//	{
//		if (y == 1)
//		{
//			printf("今天是第>:%d", r);
//		}	
//	    if(y == 3, y==5, y==7)
//		{			
//			t = y * 31 + r;
//			printf("今天是第>:%d", t);
//		}
//		
//		else if(y = 8, 10, 12)
//		{
//			t = y * 31 + r;
//			printf("今天是第>:%d", t);
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
//    if (i % 4 == 0 && i % 100 != 0 || i % 400 == 0) { // 闰年
//        if (y == 1) {
//            printf("今天是第 %d", r);
//        }
//        else if (y == 3 || y == 5 || y == 7) {
//            t = y * 31 + r;
//            printf("今天是第 %d", t);
//        }
//        else if (y == 8 || y == 10 || y == 12) {
//            t = y * 31 + r;
//            printf("今天是第 %d", t);
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

    printf("请输入年份: ");
    scanf("%d", &year);
    printf("请输入月份: ");
    scanf("%d", &month);
    printf("请输入日期: ");
    scanf("%d", &day);

    // 判断是否为闰年
    int isLeapYear = (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);

    // 判断每个月份的天数
    int daysInMonth[] = { 31, 28 + isLeapYear, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };

    // 计算第几天
    for (int i = 0; i < month - 1; i++) {
        dayOfYear += daysInMonth[i];
    }
    dayOfYear += day;

    printf("今天是第%d天\n", dayOfYear);

    return 0;
}
