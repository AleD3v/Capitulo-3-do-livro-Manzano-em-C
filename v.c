#include<math.h>
#include<stdio.h>

int main(){

    int A, B, P;

    printf("Digite uma valor para A: \n");
    scanf("%d", &A);

    printf("Digite um valor para B: \n");
    scanf("%d", &B);

    P = pow(A,B);

    printf("O resultado da potência de A com B é: %d. \n", P);
}

