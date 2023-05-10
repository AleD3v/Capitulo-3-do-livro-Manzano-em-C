#include<stdio.h>

int main(){

    float D, T, V;

    printf("Digite a distância percorrida: \n");
    scanf("%f", &D);

    printf("Digite o tempo decorrido em minutos: \n");
    scanf("%f", &T);

    V = (D*1000)/(T*60);
  
    printf("O resultado da velocidade média é %.2f m/s. \n", V);

}
