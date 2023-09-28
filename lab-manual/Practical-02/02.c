// Given an integer number, write a program that displays the number as follows:
// First line: all digits
// Second line: all except first digit
// Third line: all except first two digits
// ............
// Last line: The last digi

#include <stdio.h>

int main()
{
    int number;
    printf("Enter an integer number: ");
    scanf("%d", &number);
    int digits = 0;
    int temp = number;
    while (temp != 0)
    {
        temp /= 10;
        digits++;
    }
    for (int i = 0; i < digits; i++)
    {
        temp = number;
        for (int j = 0; j < i; j++)
        {
            temp /= 10;
        }
        printf("%d\n", temp);
    }
    return 0;
}