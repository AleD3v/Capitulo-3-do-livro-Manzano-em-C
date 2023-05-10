#include <stdio.h>

int main(){

    int V, T, D, LITROS_USADOS;

    printf("Digite a velocidade média: \n");
    scanf("%d", &V);

    printf("Digite o tempo gasto em horas: \n");
    scanf("%d", &T);

    D = V*T;
    LITROS_USADOS = D/12;

    printf("A sua velocidade média é de %d km/h e o tempo gasto para realizar o percuso foi de %d horas. \n", V, T);
    printf("Você percorreu uma distância de %d km e gastou %d litros de gasolina. \n", D, LITROS_USADOS);
}
