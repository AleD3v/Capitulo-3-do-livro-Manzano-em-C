#include<stdio.h>

int main(){

    float A, B, Q_DIVISAO;

    printf("Digite um valor para A: \n");
    scanf("%f", &A);

    printf("Digite um valor para B: \n");
    scanf("%f", &B);

    Q_DIVISAO = (A/B)*(A/B);

    printf("O resultado do quadrado da divisão entre A e B é: %.2f. \n", Q_DIVISAO);

}