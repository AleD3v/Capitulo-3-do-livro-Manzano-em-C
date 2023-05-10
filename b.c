#include<stdio.h>

int main(){

    int F, C;

    printf("Digite a temperatura em Fahrenheit: \n");
    scanf("%d", &F);

    C = ((F-32)*5)/9;

    printf("A temperatura em graus Celsius é: %dºC. \n", C);
}