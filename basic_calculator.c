/*
Exercise 2.19 - Deltel - C How to Program

This program reads three distinct integers from the keyboard,
then displays the sum, average, product, smallest,
and largest of these numbers. Only the single-selection form
of the "if" statement that you learned in Chapter 2 will be used.
The prompt will be as follows:

Enter three different integers: 13 27 14
*/

#include <stdio.h>

int main ( void )
{
    int num1, num2, num3;
    int smallest, largest;
    float sum, average, product;

    // Read three numbers
    printf("\nEnter three different integers: ");
    scanf("%d %d %d", &num1, &num2, &num3);
    printf("Three numbers: %d %d %d\n", num1, num2, num3);

    // Compute sum, average, product, smallest, and largest
    sum = num1 + num2 + num3;
    average = sum / 3;
    product = num1 * num2 * num3;

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

    // Write out results
    printf("Sum: %f\n", sum);
    printf("Average: %f\n", average);
    printf("Product: %f\n", product);
    printf("Largest: %d\n", largest);
    printf("Smallest: %d\n", smallest);

    return 0;
}
