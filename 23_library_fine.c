/*Write a program to calculate library fine based on late days as follows:
First 5 days late: ₹2/day
Next 5 days late: ₹4/day
Next 20 days days late: ₹6/day
More than 30 days: Membership Cancelled.*/

#include <stdio.h>

int main()
{
    int days, fine;
    printf("Enter the number of days the book is returned late: ");
    scanf("%d", &days);
    if (days <= 5)
    {
        fine = days * 2;
        printf("The fine is: %d\n", fine);
    }
    else if (days <= 10)
    {
        fine = (5 * 2) + ((days - 5) * 4);
        printf("The fine is: %d\n", fine);
    }
    else if (days <= 20)
    {
        fine = (5 * 2) + (5 * 4) + ((days - 10) * 6);
        printf("The fine is: %d\n", fine);
    }
    else
    {
        printf("The member's library card is cancelled.\n");
    }
    return 0;
}
