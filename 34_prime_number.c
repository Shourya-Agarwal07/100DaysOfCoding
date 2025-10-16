// Write a program to check if a number is prime.
#include<stdio.h>
#include <math.h>
int main()
{
    int n, i, a = 0;
    printf("Enter a number: ");
    scanf("%d", &n);
    if (n <= 1)
    {
        printf("Not prime\n");
    }
    for (i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            a = 1;
            break;
        }
    }
    if (a == 0)
        printf("It is a Prime Number\n");
    else
        printf("It is not a Prime Number\n");
    return 0;
}