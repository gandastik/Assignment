#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>

float xMinusAvg(float, float);

int main() {
    int input[2];
    scanf("%d%d", &input[0], &input[1]);
    float count = fabs(input[1] - input[0]) + 1;
    float total = 0;
    float sigmaX = 0;
    double SD;
    if (input[0] < input[1]) {
        for (int i = input[0]; i <= input[1]; i++) {
            printf("%d ", i);
            total += i;
        }
        float avg = total / count;
        printf("\nAverage = %.1f", avg);
        for (float j = input[0]; j <= input[1]; j++) {
            sigmaX += xMinusAvg(j, avg);
        }
        SD = sqrt(sigmaX / (count - 1));
        printf("\nSD = %.2lf", SD);
    }
    else if (input[0] > input[1]) {
        for (int i = input[0]; i >= input[1]; i--) {
            printf("%d ", i);
            total += i;
        }
        float avg = total / count;
        printf("\nAverage = %.1f", avg);
        for (float j = input[0]; j >= input[1]; j--) {
            sigmaX += xMinusAvg(j, avg);
        }
        SD = sqrt(sigmaX / (count - 1));
        printf("\nSD = %.2lf", SD);
    }
    return 0;
}
//function that returns (x-avg)^2
float xMinusAvg(float x, float avg) {
    return pow((x - avg), 2.0);
}