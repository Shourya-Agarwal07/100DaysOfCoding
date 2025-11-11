// Write a program to take an integer array as input. Only one element will be repeated. Print the repeated element. Try to find the result in one single iteration.
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    printf("Enter size of array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d elements (values between 0 and %d): ", n, n - 1);
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    int repeated = -1;

    for (int i = 0; i < n; i++)
    {
        int index = abs(arr[i]); 

        if (arr[index] < 0)
        { 
            repeated = index;
            break;
        }

        arr[index] = -arr[index]; 
    }

    if (repeated != -1)
        printf("Repeated element: %d\n", repeated);
    else
        printf("No repetition found\n");

    return 0;
}
