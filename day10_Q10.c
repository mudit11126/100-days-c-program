//Write a program to input time in seconds and convert it to hours:minutes:seconds format.
#include <stdio.h>

int main() 
{
    int total_seconds;
    int hours, minutes, seconds;

    printf("Enter time in total seconds: ");
    scanf("%d", &total_seconds);

    hours = total_seconds / 3600;                
    minutes = (total_seconds % 3600) / 60;       
    seconds = total_seconds % 60;                

    printf("Time: %02d:%02d:%02d\n", hours, minutes, seconds);

    return 0;
}