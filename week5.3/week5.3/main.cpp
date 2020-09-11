#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main() {
    int n, m;
    scanf("%d%d", &n, &m);
    int arr[100][100];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            scanf("%d", &arr[i][j]);
        }
    }
    for (int i = m - 1; i >= 0; i--) {
        for (int j = 0; j < n; j++) {
            printf("%d ", arr[j][i]);
        }
        printf("\n");
    }
    return 0;
}