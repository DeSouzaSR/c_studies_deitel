/*
This program reads five integers and then determines and 
prints the largest and smallest integer in the group*/

#include <stdio.h>
int main ( void )
{
    int num1, num2, num3, num4, num5;
    int largest, smallest;

    // Read five numbers
    printf("\nEnter five different integers: ");
    scanf("%d %d %d %d %d", &num1, &num2, &num3, &num4, &num5);
    printf("\nFive numbers: %d %d %d %d %d\n", num1, num2, num3, num4, num5);

    // Largest
    largest = num1;
    if (num2 > largest)    
    {
        largest = num2;
    }
    if (num3 > largest)    
    {
        largest = num3;
    }
    if (num4 > largest)    
    {
        largest = num4;
    }
    if (num5 > largest)    
    {
        largest = num5;
    }

    // Smallest
    smallest = num1;
    if (num2 < smallest)    
    {
        smallest = num2;
    }
    if (num3 < smallest)    
    {
        smallest = num3;
    }
    if (num4 < smallest)    
    {
        smallest = num4;
    }
    if (num5 < smallest)    
    {
        smallest = num5;
    }

    // Write out results
    printf("Largest: %d\n", largest);
    printf("Smallest: %d\n", smallest);

    return 0;
}