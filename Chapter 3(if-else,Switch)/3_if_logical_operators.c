#include<stdio.h>

int main()
{
    int age;
    int vippass = 0;
    vippass = 1;

    printf("Enter your age\n");
    scanf("%d", &age);

    //if (age <= 70 && age >= 18){
    if ((age <= 70 && age >= 18) || vippass == 1){
    printf("You are above 18 and below 70, you can drive\n");
    }
    else{
        printf("you can't drive");
    }

    return 0;
}