#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//count how many different modolu of 42 in 10 inputs
int main() {
	int num[10], mod[10];
	int temp;
	for (int i = 0; i < 10; i++) {
		scanf("%d", &num[i]);
	}
	for (int j = 0; j < 10; j++) {
		mod[j] = num[j] % 42;
	}
	//sort in ascending order
	for (int i = 0; i < 10; i++) {
		for (int j = i + 1; j < 10; j++) {
			if (mod[i] > mod[j]) {
				temp = mod[i];
				mod[i] = mod[j];
				mod[j] = temp;
			}
		}
	}
	int count = 10;
	for (int k = 0; k < 10; k++) {
		for (int t = k+1; t < 10; t++) {
			if (mod[k] == mod[t]) {
				count--;
				break;
			}
		}
	}
	printf("%d", count);
	return 0;
}