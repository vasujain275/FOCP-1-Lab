// C Program to check whether the given integer is positive or negative

#include <stdio.h>

int main()
{
    int a;
    printf("Enter an integer: ");
    scanf("%d", &a);
    if (a > 0)
    {
        printf("%d is positive\n", a);
    }
    else if (a < 0)
    {
        printf("%d is negative\n", a);
    }
    else
    {
        printf("%d is neither positive nor negative\n", a);
    }
    return 0;
}