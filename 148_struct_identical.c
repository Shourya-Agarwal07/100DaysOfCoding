// Take two structs as input and check if they are identical.
#include <stdio.h>
#include <string.h>

struct Student
{
    char name[50];
    int roll_no;
    float marks;
};
int areIdentical(struct Student s1, struct Student s2)
{
    if (strcmp(s1.name, s2.name) != 0)
        return 0;
    if (s1.roll_no != s2.roll_no)
        return 0;
    if (s1.marks != s2.marks)
        return 0;

    return 1; 
}

int main()
{
    struct Student a, b;
    printf("Enter details of Student 1:\n");
    printf("Name: ");
    scanf("%s", a.name);
    printf("Roll No: ");
    scanf("%d", &a.roll_no);
    printf("Marks: ");
    scanf("%f", &a.marks);
    printf("\nEnter details of Student 2:\n");
    printf("Name: ");
    scanf("%s", b.name);
    printf("Roll No: ");
    scanf("%d", &b.roll_no);
    printf("Marks: ");
    scanf("%f", &b.marks);
    if (areIdentical(a, b))
        printf("\nThe two structures are IDENTICAL.\n");
    else
        printf("\nThe two structures are NOT identical.\n");

    return 0;
}
