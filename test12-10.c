#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<errno.h>
int main()
{
	FILE* ps = fopen("text.txt", "r");
	if (ps == NULL)
	{
		printf("%s", strerror(errno));
		return 1;
	}
	int ch = fgetc(ps);
	printf("%c", ch);

	fclose(ps);
	ps = NULL;
	return 0;
}