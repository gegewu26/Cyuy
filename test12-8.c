#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

#include <stdio.h>

int josephus(int n, int k) {
    if (n == 1) {
        return 1;
    }
    else {
        return (josephus(n - 1, k) + k - 1) % n + 1;
    }
}

int main() {
    int n = 2;  // ����
    int k = 3;  // ������k���˾��Ƴ�
    int survivor = josephus(n, k);
    printf("����Ҵ��ߵ�λ���ǣ�%d\n", survivor);
    return 0;
}