#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>


int n(int j) 
{
    int a = 10;
    if (j == 1)
    {
        printf("%d\n", a);

    }
    else
    {
        a = n(j - 1) + 2;
        printf("%d\n", a);   
    }
 
    return a;

}

int main() {
    n(5);
    return 0;

}