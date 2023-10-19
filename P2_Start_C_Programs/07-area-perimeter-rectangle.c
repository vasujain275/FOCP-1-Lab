// Program to Compute the perimeter and area of a rectangle

#include <stdio.h>

int main()
{
    int length, breadth, perimeter, area;
    printf("Enter the length of the rectangle: ");
    scanf("%d", &length);
    printf("Enter the breadth of the rectangle: ");
    scanf("%d", &breadth);
    perimeter = 2 * (length + breadth);
    area = length * breadth;
    printf("Perimeter of the rectangle is %d\n", perimeter);
    printf("Area of the rectangle is %d\n", area);
    return 0;
}