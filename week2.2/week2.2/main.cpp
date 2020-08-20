#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main() {
	int num[9];
	int total = 0;
	for (int i = 0; i < 9; i++) {
		scanf("%d", &num[i]);
		total += num[i];
	}
	int excess = total - 100;
	for (int i = 0; i < 9; i++) {
		for (int j = i + 1; j < 9; j++) {
			if (num[i] + num[j] == excess) {
				num[i] = 0;
				num[j] = 0;
			}
		}
	}
	for (int i = 0; i < 9; i++) {
		if (num[i] != 0) {
			printf("%d\n", num[i]);
		}
	}
	return 0;
}