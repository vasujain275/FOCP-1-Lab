// Program to calculate the volume of sphere

#include <stdio.h>

int main()
{
    float radius, volume;
    printf("Enter radius of sphere: ");
    scanf("%f", &radius);
    volume = (4.0 / 3.0) * 3.14159 * radius * radius * radius;
    printf("Volume of sphere with radius %f is %f\n", radius, volume);
    return 0;
}