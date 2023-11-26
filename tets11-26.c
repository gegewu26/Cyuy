#define _CRT_SECURE_NO_WARNINGS
#include<string.h>
#include<stdio.h>
#include<stdlib.h>
#include <string.h>

//
//int main()
//{
//	int arr1[] = { 1,2,3,4,5,6,7 };
//	int arr2[10] = { 0 };
//	memcpy(arr2, arr1,28);
//	return 0;
//}

//
//
//int main() {
//	const char haystack[20] = "Tutor@ials,Point";
//	const char needle[10] = "@ ,";
//	char* ret;
//
//	ret = strtok(haystack, needle);
//	printf("%s\n", ret);
//
//	ret = strtok(NULL, needle);
//	printf("%s\n", ret);
//
//
//	return 0;
//}
//
//int main()
//{
//	int num = 0;
//	for (int i = 1; i <4;i++ )
//	{
//		int x = 1;
//	  for (int j=1;j<=i;j++)
//	  {
//		  x *= j;
//	  }
//	  num += x;
//    }
//	printf("%d", num);
//return 0;
//}
//void han(int* b)
//{
//	*b = 10;
//	
//}
//int main()
//{
//	int a = 5;
//	int* b = &a;
//	han(b);
//	printf("%d", *b);
//	return 0;
//}

//void modifyValue(int* ptr) {
//    *ptr = 10; // 修改副本指针所指向的值
//}
//
//int main() {
//    int num = 5;
//    int* ptr = &num; // 创建指向原始变量的副本指针
//    modifyValue(ptr); // 传递副本指针
//    // num 的值仍然是 5，未被修改
//    return 0;
//}


//void* my_memmove(void* arr1,  const void* arr2,size_t num)
//{
//	
//		if (arr1 < arr2)
//		{
//			while (num--)
//			{
//				*(char*)arr1 = *(char*)arr2;
//				arr1 = (char*)arr1 + 1;
//				arr2 = (char*)arr2 + 1;
//			}
//		}
//		else
//		{
//			while (num--)
//			{
//				*((char*)arr1 + num) = *((char*)arr2 + num);
//			}
//		}
//	void* ret = arr1;
//	return ret;
//}
//int main()
//{
//	int arr1[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int i = 0;
//	 my_memmove(arr1, arr1+2, 20);
//	
//	for ( i = 0; i < 10; i++)
//	{
//		printf("%d ", arr1[i]);
//	}
//	return 0;
//}



int main() {
    int i = 0;
    float a = 0;
    scanf("%f", &a);
    float num = a;
    for (i = 0; i < 10; i++) {
        a /= 2;
        num += a;
    }
    printf("%f", num);
    return 0;
}


//#include <stdio.h>
//
//int main() {
//    double height = 100.0; // 初始高度
//    double distance = 0.0; // 总距离
//
//    for (int i = 0; i < 10; i++) {
//        distance += height; // 加上当前反弹的高度
//        height /= 2; // 更新下一次反弹的高度
//    }
//
//    distance += height; // 加上最后一次落地的高度
//
//    printf("球从100米高度落下，反弹10次后的总距离为：%.2f米\n", distance);
//
//    return 0;
//}