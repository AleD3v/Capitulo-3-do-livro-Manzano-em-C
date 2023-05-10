#include<stdio.h>

int main(){

    float A, B, SOMA, SUB, MULT, DIV;

    printf("Digite um valor para A: \n");
    scanf("%f", &A);

    printf("Digite um valor para B: \n");
    scanf("%f", &B);

    SOMA = A+B;
    SUB = A-B;
    MULT = A*B;
    DIV = A/B;

    printf("O resultado da soma de A com B é: %.0f. \n", SOMA);
    printf("O resultado da subtração de A com B é: %.0f. \n", SUB);
    printf("O resultado da multiplicacão com A e B é: %.0f. \n", MULT);
    printf("O resultado da divisão de A com B é: %.2f. \n", DIV);
}
