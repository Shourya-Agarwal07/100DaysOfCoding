#include <stdio.h>

int main()
{
    float weight, height, BMI;
    printf("Enter the weight in Kg");
    scanf("%f", &weight);
    printf("The weight is %f\n", weight);
    printf("Enter the height in meters");
    scanf("%f", &height);
    printf("The height is %f\n", height);
    printf("The BMI is %f\n", BMI = weight / (height * height));
    if (BMI < 15)
    {
        printf("Starvation");
    }
    else if (15.1 < BMI && BMI < 17.5)
    {
        printf("Anorexic");
    }
    else if (17.6 < BMI && BMI < 18.5)
    {
        printf("Underweight");
    }
    else if (18.6 < BMI&& BMI < 24.9)
    {
        printf("Ideal");
    }
    else if (25 < BMI && BMI< 29.9)
    {
        printf("Overweight");
    }
    else if (30 < BMI && BMI< 39.9)
    {
        printf("Obese");
    }
    else if (BMI > 40)
    {
        printf("Morbidity Obese");
    }

    return 0.0;
}
