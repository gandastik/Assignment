#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//sorting array of numbers in ascending order
int main() {
    int n;
    scanf("%d", &n);
    int num[1000];
    for (int i = 0; i < n; i++) {
        scanf("%d", &num[i]);
    }
    int temp;
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (num[i] > num[j]) {
                temp = num[i];
                num[i] = num[j];
                num[j] = temp;
            }
        }
    }
    for (int k = 0; k < n; k++) {
        printf("%d\n", num[k]);
    }
    return 0;
}