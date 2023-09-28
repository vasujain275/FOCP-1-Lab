// Write a program in C to input the seconds and output the number of hours, minutes and seconds.

#include <stdio.h>

int main(void)
{
    int seconds;
    int hours;
    int minutes;

    printf("Input seconds: ");
    scanf("%d", &seconds);

    hours = seconds / 3600;
    seconds = seconds % 3600;
    minutes = seconds / 60;
    seconds = seconds % 60;

    printf("Hours: %d\n", hours);
    printf("Minutes: %d\n", minutes);
    printf("Seconds: %d\n", seconds);

    return 0;
}