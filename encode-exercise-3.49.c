/*
Encode and decode a four-digit integer.
*/

#include <stdio.h>

int main ()
{
    int number;
    int d1, d2, d3, d4; // digits
    int number_coded;

	printf("Enter a number to encode: ");
	scanf("%d", &number);

	// Split number in digit
    d4 = number % 10;
	number = (number / 10);
	d3 = number % 10;
	number = number / 10;
	d2 = number % 10;
	number = number / 10;
	d1 = number % 10;
	number = number / 10;

	// Encode
    d4 = (d4 + 7) % 10;
    d3 = (d3 + 7) % 10;
    d2 = (d2 + 7) % 10;
    d1 = (d1 + 7) % 10;

    number_coded = d3 * 1000 + d4 * 100 + d1 * 10 + d2;
    
    printf("Coded number: %d", number_coded);
    
    return 0;
}
