#include<stdio.h>

int main(){

    int A, B, QD;

    printf("Digite um valor para A: \n");
    scanf("%d", &A);

    printf("Digite um valor para B: \n");
    scanf("%d", &B);

    QD = (A-B)*(A-B);

    printf("O resultado é: %d. \n", QD);
}