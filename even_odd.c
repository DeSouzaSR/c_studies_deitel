/*
"Exercise 2.24: Even or Odd. This exercise reads an integer,
determines and prints whether it is even or odd."
*/

#include <stdio.h>

int main ( void )
{
    int num; 

    // Read a number
    printf("\nEnter an integers: ");
    scanf("%d", &num);

    if (num % 2 == 0)
    {
        printf("\nThe number %d is Even\n", num);
    }

    if (num % 2 != 0)   
    {
        printf("\nThe number %d is Odd\n", num);    
    }

    return 0;
}