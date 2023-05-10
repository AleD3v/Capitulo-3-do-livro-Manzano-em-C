#include<stdio.h>

int main(){

    int A, B, C, QUADRADO_SOMA;

    printf("Digite um valor para A: \n");
    scanf("%d", &A);

    printf("Digite um valor par a B: \n");
    scanf("%d", &B);

    printf("Digite um valor para C: \n");
    scanf("%d", &C);

    QUADRADO_SOMA = (A+B+C)*(A+B+C);

    printf("O resultado do quadrado da soma dos 3 valores é: %d. \n",QUADRADO_SOMA);
}