#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main()
{
 int number, guess, nguess = 1;
 srand(time(0));
 number = rand() % 100 + 1;
 //printf("The number is %d\n", number);

do{
    printf("Guess the number between 1 to 100\n");
    scanf("%d", &guess);

    if (number > guess)
    {
        printf("Higher number please!\n");
    }
    else if (number < guess)
    {
        printf("Lower number please!\n");
    }
    else
    {
        printf("You guess in %d attempt\n", nguess);
    }
    nguess++;
}
    while(guess != number);

    return 0;
}