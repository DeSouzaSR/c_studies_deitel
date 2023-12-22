/*
This program calculates body mass index.

Prohibited:
mass: mass in kilograms.
height: height in meters.

Exit:
bmi
*/

#include <stdio.h>

int main ( void )
{
    
    float mass, height, bmi;
    char msg[] ="Standard BMI Values\n"
                "Underweight: less than 18.5\n"
                "Normal: between 18.5 and 24.9\n"
                "Overweight: between 25 and 29.9\n"
                "Obese: 30 or more\n";

    printf("\nEnter mass [kg]: ");
    scanf("%f", &mass);
    printf("Enter height [m]: ");
    scanf("%f", &height);

    bmi = mass / (height * height);

    printf("\nBMI\n");
    printf("==============================\n");
    printf("Mass: %.1f\n", mass);
    printf("Height: %.1f\n", height);
    printf("BMI: %.1f\n", bmi);
    printf("------------------------------\n");
    printf("%s",msg);
}