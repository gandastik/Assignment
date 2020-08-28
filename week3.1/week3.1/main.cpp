#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>

int n, sweet[10], bitter[10];
int best = 10000000;
void rec(int i, int sweetTol, int bitterTol);

int main(){
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf("%d%d", &sweet[i], &bitter[i]);
	}

	rec(0, 1, 0);
	printf("%d", best);

	return 0;
}

void rec(int i, int sweetTol, int bitterTol) {
	if (i == n) {
		if (bitterTol > 0 && fabs(sweetTol - bitterTol) < best) {
			best = fabs(sweetTol - bitterTol);
		}
	}
	else {
		rec(i + 1, sweetTol, bitterTol);
		rec(i + 1, sweet[i] * sweetTol, bitter[i] + bitterTol);
	}
}