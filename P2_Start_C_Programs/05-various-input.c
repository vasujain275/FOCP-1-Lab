// Program to take input of various datatypes in C
#include <stdio.h>

int main()
{
    int a;
    float b;
    char c;
    printf("Enter an integer: ");
    scanf("%d", &a);
    printf("Enter a float: ");
    scanf("%f", &b);
    printf("Enter a character: ");
    scanf(" %c", &c);
    printf("You entered: %d, %f, %c\n", a, b, c);
    return 0;
}