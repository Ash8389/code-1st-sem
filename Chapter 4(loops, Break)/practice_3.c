#include <stdio.h>

int main()
{
    int i = 0, sum = 0;

    while (i <= 10)
    {
        sum = +i;
        i++;
    }
    printf("Sum of first ten natural no. is: %d\n", sum);

    return 0;
}