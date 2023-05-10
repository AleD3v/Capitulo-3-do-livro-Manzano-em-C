#include <stdio.h>

int main(){

    float C;
    float F;

    printf("Digite a tempera em graus Celcius: \n");
    scanf("%f", &C);

    F = (C*(9/5))+32;

    printf("A temperatura em Fahrenheit é: %.2f ºF. \n", F);
    
}