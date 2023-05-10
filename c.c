#include<stdio.h>

int main(){

    float R, A, V;

    printf("Digite o valor do raio da lata: \n");
    scanf("%f", &R);

    printf("Digite o valor da altura da lata: \n");
    scanf("%f", &A);

    V = 3.14159*(R*R)*A;

    printf("O volume da lata é: %.2f cm^3. \n", V);
}