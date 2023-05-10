#include<stdio.h>

int main(){

    float COTACAO_DOLAR, DOLAR, VALOR_REAIS;

    printf("Digite o valor da cotação do dólar: \n");
    scanf("%f", &COTACAO_DOLAR);

    printf("Digite quanto de dinheiro você tem em dólares: \n");
    scanf("%f", &DOLAR);

    VALOR_REAIS = COTACAO_DOLAR*DOLAR;

    printf("Você tem R$%.2f reais. \n", VALOR_REAIS);
}