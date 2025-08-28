#include <stdio.h>

int main()
{
    int a;
    int b;
    printf("Enter The Length of Rectangle");
    scanf("%d", &a);
    printf("The length of rectangle is %d\n", a);
    printf("Enter The Breadth of Rectangle");
    scanf("%d", &b);
    printf("The breadth of rectangle is %d\n", b);
    printf("The perimeter of rectangle is %d\n", 2 * (a * b));
    printf("The area of rectangle is %d\n", a * b);

    return 0;
}