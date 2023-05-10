#include<stdio.h>

int main(){

    float COTACAO_REAL, QTD_REAIS, VALOR_DOLAR;

    printf("Digite a cotação do Real: \n");
    scanf("%f", &COTACAO_REAL);

    printf("Digite o quanto você tem em reias: \n");
    scanf("%f", &QTD_REAIS);

    VALOR_DOLAR = QTD_REAIS*COTACAO_REAL;

    printf("Você tem $%.2f dólares. \n", VALOR_DOLAR);
}