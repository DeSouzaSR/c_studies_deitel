/*
Exercise 2.29: Integer value of a character. This program prints the integer
equivalents of the characters A B C a b c 0 1 2 $ * + / and
the blank space character.
*/
#include <stdio.h>
int main ( void )
{
    printf("\nChar\t|Code\n");
    printf("-------------\n");
    //printf("A B C a b c 0 1 2 $ * + / | Code\n");
    printf("%s\t|%d\n", "A",'A');
    printf("%s\t|%d\n", "B",'B');
    printf("%s\t|%d\n", "a",'a');
    printf("%s\t|%d\n", "b",'b');
    printf("%s\t|%d\n", "0",'0');
    printf("%s\t|%d\n", "1",'1');
    printf("%s\t|%d\n", "*",'*');
    printf("%s\t|%d\n", "+",'+');
    printf("%s\t|%d\n", "/",'/');
    printf("%s\t|%d\n", " ",' ');
    
    return 0;
}