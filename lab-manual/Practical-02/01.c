// Write a program that reads a floating-point number and then displays the right-most digit of the integral part of the number

#include <stdio.h>

int main()
{
    float number;
    printf("Enter a floating-point number: ");
    scanf("%f", &number);
    printf("The right-most digit of the integral part of the number is: %d\n", (int)number % 10);
    return 0;
}