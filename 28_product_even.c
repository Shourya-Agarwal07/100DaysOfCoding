//Write a program to print the product of even numbers from 1 to n.
#include <stdio.h>
int main()
{
    int i, n, product = 1;
    printf("Enter the number :");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        if (i % 2 == 0)
        {
            product = product * i;
        }
        else
        {
            continue;
        }
    }
    printf("Product of even numbers is : %d\n", product);
    return 0;
}
