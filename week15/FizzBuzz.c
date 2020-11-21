#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
/*
63010035
for Profund weekly assignment at week 14 (20 Nov. 2020)
*/
void fizzBuzz(int a)
{
    if(a % 3 == 0 && a % 9 != 0)
    {
        printf("Fizz\n");
    }
    else if(a % 3 != 0 && a % 9 == 0)
    {
        printf("Buzz\n");
    }
    else if(a % 3 == 0 && a % 9 == 0)
    {
        printf("FizzBuzz\n");
    }
    else
    {
        printf("%d\n", a);
    }
}

int main()
{
    int n;
    scanf("%d", &n);
    int arr[n+1];
    for(int i=0;i<=n;i++)
    {
        arr[i] = i;
    }
    int* ptr;
    int* lastPtr = &arr[n];
    ptr = &arr[1];
    while(ptr != lastPtr+1)
    {
        fizzBuzz(*ptr);
        ptr++;
    }
    return 0;
}   