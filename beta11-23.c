#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
//int bj(const void* e1,const void* e2)
//{
//	return *((int*)e2)-*((int*)e1);
//}
//
//
//int main()
//{
//	int a = 0;
//	int arr[] = { 1,2,3,4,5,10,7,8,9 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	qsort(arr, sz, sizeof(arr[0]), bj);
//	for (a=0;a<sz;a++)
//	{
//		
//		printf("%d", arr[a]);
//	}
//	
//	return 0;
//}
//
//
//int main()
//{
//	char x[] = "def";
//	char* a = &x;
//	printf("%d\n", strlen(a));
//	return 0;
//}

//
//int main()
//{
//	int arr[3][4] = { 0 };
//	printf("%d", sizeof(*(arr+ 1)));
//	return 0;
//}


//int main()
//{
//	int a[3][4] = { 0 };
////	printf("%d\n", sizeof(a));//48
////	printf("%d\n", sizeof(a[0][0]));//4
////	printf("%d\n", sizeof(a[0]));//16
////	//a[0]是第一行这个一维数组的数组名，单独放在sizeof内部，a[0]表示第一个整个这个一维数组
////	//sizeof(a[0])计算的就是第一行的大小
//	printf("%d\n", sizeof(a[0] + 1));//4/8
////	//a[0]并没有单独放在sizeof内部，也没取地址，a[0]就表示首元素的地址
////	//就是第一行这个一维数组的第一个元素的地址，a[0] + 1就是第一行第二个元素的地址
////	printf("%d\n", sizeof(*(a[0] + 1)));
////	//a[0] + 1就是第一行第二个元素的地址
////	//*(a[0] + 1))就是第一行第二个元素
////	printf("%d\n", sizeof(a + 1));//4/8
////	//a虽然是二维数组的地址，但是并没有单独放在sizeof内部，也没取地址
////	//a表示首元素的地址，二维数组的首元素是它的第一行，a就是第一行的地址
////	//a+1就是跳过第一行，表示第二行的地址
////	printf("%d\n", sizeof(*(a + 1)));//16
////	//*(a + 1)是对第二行地址的解引用，拿到的是第二行
////	//*(a+1)-->a[1]
////	//sizeof(*(a+1))-->sizeof(a[1])
////	printf("%d\n", sizeof(&a[0] + 1));//4/8
////	//&a[0] - 对第一行的数组名取地址，拿出的是第一行的地址
////	//&a[0]+1 - 得到的是第二行的地址
////	printf("%d\n", sizeof(*(&a[0] + 1)));//16
////	printf("%d\n", sizeof(*a));//16
////	//a表示首元素的地址，就是第一行的地址
////	//*a就是对第一行地址的解引用，拿到的就是第一行
////	printf("%d\n", sizeof(a[3]));//16
////	printf("%d\n", sizeof(a[0]));//16
////
////	//int a = 10;
////	//sizeof(int);
////	//sizeof(a);
////
////
//	return 0;
//}

//
//int main()
//{
//	int a = -4;
//	int b = 1;
//	printf("%p\n", a);
//	printf("%p", b);
//	return 0;
//}
//
//int main()
//{
//	int i = 0;
//	scanf("%d", &i);
//
//		char j=(i >= 90) ? 'A' : ((i >= 60) ? 'B' : 'C');
//	printf("%c", j);
//	
//	return 0;
//}


int main()
{
	int i = 0;
	int j = 0;
	int a;
	int num = 0;
	scanf("%d %d", &i, &j);
	num = i * j;
	a = i % j;
	while(i%j!=0)
	{
		i = j;
		j = a;
		a = i % j;
	}
	printf("最大公约数>%d最小公倍数>%d", j, num / j);
	return 0;
}