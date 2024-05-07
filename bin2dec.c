/*
A palindrome is a word, number, phrase, or other sequence of symbols that reads
the same backwards as forwards, such as madam or racecar, the date "22/02/2022.

Write a program that reads a five-digit integer and determines whether or not
it is a palindrome.

Input: int number
Output: "Is the number %d a palindrome? Yes or No

*/

#include <stdio.h>
#include <math.h>

int main () {
	int d; // digit
	int i;  // Counter
	int number;
	int sum = 0;
	
	printf("Enter a binary number: ");
	scanf("%d", &number);
	
	i = 0;
	while(number != 0){
		d = number % 10;
		number = number / 10;
		sum = sum + d * pow(2, i);
		i++;
	}

	printf("\n");
	printf("Decimal: %d", sum);

	return(0);
}
