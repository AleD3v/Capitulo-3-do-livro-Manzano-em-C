#include<stdio.h>

int main(){

    float V, TAXA, PRESTAÇÃO, T;

    printf("Digite o valor da prestação: \n");
    scanf("%f", &V);

    printf("Digite a taxa da prestação: \n");
    scanf("%f", &TAXA);

    printf("Digite o tempo de atraso: \n");
    scanf("%f", &T);

    PRESTAÇÃO = V+(V*(TAXA/100)*T);

    printf("O valor final da prestação é de R$%.2f \n", PRESTAÇÃO);
}