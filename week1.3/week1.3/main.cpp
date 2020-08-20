#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>

void swap(int &x, int &y) {
	int temp;
	temp = x;
	x = y;
	y = temp;
}

int main() {
	char swp[51];
	scanf("%s", swp);
	int glass[3] = { 0, 1, 2 };
	for (int i = 0; i < strlen(swp); i++) {
		if (swp[i] == 'A') {
			swap(glass[0], glass[1]);
		}
		else if (swp[i] == 'B') {
			swap(glass[1], glass[2]);
		}
		else if (swp[i] == 'C') {
			swap(glass[2], glass[0]);
		}
	}
	for (int i = 0; i < 3; i++) {
		if (glass[i] == 0) {
			printf("%d", i+1);
		}
	}
	return 0;
}
