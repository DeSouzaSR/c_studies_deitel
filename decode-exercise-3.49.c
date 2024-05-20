/*
Encode and decode a four-digit integer.
*/

#include <stdio.h>

int main ()
{
    int number;
    int d1, d2, d3, d4; // digits
    int number_decoded;

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

	d4 = (d4 - 7) % 10;
	d3 = (d3 - 7) % 10;
	d2 = (d2 - 7) % 10;
	d1 = (d1 - 7) % 10;
	
	printf("d1: %d:\n", d1);

	number_decoded = d4 * 1000 + d3 * 100 + d2 * 10 + d1;
    
    printf("Coded number: %d", number_decoded);
    
    return 0;
}
