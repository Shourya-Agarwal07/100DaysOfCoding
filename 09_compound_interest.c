//Write a program to calculate simple and compound interest for given principal, rate, and time.
#include<stdio.h>
#include <math.h>

int main(){
    int p;
    int t;
    float r;
    int n;
    printf("Enter Principle Amount");
    scanf("%d",&p);
    printf("Principle Amount is %d\n",p);
    printf("Enter Time Period");
    scanf("%d",&t);
    printf("The Given Time Period is %d\n",t);
    printf("Enter Rate");
    scanf("%f",&r);
    printf("Rate Of Interest  is %f\n",r);
    printf("Simple Interest is %f\n",(p*r*t)/100);
    printf("Compound Interest is %f\n",p*pow(1+(r/100),t)-p);
    return 0;
    
}
