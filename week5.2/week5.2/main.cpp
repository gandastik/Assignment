#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int arr[10];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    int index = n - 1;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            printf("%d", arr[index]);
        }
        index--;
        printf("\n");
    }
    return 0;
}