// Write a program to check if a number is an Armstrong number.
#include <stdio.h>

int main()
{
    int num, result = 0, remainder, original;

    printf("Enter a number: ");
    scanf("%d", &num);

    original = num;

    while (num != 0)
    {
        remainder = num % 10;
        result += remainder*remainder*remainder;
        num /= 10;
    }

    if (original == result)
        printf("%d Is a Armstrong Number.\n", original);
    else
        printf("%d Is not a Armstrong Number.\n", original);

    return 0;
}
