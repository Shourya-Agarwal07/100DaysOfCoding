//Write a program to input an integer and check whether it is positive, negative or zero using nested if–else
#include <stdio.h>

int main()
{
    int a;
    printf("Enter an Integer");
    scanf("%d", &a);
    if (a >= 0)
    {
        if (a == 0)
        {
            printf("It is a Zero Integer");
        }
        else
        {
            printf("It is an positive Integer");
        }
    }
    else
    {
        printf("It ia a negative integer");
    }

    return 0;
}
