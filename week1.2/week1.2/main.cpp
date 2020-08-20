#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main() {
	int num[4];
    char arr[4];
    scanf("%d %d %d", &num[0], &num[1], &num[2]);
    scanf("%s", arr);
    int temp;
    for (int i = 0; i < 3; i++) {
        for (int j = i + 1; j < 3; j++) {
            if (num[i] > num[j]) {
                temp = num[i];
                num[i] = num[j];
                num[j] = temp;
            }
        }
    }
    int a, b, c;
    a = num[0];
    b = num[1];
    c = num[2];
    for (int i = 0; i < 3; i++) {
        if (arr[i] == 'A') {
            printf("%d ", a);
        }
        else if (arr[i] == 'B') {
            printf("%d ", b);
        }
        else if (arr[i] == 'C') {
            printf("%d ", c);
        }
    }
	return 0;
}