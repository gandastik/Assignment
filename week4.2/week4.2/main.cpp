#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int max(int, int);

int main() {
    int score[5][4];
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 4; j++) {
            scanf("%d", &score[i][j]);
        }
    }
    int contestant[5] = { 0, 0, 0, 0, 0 };
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 4; j++) {
            contestant[i] += score[i][j];
        }
    }
    int winner = max(contestant[4], max(max(contestant[2], contestant[3]), max(contestant[0], contestant[1])));
    for (int i = 0; i < 5; i++) {
        if (contestant[i] == winner) {
            printf("%d %d", i + 1, winner);
        }
    }
    return 0;
}

int max(int a, int b)
{
    if (a > b) {
        return a;
    }
    else return b;
}