#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main() {
    int num[4];
    scanf("%d %d %d %d", &num[0], &num[1], &num[2], &num[3]);
    int temp;
    for (int i = 0; i < 4; i++) {
        for (int j = i + 1; j < 4; j++) {
            if (num[i] < num[j]) {
                temp = num[i];
                num[i] = num[j];
                num[j] = temp;
            }
        }
    }
    int diff = num[0] - num[1];
    int diff2 = num[2] - num[3];
    int width = num[0] - diff;
    int height = num[2] - diff2;
    printf("%d", width * height);
    return 0;
}