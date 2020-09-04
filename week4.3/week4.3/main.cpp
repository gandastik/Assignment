#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>

int main() {
    char arr[100];
    scanf("%[^\n]", arr);
    for (int i = 0; i < strlen(arr); i++) {
        printf("%c", arr[i]);
        if (strchr("aeiou", arr[i]) != NULL) //if aeiou found in arr skipp two character
            i += 2;
    }
    return 0;
}