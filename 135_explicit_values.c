// Assign explicit values starting from 10 and print them.
#include <stdio.h>

typedef enum
{
    ERROR_NONE = 10,
    ERROR_NOT_FOUND = 20,
    ERROR_ACCESS_DENIED = 30,
    ERROR_TIMEOUT = 40
} ErrorCode;

int main()
{

    printf("ERROR_NONE        = %d\n", ERROR_NONE);
    printf("ERROR_NOT_FOUND   = %d\n", ERROR_NOT_FOUND);
    printf("ERROR_ACCESS_DENIED = %d\n", ERROR_ACCESS_DENIED);
    printf("ERROR_TIMEOUT     = %d\n", ERROR_TIMEOUT);

    return 0;
}
