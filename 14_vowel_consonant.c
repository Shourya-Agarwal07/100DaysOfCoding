//Write a program to input a character and check whether it is a vowel or consonant using if–else.
#include <stdio.h>

int main()
{
    char a;
    printf("Enter the character");
    scanf("%C", &a);
    if (a == 'a' || a == 'e' || a == 'i' || a == 'o' || a == 'u' ||
        a == 'A' || a == 'E' || a == 'I' || a == 'O' || a == 'U')
    {
        printf("It is a vowel");
    }
    else
    {
        printf("It is a consonant");
    }
    return 0;
}
