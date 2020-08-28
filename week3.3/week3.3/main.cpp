#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include<string.h>
//Eratosthenes (find Prime number algorithm)
int main() {
    int n, k;
    scanf("%d %d", &n, &k);
    int num[1000];
    memset(num, 0, n * sizeof(num[0]));
    num[0] = 1;
    num[1] = 1;
    int count = 1;
    for (int i = 2; i <= n; i++) {
        if (num[i] == 0) {
            if (count == k) {
                printf("%d", i);
            }
            count++;
        }
        if (num[i] != 1) {
            for (int j = i * i; j <= n; j += i) {
                if (num[j] != 1) {
                    num[j] = 1;
                    if (count == k)
                        printf("%d", j);
                    count++;
                }
            }
        }
    }
    return 0;
}