#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main() {
    int arr[100];
    for (int i = 0; i < 100; i++) {
        scanf("%d", &arr[i]);
        if (arr[i] <= 0) break;
    }
    for (int i = 0; i < 100; i++) {
        if (arr[i] > 0) {
            for (int j = 0; j < arr[i]; j++) {
                printf("*");
            }printf("\n");
        }
        else break;
    }

    return 0;
}