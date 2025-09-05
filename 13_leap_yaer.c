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
