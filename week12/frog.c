#include<stdio.h>

int main() 
{
    int x, y, total;
    total = 0;
    scanf("%d %d", &x, &y);
    if((y % x) != 0)
    {
        total += 1;
    }
    total += y / x;
    printf("%d", total);

    return 0;
}