#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <string.h>
#include <assert.h>

//int main()
//{
//	char str[] = "fcb";
//	char keys[] = "1234567890";
//	int i;
//	i = strcspn(str, keys);
//	printf("The first number in str is at position %d.\n", i + 1);
//	return 0;
//}

//char* my_strstr(const char* arr1, const char* arr2)
//{
//	assert(arr1 && arr2);
//	char* s1 = arr1;
//	char* s2 = arr2;
//	char* p = arr1;
//	while (*p)
//	{
//		s1 = p;
//		s2 = arr2;
//		while (*s1 != '\0' && *s2 != '\0' && *s1 == *s2)
//		{
//			s1++;
//			s2++;
//		}
//		if (*s2 == '\0')
//		{
//			return p;
//		}
//		p++;
//	}
//}
//int main()
//{
//	char arr1[] = "bcdef";
//	char arr2[] = "bc";
//	int* ret = my_strstr(arr1, arr2);
//	printf("%s", ret);
//	return 0;
//}

//
//int main() {
//    char str[] = "Hello,World!This,is,a,test";
//    char* token;
//
//    // 使用逗号和空格作为分隔符
//    token = strtok(str, ", ");
//
//    while (token != NULL) {
//        printf("%s\n", token);
//        token = strtok(NULL, ", ");
//    }
//
//    return 0;
//}

//
//int main() {
//    FILE* file = fopen("nonexistent_file.txt", "r");
//    if (file == NULL) {
//        int error_code = errno;
//        char* error_message = strerror(error_code);
//        printf("Failed to open file: %s\n", error_message);
//    }
//    return 0;
//}


//
//void modifyPointer(int* ptr) {
//    *ptr = 10;  // 修改指针所指向的对象的值
//    ptr = NULL;  // 修改指针本身的值，但不会影响外部的指针
//}
//
//void modifyPointerByPointer(int** ptrPtr) {
//    *ptrPtr = 20;  // 通过指向指针的指针修改指针本身的值
//}
//
//int main() {
//    int number = 5;
//    int* ptr = &number;
//
//    modifyPointer(ptr);
//    // 此时，number的值被修改为10，但是ptr仍然指向number
//
//    modifyPointerByPointer(&ptr);
//    // 此时，ptr被修改为NULL
//
//    printf("number的值：%d\n", number);
//    printf("ptr的值：%d\n", ptr);
//
//    return 0;
//}
//void* my_memcpy(const void* arr1, void* arr2, size_t num)
//{
//	
//	while (num--)
//	{
//		*(char*)arr2 = *(char*)arr1;
//		arr1=(char*) arr1+1;
//		arr2=(char*) arr2+1;
//	}
//	void* ret = arr2;
//	return ret;
//}
//
//
//int main()
//{
//	int arr1[] = { 1,2,3,4,5,6,7 };
//	int arr2[10] = { 0 };
//	my_memcpy(arr1, arr2, 28);
//
//	return 0;
//}


//int main()
//{
//	
//	int num = 0;
//
//	for (int a = 1;a<4;a++)
//	{
//		int ret = 1;
//		for (int b = 1; b <= a; b++)
//		{
//			ret *= b;
//
//	    }
//		num += ret;
//	}
//	printf("%d", num);
//		return 0;
//}


//int digui(int a)
//{	
//	if (a == 0 || a == 1)
//	{
//		return 1;
//	}
//	else
//		return  digui(a - 1);
//}
//
//int main()
//{
//	int a = 5;
//	int ret = digui(a);
//	printf("%d", ret);
//	return 0;
//}