/*
Exercise 2.26: Multiples. This program reads two integers, 
determines and prints if the first is a multiple of the second.
*/
#include <stdio.h>

int main ( void )
{
    int num1, num2; 

    // Read a number
    printf("\nEnter two integers: ");
    scanf("%d %d", &num1, &num2);
    printf("The numbers entered were : %d and %d\n", num1, num2);

    if (num1 % num2 == 0)
    {
        printf("\nThe number %d is multiple of the %d\n", num1, num2);
    }

    if (num1 % num2 != 0)
    {
        printf("\nThe number %d is not multiple of the %d\n", num1, num2);
    }

    return 0;
}