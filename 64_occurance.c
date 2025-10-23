// Find the digit that occurs the most times in an integer number.
#include <stdio.h>

int main()
{
    long long num;
    int count[10] = {0};
    int digit, i, maxCount = 0, mostDigit;
    printf("Enter an integer number: ");
    scanf("%lld", &num);

    if (num < 0)
        num = -num;
    while (num > 0)
    {
        digit = num % 10;
        count[digit]++;
        num /= 10;
    }
    for (i = 0; i < 10; i++)
    {
        if (count[i] > maxCount)
        {
            maxCount = count[i];
            mostDigit = i;
        }
    }
    printf("The digit that occurs most is %d and it occurs %d times.\n", mostDigit, maxCount);
    return 0;
}
