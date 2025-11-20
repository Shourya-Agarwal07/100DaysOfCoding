// Create an enumeration for days (SUNDAY to SATURDAY) and print each day with its integer value.
#include <stdio.h>

typedef enum
{
    SUNDAY = 0,
    MONDAY,
    TUESDAY,
    WEDNESDAY,
    THURSDAY,
    FRIDAY,
    SATURDAY
} Day;

int main(void)
{
    const char *day_names[] = {
        "SUNDAY", "MONDAY", "TUESDAY", "WEDNESDAY",
        "THURSDAY", "FRIDAY", "SATURDAY"};

    for (Day d = SUNDAY; d <= SATURDAY; d++)
    {
        printf("%s = %d\n", day_names[d], d);
    }

    return 0;
}
