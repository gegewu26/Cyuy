#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>
//void jiem()
//{
//	printf("####################\n");
//	printf("###1.加法  2.减法###\n");
//	printf("###3.乘法  0.退出###\n");
//	printf("####################\n");
//}
//int jia(int b,int c)
//{
//	return b + c;
//	
//}
//int jian(int b, int c)//注意传进参数的类型
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
//	int (*hans[4])(int, int) = { 0, jia, jian, cheng };//注意函数指针指向函数时在指针后说明函数参数的类型
//	do{
//		jiem();
//	printf("选择>:");
//	scanf("%d", &a);//scanf中不要换行
//	if (a == 0)
//	{
//		printf("退出游戏");
//		break;
//	}
//	else if(a>=1 && a<=3)
//	{
//		printf("输入两个数\n");
//		scanf("%d %d", &b, &c);
//		num = hans[a](b, c);
//		printf("结果等于>%d\n",num);
//	}
//	else
//	{
//		printf("选择错误\n");
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
	for (a = 101; a <= 200; a++)//需要判断的数
	{
		 c = 1;

		for (b = 2; b <=sqrt(a); b++)//用来检测的数
		{
			if (a % b == 0)//在某一个数使条件1为假时，就执行条件2，所以会打印出不是素数的数，把条件2放外部循环即可；
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
//    int is_prime = 1; // 添加一个变量来判断是否为质数
//
//    for (a = 101; a <= 200; a++) {
//        is_prime = 1; // 每次循环开始时重置is_prime为1
//
//        for (b = 2; b <= sqrt(a); b++) {
//            if (a % b == 0) {
//                is_prime = 0; // 如果能整除，则不是质数
//                break;
//            }
//        }
//
//        if (is_prime == 1) {
//            printf("%d ", a); // 在内部循环结束后判断是否为质数，如果是则输出
//        }
//    }
//
//    return 0;
//}