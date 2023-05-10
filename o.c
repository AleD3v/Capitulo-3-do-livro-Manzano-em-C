#include<stdio.h>

int main(){

    int A, B, C, D, P, S;

    printf("Digite um valor para A: \n");
    scanf("%d", &A);

    printf("Digite um valor para B: \n");
    scanf("%d", &B);

    printf("Digite um valor para C: \n");
    scanf("%d", &C);

    printf("Digite um valor para D: \n");
    scanf("%d", &D);

    P = (A+C)*(A+C);
    S = B+D;

    printf("O resultado do produto notável de A com C é: %d. \n", P);
    printf("O resultado da soma de B com D é: %d. \n", S);
}