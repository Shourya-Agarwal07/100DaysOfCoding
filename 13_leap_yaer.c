//Write a program to input a year and check whether it is a leap year or not using conditional statements.
#include <stdio.h>

int main()
{
    int year;
    printf("Enter the year");
    scanf("%d",&year);
    if(year%4==0)
    {
        printf("It Is a Leap Year");
    }
    else
    {
        printf("It Is a non Leap Year");

    }

    return 0;
}
