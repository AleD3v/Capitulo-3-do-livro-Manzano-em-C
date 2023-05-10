#include<stdio.h>

#define pi 3.1415

int main(){

    int R;
    float A;

    printf("Digite o raio da circuferência: \n");
    scanf("%d", &R);

    A = pi*(R*R);

    printf("O valor da área da circuferência é: %.2fcm^2. \n", A);

}