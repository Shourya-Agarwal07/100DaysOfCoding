//Write a program to input an integer and check whether it is even or odd using if–else.
#include <stdio.h>

int main()
{
    int a;
    printf("Enter your number here : ");
    scanf("%d", &a);
    if (a % 2 == 0)
    {
        printf("Entered number is even :");
    }
    else
    {
        printf("Entered number is odd :");
    }
    return 0;
}


