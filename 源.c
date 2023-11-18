#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include<math.h>

//int isEven(int num) {
//    if (num % 2 == 0) {
//        return 1; // 是偶数，返回1
//    }
//    else {
//        return 0; // 不是偶数，返回0
//    }
//}
//
//int main() {
//    int num = 10;
//    if (isEven(num)) {
//        printf("%d is an even number.\n", num);
//    }
//    else {
//        printf("%d is not an even number.\n", num);
//    }
//    return 0;
////}
//int main()
//{
//	/*int arr[] = { 1,2,3,4,5,6,7 };*/
//	char arr[] = "abcd";
//	return 0;
//}
//void test1()
//{
//
//}
//void test()
//{
//	test1();
//}
//int main()
//{
//	test();{
//////}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	for(a=0;a<10000;a++)
//	{
//	
//		//a += 100;
//
//		//if ( a%(int)sqrt(a) ==0)
//	//	{
//			
//			//a += 168;
//			if (a%(int)sqrt(a) == 0)
//			{
//			
//				printf("%d\n", a);
//				
//			}
//		//}
//	}	
//	return 0;
//}
//a % (int)sqrt(a += 100) == 0;
//int main()
//{
//	int i = 0;
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	for (i = 0; i <= 12; i++)
//	{
//		arr[i] = 0;
//		printf("hehe\n");
//	
//	}
//	return 0;
//}
//
//int main()
//{
//	const int a = 10;
//	int const* p = &a;
//	 
//	 *p= 20;
//	 printf("%d", a);
//
//	return 0;
////}
//int main()
//{
//	
//		int a = 0;
//		
//		scanf("%d", &a);
//	float b = sqrt(a);
//		int c = (int)sqrt(a);
//		printf("%d\n", b);
//		printf("%d", c);
//	return 0;
//}

//
//int main() {
//    int a = 0;
//
//    for (a = 0; a < 100000; a++) {
//        int b = a + 100;
//
//        if (sqrt(b) == (int)sqrt(b)) {
//            int c = b + 168;
//            if (sqrt(c) == (int)sqrt(c)) {
//                printf("%d\n", c-268);
//            }
//        }
//    }
//
//    return 0;
//ar* daoxu(char* arr, int sz)
//{
//	
//	char b = arr[0];
//	char c = arr[sz - 1];
//	if ()
//}
//
//int main()
//{
//	char arr[10001];
//	scanf("%d", arr);
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int a = daoxu(arr, sz);
//	printf("%s", a);
//	return 0;
//}*/ch/*

int main()
{
	int a = 0;
	int b = 0;
	int c = 0;
	int num = 0;
	scanf("%d", &b);
	for (a = 0; a < 6; a++)
	{
		c = ((c * 10) + b);
		num += c;
	}
	printf("%d", num);
	return 0;
}