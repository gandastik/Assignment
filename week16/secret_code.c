#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
/*
63010035
for Profund weekly assignment at week 16 (27 Nov. 2020)
*/
int stringLength(char* str)
{
    int counter = 0;
    while(*str != '\0')
    {
        counter++;
        str++;
    }
    return counter;
}

int main()
{
    char str[100];
    scanf("%[^\n]", &str);
    char *ptr = str;
    for(int i = 0; i<stringLength(ptr) ;i++)
    {
        if(str[i] == ' ')
        {
            printf("%c", str[i]);
        }
        if(str[i] >= 48 && str[i] <= 57)
        {
            printf("%c", str[i]);
        }
        if(str[i] >= 65 && str[i] <= 90)
        {
            printf("%c", str[i]);
        }
        if(str[i] >= 97 && str[i] <= 122)
        {
            printf("%c", str[i]);
        }
    }

    return 0;
}

