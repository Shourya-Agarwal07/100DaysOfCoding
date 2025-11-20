// Create an enum for months and print how many days each month has.
#include <stdio.h>

typedef enum
{
    JANUARY = 1,
    FEBRUARY,
    MARCH,
    APRIL,
    MAY,
    JUNE,
    JULY,
    AUGUST,
    SEPTEMBER,
    OCTOBER,
    NOVEMBER,
    DECEMBER
} Month;

int days_in_month(Month m)
{
    switch (m)
    {
    case JANUARY:
        return 31;
    case FEBRUARY:
        return 28; 
    case MARCH:
        return 31;
    case APRIL:
        return 30;
    case MAY:
        return 31;
    case JUNE:
        return 30;
    case JULY:
        return 31;
    case AUGUST:
        return 31;
    case SEPTEMBER:
        return 30;
    case OCTOBER:
        return 31;
    case NOVEMBER:
        return 30;
    case DECEMBER:
        return 31;
    default:
        return -1;
    }
}

int main()
{
    for (Month m = JANUARY; m <= DECEMBER; m++)
    {
        printf("%d - ", m);

        switch (m)
        {
        case JANUARY:
            printf("January");
            break;
        case FEBRUARY:
            printf("February");
            break;
        case MARCH:
            printf("March");
            break;
        case APRIL:
            printf("April");
            break;
        case MAY:
            printf("May");
            break;
        case JUNE:
            printf("June");
            break;
        case JULY:
            printf("July");
            break;
        case AUGUST:
            printf("August");
            break;
        case SEPTEMBER:
            printf("September");
            break;
        case OCTOBER:
            printf("October");
            break;
        case NOVEMBER:
            printf("November");
            break;
        case DECEMBER:
            printf("December");
            break;
        }

        printf(" has %d days\n", days_in_month(m));
    }

    return 0;
}
