// Define an enum with SUCCESS, FAILURE, and TIMEOUT, and print messages accordingly.
#include <stdio.h>

typedef enum
{
    SUCCESS = 0,
    FAILURE = 1,
    TIMEOUT = 2
} Status;

int main()
{
    Status s;

    printf("Enter status (0 = SUCCESS, 1 = FAILURE, 2 = TIMEOUT): ");
    scanf("%d", &s);

    switch (s)
    {
    case SUCCESS:
        printf("Operation completed successfully.\n");
        break;

    case FAILURE:
        printf("Operation failed. Please try again.\n");
        break;

    case TIMEOUT:
        printf("Operation timed out. Check your connection.\n");
        break;

    default:
        printf("Invalid status value!\n");
    }

    return 0;
}
