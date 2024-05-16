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

	d4 = (d2 - 7) % 10;
	d2 = (d4 - 7) % 10;
	d3 = (d1 - 7) % 10;
	d1 = (d3 - 7) % 10;
	
	number_decoded = d1 * 1000 + d2 * 100 + d3 * 10 + d4;
    
    printf("Coded number: %d", number_decoded);
    
    return 0;
}
