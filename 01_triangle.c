#include <stdio.h>
#include <math.h>
float main()
{
    float a, b, c;
    printf("Enter the first side");
    scanf("%f", &a);
    printf("The first side is %f\n", a);
    printf("Enter the second side");
    scanf("%f", &b);
    printf("The second side is %f\n", b);
    printf("Enter the third side");
    scanf("%f", &c);
    printf("The third side is %f\n", c);
    if (a + b > c || a + c > b || b + c > a)
    {
        printf("It is a Triangle\n");

        if (a == b && b == c && a == c)
        {
            printf("It is an equilateral triangle");
        }
        else if (a == b || b == c || c == a)
        {
            printf("It is an Isosceles Triangle");
        }

        else if ((a * a) + (b * b) == (c * c))
        {
            printf("Right Angled Triangle");
        }
        else
        {
            printf("It is a Scalene Triangle ");
        }
    }
    else
    {
        printf("Triangle is invalid");
    }

    return 0.0;
}
