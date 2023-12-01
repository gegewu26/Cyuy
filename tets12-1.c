#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
char nixu(char arr)
{
	
}
int main()
{
	int i = 0;
	int j = 1;
	scanf("%d", &i);
	int k = 0;
	while (i / 10)
	{
		k = i % 10;
		j++;
		i /= 10;
		printf("%d", k);
	}
	printf("%d\n", i);
	printf("这个数是%d位数\n",j);
	return 0;
}