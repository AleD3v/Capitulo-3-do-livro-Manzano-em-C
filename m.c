#include<stdio.h>

int main(){

    int A, B, C, SOMA_QUADRADO;

    printf("Digite um valor para A: \n");
    scanf("%d", &A);

    printf("Digite um valor para B: \n");
    scanf("%d", &B);

    printf("Digite um valor para C: \n");
    scanf("%d", &C);

    SOMA_QUADRADO = A*A+B*B+C*C;

    printf("O resultado da soma é: %d. \n", SOMA_QUADRADO);

}