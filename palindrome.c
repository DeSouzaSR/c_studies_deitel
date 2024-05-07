/*
A palindrome is a word, number, phrase, or other sequence of symbols that reads
the same backwards as forwards, such as madam or racecar, the date "22/02/2022.

Write a program that reads a five-digit integer and determines whether or not
it is a palindrome.

Input: int number
Output: "Is the number %d a palindrome? Yes or No

*/

#include <stdio.h>

int main () {
	int len = 5; // Superior limit for palindrome size
	int i;  // Counter
	int number;
	int d1, d2, d3, d4, d5; // digits
	
	printf("Enter a integer: ");
	scanf("%d", &number);
	printf("Is the number %d a palindrome? ", number);
	
	d1 = number % 10;
	number = (number / 10);
	d2 = number % 10;
	number = number / 10;
	d3 = number % 10;
	number = number / 10;
	d4 = number % 10;
	number = number / 10;
	d5 = number % 10;
	
	if((d1 == d5) & (d2 == d4) ){
		printf("Yes\n");
	} else {
		printf("No\n");
	}
}
