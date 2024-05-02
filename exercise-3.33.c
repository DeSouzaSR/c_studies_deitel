/*
Asterisks square. Write a program that reads the side of a square and then displays that square using asterisks. Your program should work for squares of all side sizes between 1 and 20. For example, if the program reads a size 4, it
should display:

****
****
****
****

*/
#include <stdio.h>

int main (){
    int i, j; // Index for loop
    int side;

    printf("Enter side of square: \n");
    scanf("%d", &side);

    i = 0;
    j = 0;
    while (i < side){
        while (j < side){
            printf("*");
            j++;
        }
        printf("\n");
        j = 0;
        i++;
    }
}