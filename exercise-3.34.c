/*
Empty asterisks square. Modify the program you wrote in Exercise 3.33 so that
it displays an empty square. For example, if your program reads a size of 5,
it should display:

*****
*   *
*   *
*****

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
        if ((i == 0) || (i == side - 1)) {
            while (j < side){
                printf("*");
                j++;
            }
        } else {
            while (j < side){
                if ((j == 0) || (j == side - 1)){
                    printf("*");
                } else {
                    printf(" ");
                }
                j++;
            }
        }
        printf("\n");
        j = 0;
        i++;
    }
}