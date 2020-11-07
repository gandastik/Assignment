#include <stdio.h>
//Character Replacement

void swapTo(char*, char);

int main()
{
    char str[1000];
    char what;
    char to;
    scanf("%[^\n] %c %c", str, &what, &to);
    char* ptr;
    int i = 0;
    ptr = str;
    while(*ptr != '\0')
    {
        if(*ptr == what)
        {
            swapTo(ptr, to);
            break;
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
