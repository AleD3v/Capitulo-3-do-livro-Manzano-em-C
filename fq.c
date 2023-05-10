#include<stdio.h>

int main(){

    int A, B, C;

    printf("Digite um valor para A: \n");
    scanf("%d", &A);

    printf("Digite um valor para B: \n");
    scanf("%d", &B);
    
    C = 0;

    C = A;
    A = B;
    B = C;

    printf("O valor de A agora é: %d \n", A);
    printf("O valor de B agora é: %d \n", B);
}