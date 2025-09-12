//Write a program to calculate the area and circumference of a circle given its radius.
#include <stdio.h>
int main()
{
    float r;
    float a;
    a = 3.14;
    printf("Enetr The Radius Of Circle");
    scanf("%f", &r);
    printf("The Radius Of Circle is %f\n", r);
    printf("The Circumference Of Cicle is %f\n", 2*a*r);
    printf("The Area Of Cicle is %f\n", a * (r * r));
    return 0;
}
