/*
Calculates squares and cubes of numbers from 0 to 10. 

Input: None
Output: squares and cubes

*/
#include <stdio.h>
#include <math.h>

#define COUNT 10

int main ( void )
{
    int i; 

    for ( i = 0; i <= COUNT; i++)
    {
        printf("%d\t%.0f\t%.0f\n", i, pow(i,2), pow(i,3));
    }   
}