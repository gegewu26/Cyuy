#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<assert.h>
//
//
//int main()
//{
//	int i = 0;
//	int a = 0;
//	int num = 0;
//	int j = 0;
//	scanf("%d", &i);	
//	j = i;
//	for (a = 0; a < 4; a++)
//	{
//		i = i*10 + j;
//		num += i;
//	}
//	printf("%d", num+j);
//	return 0;
//}
//

 char* my_strcpy(const char* arr1,const char*arr2)
{
	 assert(arr1);
	while (*arr1 != 0)
	{
		*arr2 = *arr1;

		*arr1++;
		*arr2++;
	}
	return arr2;
}


int main()
{
	char arr1[] = "abcdef";
	char arr2[20] = { 0 };
	my_strcpy(arr1, arr2);
	printf("%s", arr2);
	return 0;
}