/*
Write a program that calculates the factorial of a number
*/

#include <stdio.h>

int main()
{
    int i;
    int number;
    int fatorial;

    printf("Enter a number: ");
    scanf("%d", &number);

    fatorial = 1;
    for(i = 1; i <= number; i++)
    {
        fatorial *= i;
    }
    printf("Fatoral 4:  %d", fatorial);
    return 0;
}
