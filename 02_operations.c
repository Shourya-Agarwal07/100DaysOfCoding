//Write a program to input two numbers and display their sum, difference, product, and quotient.
#include <stdio.h>

int main()
{
    int a;
    int b;
    int sum;
    int difference;
    int product;
    int division;
    printf("Enter your first number");
    scanf("%d", &a);
    printf("Your first number is %d\n", a);
    printf("Enter your second number");
    scanf("%d", &b);
    printf("Your second number is %d\n", b);
    printf("Sum is %d\n", sum = a + b);
    printf("Difference is %d\n", difference = a - b);
    printf("product is %d\n", product = a * b);
    printf("Quotient is %d", division = a / b);

    return 0;
}
