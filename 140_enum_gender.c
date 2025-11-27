// Define a struct with enum Gender and print person's gender.
#include <stdio.h>

enum Gender
{
    MALE = 1,
    FEMALE,
    OTHER
};

struct Person
{
    char name[50];
    enum Gender gender;
};

int main()
{
    struct Person p;

    printf("Enter name: ");
    scanf("%s", p.name);

    printf("\n------Select Gender----------\n");
    printf("1. MALE\n");
    printf("2. FEMALE\n");
    printf("3. OTHER\n");
    printf("Enter choice: ");
    scanf("%d", &p.gender);

    printf("\nPerson Details:\n");
    printf("Name: %s\n", p.name);

    switch (p.gender)
    {
    case MALE:
        printf("Gender: Male\n");
        break;
    case FEMALE:
        printf("Gender: Female\n");
        break;
    case OTHER:
        printf("Gender: Other\n");
        break;
    default:
        printf("Gender: Invalid\n");
    }

    return 0;
}
