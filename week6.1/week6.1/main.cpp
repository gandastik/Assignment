#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int arr[600];
    int num[600];
    for (int i = 1; i <= n; i++) {
        if (i < 100) {
            arr[i] = i % 10;
            num[i] = i % 10;
        }
        else {
            arr[i] = i % 100;
            num[i] = i % 100;
        }
    }
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            printf("%d ", arr[j]);
        }

        for (int k = 1; k <= 100; k++) {
            if (k == 1) {
                arr[k] = num[n];
            }
            else {
                arr[k] = num[k - 1];
            }
        }

        for (int k = 1; k <= 100; k++) {
            num[k] = arr[k];
        }
        printf("\n");
    }

    return 0;
}