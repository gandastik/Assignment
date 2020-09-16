#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main() {
    int n, m;
    scanf("%d%d", &n, &m);
    int arr[100][100];
    int num[100] = { };
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            scanf("%d", &arr[i][j]);
        }
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            for (int k = 0; k < 10; k++) {
                if (arr[i][j] == k) {
                    num[k] += 1;
                }
            }
        }
    }
    for (int i = 0; i < 10; i++) {
        printf("%d ", i);
        for (int j = 0; j < num[i]; j++) {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}