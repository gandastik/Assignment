#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    int m, n;
    scanf("%d ", &m); //input of dimension of matrix
    scanf("%d", &n);
    int matrix1[100][100];
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &matrix1[i][j]);
        }
    }
    int matrix2[100][100];
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &matrix2[i][j]);
        }
    }
    int matrix3[100][100];                         //answer matrix
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            matrix3[i][j] = matrix1[i][j] + matrix2[i][j];
        }
    }
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d ", matrix3[i][j]);
        }
        printf("\n");
    }
    return 0;
}