//Write a program to input three numbers and find the largest among them using if–else.

#include <stdio.h>

int main()
{
    int a,b,c;
    printf("Enter the first number:");
    scanf("%d",&a);
    printf("Enter the second number:");
    scanf("%d",&b);
    printf("Enter the third number:");
    scanf("%d",&c);
    if(a>b && a>c)
    {
        printf("The greatest number%d",a);
    }
    else if(b>a && b>c)
    {
        printf("The Greatest Number%d",b);
    }
    else
    {
        printf("The Greatest Number%d",c);
    }
    return 0;
}
