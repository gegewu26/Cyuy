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
////	//a[0]�ǵ�һ�����һά���������������������sizeof�ڲ���a[0]��ʾ��һ���������һά����
////	//sizeof(a[0])����ľ��ǵ�һ�еĴ�С
//	printf("%d\n", sizeof(a[0] + 1));//4/8
////	//a[0]��û�е�������sizeof�ڲ���Ҳûȡ��ַ��a[0]�ͱ�ʾ��Ԫ�صĵ�ַ
////	//���ǵ�һ�����һά����ĵ�һ��Ԫ�صĵ�ַ��a[0] + 1���ǵ�һ�еڶ���Ԫ�صĵ�ַ
////	printf("%d\n", sizeof(*(a[0] + 1)));
////	//a[0] + 1���ǵ�һ�еڶ���Ԫ�صĵ�ַ
////	//*(a[0] + 1))���ǵ�һ�еڶ���Ԫ��
////	printf("%d\n", sizeof(a + 1));//4/8
////	//a��Ȼ�Ƕ�ά����ĵ�ַ�����ǲ�û�е�������sizeof�ڲ���Ҳûȡ��ַ
////	//a��ʾ��Ԫ�صĵ�ַ����ά�������Ԫ�������ĵ�һ�У�a���ǵ�һ�еĵ�ַ
////	//a+1����������һ�У���ʾ�ڶ��еĵ�ַ
////	printf("%d\n", sizeof(*(a + 1)));//16
////	//*(a + 1)�ǶԵڶ��е�ַ�Ľ����ã��õ����ǵڶ���
////	//*(a+1)-->a[1]
////	//sizeof(*(a+1))-->sizeof(a[1])
////	printf("%d\n", sizeof(&a[0] + 1));//4/8
////	//&a[0] - �Ե�һ�е�������ȡ��ַ���ó����ǵ�һ�еĵ�ַ
////	//&a[0]+1 - �õ����ǵڶ��еĵ�ַ
////	printf("%d\n", sizeof(*(&a[0] + 1)));//16
////	printf("%d\n", sizeof(*a));//16
////	//a��ʾ��Ԫ�صĵ�ַ�����ǵ�һ�еĵ�ַ
////	//*a���ǶԵ�һ�е�ַ�Ľ����ã��õ��ľ��ǵ�һ��
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
	printf("���Լ��>%d��С������>%d", j, num / j);
	return 0;
}