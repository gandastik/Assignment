#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    for (int i = 1; i < 2 * n; i++) {
        for (int j = 1; j < 2 * n; j++) { //j<=i && i+j <= 10 ||
            if (j <= i && i + j <= n * 2 || j >= i && i + j >= n * 2) {
                printf("*");
            }
            else {
                printf(" ");
            }
            printf(" ");
        }
        printf("\n");
    }
    return 0;
}