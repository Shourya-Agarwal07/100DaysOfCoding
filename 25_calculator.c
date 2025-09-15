//Write a program to implement a basic calculator using switch-case for +, -, *, /, %.
#include <stdio.h>

int main()
{
    int num1, num2, result;
    char operator;
    printf("Enter first number: ");
    scanf("%d", &num1);
    printf("Enter second number: ");
    scanf("%d", &num2);
    printf("Enter an operator (+, -, *, /): ");
    scanf(" %c", &operator);
    switch (operator)
    {
    case '+':
        result = num1 + num2;
        printf("%d + %d = %d\n", num1, num2, result);
        break;
    case '-':
        result = num1 - num2;
        printf("%d - %d = %d\n", num1, num2, result);
        break;
    case '*':
        result = num1 * num2;
        printf("%d * %d = %d\n", num1, num2, result);
        break;
    case '/':
        if (num2 != 0)
        {
            result = num1 / num2;
            printf("%d / %d = %d\n", num1, num2, result);
        }
        else
        {
            printf("Error: Division by zero is not defined.\n");
        }
        break;
    default:
        printf("Error: Invalid operator.\n");
    }
    return 0;
}
