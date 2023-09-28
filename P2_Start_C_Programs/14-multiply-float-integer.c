// C program to multiply 2 integer, floating numbers

#include <stdio.h>

int main()
{
    int a;
    float b;
    printf("Enter an integer: ");
    scanf("%d", &a);
    printf("Enter a float: ");
    scanf("%f", &b);
    printf("Product of %d and %f is %f\n", a, b, a * b);
    return 0;
}