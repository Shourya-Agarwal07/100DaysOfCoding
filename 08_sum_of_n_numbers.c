//Write a program to find and display the sum of the first n natural numbers.
#include <stdio.h>

int main()
{
    int n, sum;
    printf("Enter The Last Number :");
    scanf("%d", &n);
    printf("Last Number Is :%d\n",   n);
    sum = ("%d",n * (n + 1) / 2);
    printf("Sum Of First n Natural Number is:%d\n", sum);

    return 0;
}
