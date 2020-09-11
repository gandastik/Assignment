#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
    int n, m, num;
    scanf("%d%d%d", &n, &m, &num);
    int row, collumn;
    int arr[100][100];
    for (int i = 0; i < num; i++) {
        scanf("%d %d", &row, &collumn);
        arr[row][collumn] = 1;
    }
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            if (arr[i][j] == 1) {
                printf("x");
            }
            else printf("_");
        }
        printf("\n");
    }
    return 0;
}