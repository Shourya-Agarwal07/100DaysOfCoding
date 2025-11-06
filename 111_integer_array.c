// Write a program to take an integer array arr and an integer k as inputs. The task is to find the first negative integer in each subarray of size k moving from left to right. If no negative exists in a window, print "0" for that window. Print the results separated by spaces as output.
#include <stdio.h>

int main()
{
    int n, k;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the elements of the array: ");
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    printf("Enter the window size k: ");
    scanf("%d", &k);
    int negIndex[n];
    int front = 0, rear = 0;
    printf("First negative integer in each window:\n");
    for (int i = 0; i < k; i++)
    {
        if (arr[i] < 0)
            negIndex[rear++] = i;
    }
    for (int i = k; i <= n; i++)
    {
        if (front != rear)
            printf("%d ", arr[negIndex[front]]);
        else
            printf("0 ");
        while (front != rear && negIndex[front] <= i - k)
            front++;
        if (i < n && arr[i] < 0)
            negIndex[rear++] = i;
    }

    printf("\n");
    return 0;
}
