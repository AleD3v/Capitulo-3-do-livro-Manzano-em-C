#include<stdio.h>

int main(){

    float SM, PR, NS;

    printf("Quanto é o seu salário mensal?: \n");
    scanf("%f", &SM);

    printf("De quanto é o percentual de reajuste?: \n");
    scanf("%f", &PR);

    PR = PR/100;
    NS = SM+(SM*PR);

    printf("O seu novo salário é de R$%.2f reias. \n", NS);

}