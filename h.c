#include<stdio.h>

int main(){

    int C, L, A, V;

    printf("Digite o valor da largura da caixa: \n");
    scanf("%d", &L);

    printf("Digite o valor do comprimento da caixa: \n");
    scanf("%d", &C);

    printf("Digite o valor da altura da caixa: \n");
    scanf("%d", &A);

    V = C*L*A;

    printf("O vomule da caixa é de: %dcm^3. \n", V);
}