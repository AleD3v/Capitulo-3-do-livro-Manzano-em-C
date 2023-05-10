#include<stdio.h>
#define pi 3.14159

int main(){

    float R, V;

    printf("Digite a medida do raio da esfera: \n");
    scanf("%f", &R);

    V = (4/3)*pi*(R*R*R);

    printf("O volume da esfera é: %.2fcm^3. \n", V);

}