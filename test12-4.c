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
//    int* p =(int*) malloc(4 * sizeof(int)); // ����������4��int���͵�������ڴ�ռ�
//
//    if (p) {
//        for (int i = 0; i < 4; ++i) {
//            p[i] = i * i; // ��ʼ������Ԫ��
//            printf("p[%d] = %d\n", i, p[i]); // ��ӡ����Ԫ��
//        }
//    }
//    free(p); // �ͷ��ڴ�ռ�
//    return 0;
//}

#include <stdio.h>
//
//// ����һ���ṹ������
//typedef struct Person {
//    char name[20];
//    int age;
//    float height;
//}Person;
//
//int main() {
//    // ����һ���ṹ�����
//     Person person1;
//
//    // ʹ�ýṹ������ĳ�Ա
//    strcpy(person1.name, "����");
//    person1.age = 25;
//    person1.height = 1.75;
//
//    // ����ṹ������ĳ�Ա
//    printf("������%s\n", person1.name);
//    printf("���䣺%d\n", person1.age);
//    printf("��ߣ�%.2f\n", person1.height);
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
//		printf("�ڵڼ�λ��������>:");
//		scanf("%d",&i);
//		
//		{
//			arr[i] = arr[i + 1];
//		}
//		printf("\n");
//		printf("����������������>:");
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
//    printf("�ڵڼ�λ��������>: ");
//    scanf("%d", &pos);
//
//    if (pos < 0 || pos > sz) {
//        printf("���󣺲���λ�ó������鷶Χ\n");
//        return 1;
//    }
//
//    printf("����������������>: ");
//    scanf("%d", &newNum);
//
//    for (int i = sz - 1; i >= pos; i--) {
//        arr[i + 1] = arr[i];
//    }
//
//    arr[pos] = newNum;
//
//    printf("����������: ");
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

    printf("�ڵڼ�λ��������>: ");
    scanf("%d", &pos);

    if (pos < 0 || pos > sz) {
        printf("���󣺲���λ�ó������鷶Χ\n");
        return 1;
    }

    printf("����������������>: ");
    scanf("%d", &newNum);

    for (int i = sz - 1; i > pos; i--) {
        arr[i] = arr[i - 1];
    }

    arr[pos] = newNum;

    printf("����������: ");
    for (int i = 0; i < sz + 1; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}