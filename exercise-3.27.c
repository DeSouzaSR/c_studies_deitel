/*
Find the two largest values of the 10 numbers.
*/

#include <stdio.h>

int main () {

    int limit = 10;
    int counter = 1;
    int number;
    int largest1, largest2;
    int tmp;

    printf("Enter number: \n");
    scanf("%d", &number);
    largest1 = number;
    largest2 = number;
    while (contador < limite){
        scanf("%d", &numero);

        if (numero > largest1){
            largest1 = numero;
        }

        if (largest1 > largest2){
            tmp = largest1;
            largest1 = largest2;
            largest2 = tmp;
        }
        contador += 1;
    }

    printf("Maior número: %d\n", maior);
}
