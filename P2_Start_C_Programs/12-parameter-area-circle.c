// Compute the perimeter and area of a circle

#include <stdio.h>

int main()
{
    int radius;
    float perimeter, area;
    printf("Enter the radius of the circle: ");
    scanf("%d", &radius);
    perimeter = 2 * 3.14 * radius;
    area = 3.14 * radius * radius;
    printf("Perimeter of the circle is %f\n", perimeter);
    printf("Area of the circle is %f\n", area);
    return 0;
}