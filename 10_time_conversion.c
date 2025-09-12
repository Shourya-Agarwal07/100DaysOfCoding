//Write a program to input time in seconds and convert it to hours:minutes:seconds format.
#include <stdio.h>

int main()
{
    int totalseconds, hours, minutes , seconds;
    printf("Enter Total Seconds");
    scanf("%d",&totalseconds);
    printf("Total Seconds are %d\n",totalseconds);
    hours=totalseconds/3600;
    totalseconds=totalseconds%3600;
    minutes=totalseconds/60;
    seconds=totalseconds%60;
    printf("Time: %d:%d:%d", hours,minutes,seconds);
     
    return 0;
}
