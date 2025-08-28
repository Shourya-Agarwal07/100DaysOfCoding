#include <stdio.h>

int main()
{
    int a, b, swap;
    printf("Enetr The First Number");
    scanf("%d", &a);
    printf("Your First Number Is %d\n", a);
    printf("Enter The Second Number");
    scanf("%d", &b);
    printf("Your Second Number Is %d\n", b);
    swap=a;
    a=b;
    b=swap;
    printf("After Swapping\n");
    printf("First Number %d\n",a);
    printf("Second Number %d\n",b);

    return 0;
}
