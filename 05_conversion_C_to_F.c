
\\Write a program to convert temperature from Celsius to Fahrenheit.
#include <stdio.h>
int main()
{
    float C;
    printf("Enter The Temperature To be Converted Into Fahrenheit");
    scanf("%f", &C);
    printf("The Temperature in Celcius is %f\n", C);
    printf("The temperature in Fahreheit %f\n", C * (9.0 / 5.0) + 32);
    return 0;
}
