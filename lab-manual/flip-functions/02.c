// Write a program in C to convert 1000 meter per hour to miles per hour.

#include <stdio.h>

int main(void)
{
    float meterPerHour = 1000;
    float milesPerHour = meterPerHour * 0.0006213712;

    printf("%.2f meter per hour is equal to %.2f miles per hour.\n", meterPerHour, milesPerHour);

    return 0;
}