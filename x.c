#include<math.h>
#include<stdio.h>

int main(){

    double A, B, P;

    printf("Digite uma valor para A: \n");
    scanf("%lf", &A);

    printf("Digite um valor para B: \n");
    scanf("%lf", &B);

    P = pow(A,(1/B));

    printf("O resultado da potência de A com B é: %.0lf. \n", P);
}

