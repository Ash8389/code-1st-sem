#include<stdio.h>

int main()
{
    // char str [] = "Ashish";
    char str[] = {'A','s','h','i','s','h','\0'};
    char *ptr = str;
    while(*ptr != '\0')
    {
        printf("%c", *ptr);
        ptr++;
    }

    return 0;
}
