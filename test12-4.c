 #define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
//
//int main() {
//    
//    int* prt = (int*)malloc(10*sizeof(int));
//    for (int i = 0; i < 10; i++)
//    {
//        prt[i] = i + 1;
//        printf("%d ", prt[i]);
//    }
//    free(prt);
//    prt = NULL;
//    return 0;
//}

//int main() {
//
//    int* prt = (int*)malloc(10*sizeof(int));
//    for (int i = 0; i < 20; i++)
//    {
//        prt[i] = i * i;
//        printf("%d ", prt[i]);
//    }
//    free(prt);
//    prt = NULL;
//    return 0;
//}
//
//int main(void) {
//    int* p =(int*) malloc(4 * sizeof(int)); // 分配能容纳4个int类型的数组的内存空间
//
//    if (p) {
//        for (int i = 0; i < 4; ++i) {
//            p[i] = i * i; // 初始化数组元素
//            printf("p[%d] = %d\n", i, p[i]); // 打印数组元素
//        }
//    }
//    free(p); // 释放内存空间
//    return 0;
//}

#include <stdio.h>
//
//// 定义一个结构体类型
//typedef struct Person {
//    char name[20];
//    int age;
//    float height;
//}Person;
//
//int main() {
//    // 声明一个结构体变量
//     Person person1;
//
//    // 使用结构体变量的成员
//    strcpy(person1.name, "张三");
//    person1.age = 25;
//    person1.height = 1.75;
//
//    // 输出结构体变量的成员
//    printf("姓名：%s\n", person1.name);
//    printf("年龄：%d\n", person1.age);
//    printf("身高：%.2f\n", person1.height);
//
//    return 0;
//}

//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int a = 0;
//	int b = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (int i=0;i<10;i++)
//	{
//		printf("在第几位插入数字>:");
//		scanf("%d",&i);
//		
//		{
//			arr[i] = arr[i + 1];
//		}
//		printf("\n");
//		printf("输入你想插入的数字>:");
//		scanf("%d", &a);
//	}
//	for()
//	return 0;
//}


//int main() {
//    int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//    int sz = sizeof(arr) / sizeof(arr[0]);
//    int pos, newNum;
//
//    printf("在第几位插入数字>: ");
//    scanf("%d", &pos);
//
//    if (pos < 0 || pos > sz) {
//        printf("错误：插入位置超出数组范围\n");
//        return 1;
//    }
//
//    printf("输入你想插入的数字>: ");
//    scanf("%d", &newNum);
//
//    for (int i = sz - 1; i >= pos; i--) {
//        arr[i + 1] = arr[i];
//    }
//
//    arr[pos] = newNum;
//
//    printf("插入后的数组: ");
//    for (int i = 0; i < sz + 1; i++) {
//        printf("%d ", arr[i]);
//    }
//
//    return 0;
//}


int main() {
    int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
    int sz = sizeof(arr) / sizeof(arr[0]);
    int pos, newNum;

    printf("在第几位插入数字>: ");
    scanf("%d", &pos);

    if (pos < 0 || pos > sz) {
        printf("错误：插入位置超出数组范围\n");
        return 1;
    }

    printf("输入你想插入的数字>: ");
    scanf("%d", &newNum);

    for (int i = sz - 1; i > pos; i--) {
        arr[i] = arr[i - 1];
    }

    arr[pos] = newNum;

    printf("插入后的数组: ");
    for (int i = 0; i < sz + 1; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}