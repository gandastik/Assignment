#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
/*
63010035
replace the told character to another with a request
for Profund weekly assignment at week 13 (6 Nov. 2020)
*/
void swapTo(char*, char);

int main()
{
    char str[1000];
    char what;
    char to;
    char request[1000];
    scanf("%[^\n] %c %c %s", str, &what, &to, request);
    char* ptr = str;
    char* ptrR = request;
    while(*ptr != '\0')
    {
        if(*ptr == what)
        {
            if(*ptrR == 'Y')
            {
                swapTo(ptr, to);
            }
            ptrR++;
        }
        ptr++;
    }
    printf("%s", str);
    return 0;
}

void swapTo(char* a, char b)
{
    *a = b;
}
