#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//int main()
//{
//
//	int n = 0;
//	int y = 0;
//	int r = 0;
//
//	printf("请你输入年份：");
//	scanf("%d", &n);	
//	printf("请你输入月份：");
//	scanf("%d", &y);
//	printf("请你输入天数：");
//	scanf("%d", &r);
//	
//	int t = 0;	
//	int rn = (n % 4 == 0 && n % 100 != 0) ||( n % 400 == 0);
//	int yf[] = { 31,28+rn,31,30,31,30,31,31,30,31,30,31 };
//	int x = 0;
//	for (x = 0; x < y - 1; x++)
//	{
//		t += yf[x];
//
//	}
//	t += r;
//	printf("是今年的第：%d天", t);
//	return 0;
////}
//int main()
//{
//	char b = "abcdef";
//	printf("%s", b);
//	return 0;
// }
////
//#include <stdio.h>

void print2DArray(int(*ptr)[3], int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d ", *(*(ptr + i) + j));//ptr[i][j]也可以
        }
        printf("\n");
    }
}

int main() {
    int arr[2][3] = { {1, 2, 3}, {4, 5, 6} };
    int(*ptr)[3] = &arr;

    printf("通过数组指针打印二维数组：\n");
    print2DArray(ptr, 2, 3);

    return 0;
}

//
//int main()
//{
//	int ar[] = { 1,2,3};
//	int arr[] = { 1,2,3,4};
//	int(*ptr)[3] = &arr;
//	int(*ptr)[3] = arr;
//
//
//	printf("%d\n", (*ptr)[2]);
//	printf("%d", *(*ptr + 2));
//
//	return 0;
//}
