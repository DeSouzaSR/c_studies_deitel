/*
Exercise 2.20 - Deltel - C How to Program

Write a program that reads the radius of a circle and reports the diameter,
circumference, and area of the circle. Use the constant value 3.14159 for pi.
Perform each of these calculations within the printf statements and use the
%f conversion specifier.

*/

#include <stdio.h>

int main ( void )
{
    float PI = 3.141592; // Constant Pi
    float radius;
    float diameter;
    float circumference;
    float area;

    printf("\nEnter the value for the radius of the circle: \n");
    scanf("%f", &radius);
    printf("Radius = %f\n", radius);

    // Calculations
    diameter = radius * 2;
    circumference = 2 * PI * radius;
    area = PI * radius * radius;

    // Write out
    printf("\n");
    printf("Results:\n");
    printf("--------\n");
    printf("Diameter: %f\n", diameter);
    printf("Circumference: %f\n", circumference);
    printf("Area: %f\n", area);

}