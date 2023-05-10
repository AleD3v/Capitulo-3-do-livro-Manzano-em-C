#include<stdio.h>

int main (){

    float P, MEDIDA_METROS;

    printf("Digite o valor da medida em pés: \n");
    scanf("%f", &P);

    MEDIDA_METROS = P * 0.3048;

    printf("O valor em metros é: %.2fm. \n", MEDIDA_METROS);

}