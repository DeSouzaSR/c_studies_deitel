/*
Write a program that reads a series of 10 numbers, determines and prints the largest number
*/

#include <stdio.h>

int main () {

    int limite = 10;
    int contador = 1;
    int numero;
    int maior;

    printf("Enter number: \n");
    scanf("%d", &numero);
    maior = numero;
    while (contador < limite){
        scanf("%d", &numero);
        if (numero > maior){
            maior = numero;
        }
        contador += 1;
    }

    printf("Maior número: %d\n", maior);
}
