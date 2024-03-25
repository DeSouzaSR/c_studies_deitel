/*
Split integer

Input: Integer with five digits
Output: The five digits with black space between them

Note: No array or loops
*/
#include <stdio.h>

int main ( void )
{
    int d1, d2, d3, d4, d5;
    int number;
    int remaining;
    int digit; //Digits
    
    // Read a integer
    printf("Enter a integer with five digits: \n");
    scanf("%d", &number);
    printf("The number entered was %d\n", number);

    // Split
    d1 = number % 10;
    remaining = (number - d1)/10;
    d2 = remaining % 10;
    remaining = (remaining - d2)/10;
    d3 = remaining % 10;
    remaining = (remaining - d3)/10;
    d4 = remaining % 10;
    remaining = (remaining - d4)/10;
    d5 = remaining % 10;
    remaining = (remaining - d5)/10;

    // Write out
    printf("\nSplited\n");
    printf("%d-%d-%d-%d-%d\n", d5, d4, d3, d2, d1);
    
}