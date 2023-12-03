#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

//int main()
//{
//	char arr[] = "abcdef";
//	int a = 0;
//	int i = 0;
//	int b = sizeof(arr) / sizeof(arr[0]);
//	printf("输入需要删除的字符>;");
//	char c = getchar();
//	for (a = 0; a < b; a++)
//	{
//		if (arr[a] == c)
//		{
//			for (i = a; i < b - 1; i++) {
//				arr[i] = arr[i + 1];
//			}		
//				b--;
//				a--;
//		}
//		
//	}
//	for (i = 0; i < b; i++) 
//	{
//       putchar(arr[i]);
//    }
//		
//	return 0;
//}

//#define max 3
//#define min 3
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int num = 0;
//	int arr[max][min] = { 1,2,3,4,5,6,7,8,9 };
//	for (int i = 0; i < max; i++)
//	{
//		for (int j = 0; j < min; j++)
//		{
//			if (i == j)
//			{
//				a += arr[i][j];
//			}
//			if (i + j == max - 1)
//			{
//				b += arr[i][j];
//			}
//		}
//	}
//	num = a + b;
//	printf("%d", num);
//	return 0;
//}
//
//union un
//{
//	char a;
//	int b;
//	double c;
//}un;
//int main()
//{
//	printf("%d", sizeof(un));
//	return 0;
//}

int main()
{
	int a = 268435456;
	int b = (char)a;
	printf("%d", b);
	return 0;
}