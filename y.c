#include<stdio.h>

int main(){

    int A, NEXT, PRIVIOUS;

    printf("Digite um valor para A: \n");
    scanf("%d", &A);

    NEXT = A+1;
    PRIVIOUS = A-1;

    printf("O próximo número de %d é %d. \n", A, NEXT);
    printf("O número anterior a %d é %d. \n", A, PRIVIOUS);
}