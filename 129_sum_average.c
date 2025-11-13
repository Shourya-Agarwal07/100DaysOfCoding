// A file numbers.txt contains a list of integers separated by spaces. Read all integers, compute their sum and average, and print both.
#include <stdio.h>

int main()
{
    FILE *fp;
    int num, count = 0;
    long sum = 0; 
    float average;
    fp = fopen("info.txt", "r");
    if (fp == NULL)
    {
        printf("Error: Cannot open info.txt\n");
        return 1;
    }
    while (fscanf(fp, "%d", &num) == 1)
    {
        sum += num;
        count++;
    }

    fclose(fp);
    if (count == 0)
    {
        printf("The file is empty or contains no valid integers.\n");
        return 0;
    }
    average = (float)sum / count;
    printf("Sum = %ld\n", sum);
    printf("Average = %.2f\n", average);

    return 0;
}
