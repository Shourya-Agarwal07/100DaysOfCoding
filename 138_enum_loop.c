// Print all enum names and integer values using a loop.
#include <stdio.h>

enum Role
{
    ADMIN = 1,
    USER,
    GUEST
};

int main()
{
    const char *roleNames[] = {"ADMIN", "USER", "GUEST"};
    int start = ADMIN;
    int end = GUEST;
    printf("Enum Values:\n");
    for (int i = start; i <= end; i++)
    {
        printf("%s = %d\n", roleNames[i - 1], i);
    }

    return 0;
}
