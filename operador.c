#include <stdio.h>

int printA(int A)
{
    return(A);
}

int printB(int B)
{
    return(B);
}

int main (void) {
    int N;

    printf("\nEntre com N: \n");
    scanf("%d", &N);

    printf("%d\n", N >= 0 ? printA(N) : printB(N));

    return(0);
}