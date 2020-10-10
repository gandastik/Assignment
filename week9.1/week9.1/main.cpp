#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

struct info {
    char id[1000];
    int score[100];
    int total;
}student[1000];

void swap(int* a, int* b) {
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int n, m;
    scanf("%d%d", &n, &m);
    for (int i = 1; i <= n; i++) {
        scanf("%s", student[i].id);
        for (int j = 0; j < m; j++) {
            scanf("%d", &student[i].score[j]);
        }
    }
    for (int i = 1; i <= n; i++) {
        for (int j = 0; j < m; j++) {
            for (int k = j + 1; k < m; k++) {
                if (student[i].score[j] > student[i].score[k]) {
                    swap(&student[i].score[j], &student[i].score[k]);
                }
            }
        }
    }
    int max = 0;
    for (int i = 1; i <= n; i++) {
        student[i].total = 0;
        for (int j = 1; j < m; j++) {
            student[i].total += student[i].score[j];
        }
        if (student[i].total > max) max = student[i].total;
    }
    printf("%d\n", max);
    for (int i = 1; i <= n; i++) {
        if (student[i].total == max) {
            printf("%s\n", student[i].id);
        }
    }
    return 0;
}